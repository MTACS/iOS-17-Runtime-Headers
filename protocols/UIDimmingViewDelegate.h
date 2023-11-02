
@protocol UIDimmingViewDelegate <NSObject>

@optional

- (bool)_allowsFocusBehindDimmingView;
- (void)dimmingViewWasTapped:(UIDimmingView *)arg1;

@end
