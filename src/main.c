#include <libcgroup.h>

int main(int argc, char *argv[])
{
    cgroup_init();
    struct cgroup *container = cgroup_new_cgroup("test-container");
    cgroup_add_controller(container, "cpu");
    struct cgroup_controller *control = cgroup_get_controller(container, "test-container");
    char *name = cgroup_get_value_name(control, "test-container");
    printf("printed: %s", name);
    return 0;
}
