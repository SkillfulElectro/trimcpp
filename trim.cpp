#include <string>

std::string trim(std::string name) {
	int i{ 0 };
	std::string renamer;
	while (i < name.length()) {
		if (name[i] != ' ') {
			renamer = renamer + name[i];
		}
		i++;
	}

	return renamer;
}