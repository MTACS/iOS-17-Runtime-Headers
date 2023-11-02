
@protocol SBHomeGrabberDelegate <NSObject>

@required

- (double)additionalEdgeSpacingForHomeGrabberView:(SBHomeGrabberView *)arg1;

@optional

- (bool)shouldAllowAutoHideForHomeGrabberView:(SBHomeGrabberView *)arg1;
- (bool)shouldAllowThinStyleForHomeGrabberView:(SBHomeGrabberView *)arg1;

@end
