#include <vector>
#include <string>

struct Hero 
{
    std::string name;
    std::vector<std::string> weapons;
    std::vector<std::string> items;
};

class HeroBuilder
{
public:
    void create(std::string name) {
        hero.name = name;
    }

    void addWeapon(std::string weaponName) {
        hero.weapons.emplace_back(weaponName);
    }

    void addItem(std::string itemName) {
        hero.items.emplace_back(itemName);
    }

    Hero get() {
        return hero;
    }

private:
    Hero hero;
};

int main(int argc, const char *argv[])
{
    HeroBuilder warriorBuilder;
    warriorBuilder.create("Steeve the Warrior");
    warriorBuilder.addWeapon("Greataxe");
    warriorBuilder.addItem("Plate Helmet");
    warriorBuilder.addItem("Health Potion");

    Hero warrior = warriorBuilder.get();

    HeroBuilder rogueBuilder;
    rogueBuilder.create("Chikashi the Nimble");
    rogueBuilder.addWeapon("Dagger");
    rogueBuilder.addWeapon("Hidden Knife");
    rogueBuilder.addItem("Poison");

    Hero rogue = rogueBuilder.get();

    return 0;
}
