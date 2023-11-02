
@protocol SBPlatterHomeGestureContextDelegate <NSObject>

@required

- (void)wantsHomeGestureDidChangeForBannerManagerHomeGestureContext:(SBPlatterHomeGestureContext *)arg1;

@optional

- (void)bannerManagerHomeGestureContext:(SBPlatterHomeGestureContext *)arg1 homeGestureOwnershipDidChange:(bool)arg2;
- (<BSInvalidatable> *)gestureRecognizerPriorityAssertionForBannerManagerHomeGestureContext:(SBPlatterHomeGestureContext *)arg1;
- (SBKeyboardHomeAffordanceAssertion *)keyboardHomeAffordanceAssertionForBannerManagerHomeGestureContext:(SBPlatterHomeGestureContext *)arg1;

@end
