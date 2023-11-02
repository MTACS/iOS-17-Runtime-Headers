
@protocol SBBarSwipeAffordanceDelegate <NSObject>

@required

- (unsigned long long)barSwipeAffordanceView:(SBBarSwipeAffordanceView *)arg1 systemGestureTypeForType:(long long)arg2;

@optional

- (BSAnimationSettings *)hideAnimationSettingsForBarSwipeAffordanceView:(SBBarSwipeAffordanceView *)arg1;
- (BSAnimationSettings *)unhideAnimationSettingsForBarSwipeAffordanceView:(SBBarSwipeAffordanceView *)arg1;

@end
