#pragma once

#include "Interfaces/IArray/IArray.h"
#include <UTemplate/SI.h>

namespace Ubpa {
	template<typename T, size_t N>
	struct Val : SIIT_CRTP<TemplateList<IArray>, Val<T, N>, T, Size<N>> {
		using SIIT_CRTP<TemplateList<IArray>, Val<T, N>, T, Size<N>>::SIIT_CRTP;
	};

	template<size_t N>
	using Valf = Val<float, N>;

	using Valf1 = Valf<1>;
	using Valf2 = Valf<2>;
	using Valf3 = Valf<3>;

	template<size_t N>
	using Vali = Val<int, N>;

	using Vali1 = Vali<1>;
	using Vali2 = Vali<2>;
	using Vali3 = Vali<3>;

	template<size_t N>
	using Valu = Val<unsigned, N>;

	using Valu1 = Valu<1>;
	using Valu2 = Valu<2>;
	using Valu3 = Valu<3>;
}
