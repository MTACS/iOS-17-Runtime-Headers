
@interface SBContinuousExposeIdentifiersChangedModifierEvent : SBSwitcherModifierEvent {
    bool  _animated;
    bool  _gestureInitiated;
    NSArray * _previousContinuousExposeIdentifiersInStrip;
    NSArray * _previousContinuousExposeIdentifiersInSwitcher;
    SBAppLayout * _transitioningFromAppLayout;
    SBAppLayout * _transitioningToAppLayout;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (getter=isGestureInitiated, nonatomic, readonly) bool gestureInitiated;
@property (nonatomic, readonly, copy) NSArray *previousContinuousExposeIdentifiersInStrip;
@property (nonatomic, readonly, copy) NSArray *previousContinuousExposeIdentifiersInSwitcher;
@property (nonatomic, readonly) SBAppLayout *transitioningFromAppLayout;
@property (nonatomic, readonly) SBAppLayout *transitioningToAppLayout;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithPreviousContinuousExposeIdentifiersInSwitcher:(id)arg1 previousContinuousExposeIdentifiersInStrip:(id)arg2 transitioningFromAppLayout:(id)arg3 transitioningToAppLayout:(id)arg4 animated:(bool)arg5 gestureInitiated:(bool)arg6;
- (bool)isAnimated;
- (bool)isGestureInitiated;
- (id)previousContinuousExposeIdentifiersInStrip;
- (id)previousContinuousExposeIdentifiersInSwitcher;
- (id)transitioningFromAppLayout;
- (id)transitioningToAppLayout;
- (long long)type;

@end
