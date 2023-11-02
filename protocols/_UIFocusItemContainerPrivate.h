
@protocol _UIFocusItemContainerPrivate <UIFocusItemContainer>

@optional

+ (bool)_supportsInvalidatingFocusCache;

- (unsigned long long)_focusGuideBehaviorForFocusMovement:(_UIFocusMovementInfo *)arg1;
- (bool)_isLazyFocusItemContainer;

@end
