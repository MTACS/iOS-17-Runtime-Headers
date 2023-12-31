
@protocol UINavigationBarDelegate <UIBarPositioningDelegate>

@optional

- (void)navigationBar:(UINavigationBar *)arg1 didPopItem:(UINavigationItem *)arg2;
- (void)navigationBar:(UINavigationBar *)arg1 didPushItem:(UINavigationItem *)arg2;
- (bool)navigationBar:(UINavigationBar *)arg1 shouldPopItem:(UINavigationItem *)arg2;
- (bool)navigationBar:(UINavigationBar *)arg1 shouldPushItem:(UINavigationItem *)arg2;
- (long long)navigationBarNSToolbarSection:(UINavigationBar *)arg1;

@end
