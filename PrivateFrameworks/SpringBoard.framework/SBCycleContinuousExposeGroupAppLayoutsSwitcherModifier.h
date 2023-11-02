
@interface SBCycleContinuousExposeGroupAppLayoutsSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _appLayout;
    SBAppLayout * _appLayoutToOrderFront;
    SBAppLayout * _behindAppLayout;
    unsigned long long  _generationCount;
    unsigned long long  _initialGenerationCount;
    bool  _isDelayingCompletionForHover;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) SBAppLayout *behindAppLayout;
@property (nonatomic, readonly) unsigned long long generationCount;

- (void).cxx_destruct;
- (id)_completeIfNeeded;
- (id)_completeIfNeededIgnoringHover:(bool)arg1;
- (id)_timeoutReason;
- (id)appLayout;
- (id)appLayoutsForContinuousExposeIdentifier:(id)arg1;
- (id)behindAppLayout;
- (unsigned long long)generationCount;
- (id)handleContinuousExposeIdentifiersChangedEvent:(id)arg1;
- (id)handleHighlightEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1 behindAppLayout:(id)arg2 generationCount:(unsigned long long)arg3;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)visibleAppLayouts;

@end
