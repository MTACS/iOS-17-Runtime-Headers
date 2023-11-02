
@protocol TUIButtonBarViewProvider <NSObject>

@required

- (void)configureButtonBarItemView:(TUIButtonBarItemView *)arg1 forItem:(UIBarButtonItem *)arg2 group:(UIBarButtonItemGroup *)arg3;
- (void)preferredSizeDidChangeForButtonBarItem:(UIBarButtonItem *)arg1;
- (void)preferredSizeDidChangeForGroup:(UIBarButtonItemGroup *)arg1;
- (struct CGSize { double x1; double x2; })preferredSizeForButtonBarItem:(UIBarButtonItem *)arg1;

@end
