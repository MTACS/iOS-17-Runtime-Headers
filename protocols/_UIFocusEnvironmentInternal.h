
@protocol _UIFocusEnvironmentInternal <_UIFocusEnvironmentPrivate>

@optional

- (void)_didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (<_UIFocusRegionContainer> *)_focusMapContainer;
- (UIResponder *)_focusResponderForwardingTarget;
- (<UIFocusEnvironment> *)_overridingPreferredFocusEnvironment;
- (bool)_prefersFocusContainment;
- (bool)_shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)_willUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;

@end
