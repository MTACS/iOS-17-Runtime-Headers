
@protocol SBUIPresentableHomeGestureParticipant <NSObject>

@optional

- (bool)homeAffordanceDidCrossThreshold;
- (void)homeGestureOwnershipDidChange:(bool)arg1;

@end
