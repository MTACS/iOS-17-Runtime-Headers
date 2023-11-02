
@interface SBGestureSwitcherModifier : SBSwitcherModifier {
    NSUUID * _gestureID;
    unsigned long long  _gesturePhase;
    SBGestureSwitcherModifierEvent * _lastGestureEvent;
}

@property (nonatomic, readonly) unsigned long long gesturePhase;

- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)gesturePhase;
- (id)handleEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1;
- (bool)isItemResizingAllowedForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;
- (bool)isPreparingLayout;
- (bool)isUpdatingLayout;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)arg1;
- (bool)requireStripContentsInViewHierarchy;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;

@end
