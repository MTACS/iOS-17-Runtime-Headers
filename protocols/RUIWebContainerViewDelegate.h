
@protocol RUIWebContainerViewDelegate <NSObject>

@required

- (void)webContainerView:(RUIWebContainerView *)arg1 didClickLinkWithURL:(NSURL *)arg2;

@optional

- (void)webContainerViewContentDidChange:(RUIWebContainerView *)arg1;

@end
