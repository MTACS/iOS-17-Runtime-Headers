
@protocol SBFluidSwitcherContentViewDelegate <NSObject>

@required

- (SBFluidSwitcherItemContainer *)defaultFocusItem;
- (UIScrollView *)switcherScrollView;

@end
