
@protocol CSModalHomeGestureParticipating <NSObject>

@required

- (void)addGrabberView:(UIView *)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(bool)arg1;

@optional

- (double)additionalEdgeSpacingForGrabberView:(UIView *)arg1;

@end
