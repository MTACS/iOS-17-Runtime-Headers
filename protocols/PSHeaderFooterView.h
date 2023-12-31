
@protocol PSHeaderFooterView

@required

- (UIView<PSHeaderFooterView> *)initWithSpecifier:(PSSpecifier *)arg1;

@optional

- (double)preferredHeightForWidth:(double)arg1;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(UITableView *)arg2;
- (void)refreshContentsWithSpecifier:(PSSpecifier *)arg1;

@end
