
@protocol CKBrowserSwitcherFooterViewDelegate <NSObject>

@required

- (void)switcherView:(CKBrowserSwitcherFooterView *)arg1 didMagnify:(bool)arg2;
- (void)switcherView:(CKBrowserSwitcherFooterView *)arg1 didSelectPluginAtIndex:(NSIndexPath *)arg2;

@optional

- (NSIndexPath *)indexPathOfCurrentlySelectedPluginInSwitcherView:(CKBrowserSwitcherFooterView *)arg1;

@end
