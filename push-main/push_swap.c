#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	check_error(argv);
	a = ft_process(argc, argv);
	if (!a || ft_checkdup(a))
	{
		ft_freelink(&a);
		ft_error();
	}
	if (!ft_checksorted(a))
		ft_sort(&a);
	ft_freelink(&a);
	return (0);
}
