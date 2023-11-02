
@protocol SUNavigationItemDelegate <NSObject>

@required

- (UIBarButtonItem *)navigationItem:(SUNavigationItem *)arg1 willChangeLeftItem:(UIBarButtonItem *)arg2 toNewItem:(UIBarButtonItem *)arg3;
- (NSArray *)navigationItem:(SUNavigationItem *)arg1 willChangeLeftItems:(NSArray *)arg2 toNewItems:(NSArray *)arg3;

@end
