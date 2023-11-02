
@interface SBSwitcherModifierEvent : SBChainableModifierEvent

@property (nonatomic, readonly) long long type;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (bool)isGestureEvent;
- (bool)isIndirectPanGestureEvent;
- (bool)isTransitionEvent;
- (bool)isWindowDragGestureEvent;
- (id)loggingCategory;
- (long long)type;

@end
