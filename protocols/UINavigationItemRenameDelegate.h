
@protocol UINavigationItemRenameDelegate <NSObject>

@required

- (void)navigationItem:(UINavigationItem *)arg1 didEndRenamingWithTitle:(NSString *)arg2;

@optional

- (bool)navigationItem:(UINavigationItem *)arg1 shouldEndRenamingWithTitle:(NSString *)arg2;
- (NSString *)navigationItem:(UINavigationItem *)arg1 willBeginRenamingWithSuggestedTitle:(NSString *)arg2 selectedRange:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (bool)navigationItemShouldBeginRenaming:(UINavigationItem *)arg1;

@end
