#pragma once
namespace first_game_project {

REGISTER_SCRIPT(character_script)
class character_script :public zone::script::entity_script
{
public:
	constexpr explicit character_script(zone::game_entity::entity entity) :zone::script::entity_script(entity) {}

	void update(float delta_time) override;
};

}

