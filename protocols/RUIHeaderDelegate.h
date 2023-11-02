
@protocol RUIHeaderDelegate

@required

- (void)headerView:(UIView<RUIHeader> *)arg1 activatedLinkWithURL:(NSURL *)arg2;

@optional

- (void)headerViewDidChange:(UIView<RUIHeader> *)arg1;

@end
