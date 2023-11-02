
@protocol _UIFocusUpdateRequesting <NSObject>

@required

- (bool)allowsDeferral;
- (bool)allowsFocusingCurrentItem;
- (bool)allowsOverridingPreferedFocusEnvironments;
- (UIFocusAnimationCoordinator *)animationCoordinator;
- (UIFocusSystem *)focusSystem;
- (_UIFocusInputDeviceInfo *)inputDeviceInfo;
- (bool)isMovementRequest;
- (bool)requiresEnvironmentValidation;
- (bool)requiresNextFocusedItem;
- (bool)shouldPerformHapticFeedback;
- (bool)shouldPlayFocusSound;
- (bool)shouldScrollIfNecessary;

@end
