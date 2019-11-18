#pragma once

#include "alvere/world/archetype/archetype.hpp"
#include "alvere/world/archetype/archetype_query.hpp"
#include "alvere/world/system/updated_system.hpp"

namespace alvere
{
	class DestroySystem : public UpdatedSystem
	{
		Archetype::Query m_DestroyQuery;

		std::vector<std::reference_wrapper<Archetype>> m_Archetypes;

	public:

		DestroySystem();

		virtual void Update(World & world, float deltaTime) override;
	};
}