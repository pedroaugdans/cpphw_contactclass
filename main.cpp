#include <iostream>
#include <string>
#include <vector>

enum class group { Friends, Family, Coworker, Acquaintance };
enum class feat { fname=0, lname, phone, sphone, email, company, group,end};

using str = std::string;

class Contact {
private:
	unsigned int m_ID;
	std::string m_fname;
	std::string m_lname;
	std::string m_phone;
	std::string m_sphone;
	std::string m_email;
	std::string m_company;
	group m_gr;

public:
	Contact(unsigned int ID, str fname, str lname, str phone, str sphone, str email, str company, group gr) :
		m_ID{ std::forward<unsigned int>(ID) },
		m_fname{ std::forward<str>(fname) },
		m_lname{ std::forward<str>(lname) },
		m_phone{ std::forward<str>(phone) },
		m_sphone{ std::forward<str>(sphone) },
		m_email{ std::forward<str>(email) },
		m_company{ std::forward<str>(company) },
		m_gr{ std::forward<group>(gr) }
	{
		std::cout << "Creating " << fname << " " << lname << " from " << company << std::endl;
	}

	unsigned int extract_ID() { return m_ID; }
	std::pair<str,unsigned int> extract_fname() {	return std::make_pair(m_fname, m_ID);	}
	std::pair<str, unsigned int> extract_lname() { return std::make_pair(m_lname, m_ID); }
	std::pair<str, unsigned int> extract_phone() { return std::make_pair(m_phone, m_ID); }
	std::pair<str, unsigned int> extract_sphone() { return std::make_pair(m_sphone, m_ID); }
	std::pair<str, unsigned int> extract_email() { return std::make_pair(m_email, m_ID); }
	std::pair<str, unsigned int> extract_company() { return std::make_pair(m_company, m_ID); }
	std::pair<group, unsigned int> extract_group() { return std::make_pair(m_gr, m_ID); }
};

std::pair<str,unsigned int> return_feature_map(feat feature_to_return) {
	switch (feature_to_return) {
	case:
		break;
	}
}

void displayContacts(std::vector<feat> feat_to_print,std::vector<Contact> contacts) {
	unsigned int print_mask = 0;
	for (auto feat_printed : feat_to_print ) {
		print_mask |= (1 << static_cast<unsigned int>(feat_printed));
	}
	for(auto person: contacts){
		std::cout << "Person ID " << person.extract_ID();
		if (print_mask| static_cast<unsigned int>(feat::fname)) {
		std::cout << " name " << person.extract_fname().first;
		} if (print_mask | static_cast<unsigned int>(feat::lname)) {
			std::cout << " name " << person.extract_lname().first;
		} if (print_mask | static_cast<unsigned int>(feat::phone)) {
			std::cout << " name " << person.extract_phone().first;
		} if (print_mask | static_cast<unsigned int>(feat::sphone)) {
			std::cout << " name " << person.extract_sphone().first;
		}if (print_mask | static_cast<unsigned int>(feat::email)) {
			std::cout << " name " << person.extract_email().first;
		}if (print_mask | static_cast<unsigned int>(feat::company)) {
			std::cout << " name " << person.extract_company().first;
		}if (print_mask | static_cast<unsigned int>(feat::group)) {
			std::cout << " name " << static_cast<unsigned int>(person.extract_group().first);
		}
	}
}

void sortfor(feat feat_to_sort) {

}

void displayFrom() {

}

void contactCount() {

}

void contactSearch() {

}



int main() {
	Contact per1{1,"pablo","obl","1234","9875","pablob@gmail","lol",group::Family },
		per2{ 2,"pedro","inf","2345","9841","pedro@gmail","rofl",group::Friends },
		per3{ 3,"pico","lar","4567","9861","pico@gmail","lolz",group::Acquaintance },
		per4{ 4,"poco","zur","1357","9721","poco@gmail","lolz",group::Acquaintance },
		per5{ 5,"caro","ker","1479","9843","caro@gmail","lol",group::Family },
		pe6{ 6,"cero","mer","1819","9752","cero@gmail","lol",group::Coworker};

	std::pair<std::string, unsigned int> test_result = per3.extract_fname();
	std::cout << "testing: person " << test_result.first << std::endl;

}