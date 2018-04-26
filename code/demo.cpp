#include <boost/math/distributions/extreme.hpp>

template <class RealType = double,
	           class Policy   = policies::policy<> >
		   class extreme_value_distribution;

		   typedef extreme_value_distribution<> extreme_value;

		   template <class RealType, class Policy>
		   class extreme_value_distribution
{
	public:
   typedef RealType value_type;

   extreme_value_distribution(RealType location = 0, RealType scale = 1);

   RealType scale()const;
   RealType location()const;
};
