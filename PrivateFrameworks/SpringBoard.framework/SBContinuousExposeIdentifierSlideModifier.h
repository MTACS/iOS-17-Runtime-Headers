
@interface SBContinuousExposeIdentifierSlideModifier : SBSwitcherModifier {
    NSString * _continuousExposeIdentifier;
    unsigned long long  _direction;
    bool  _isWaitingToBeginAnimation;
    bool  _isWaitingToPrepareLayout;
    NSArray * _previousContinuousExposeIdentifiersInStrip;
    NSArray * _previousContinuousExposeIdentifiersInSwitcher;
    NSString * _uniqueAnimationIdentifier;
}

@property (nonatomic, readonly, copy) NSString *continuousExposeIdentifier;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly, copy) NSArray *previousContinuousExposeIdentifiersInStrip;
@property (nonatomic, readonly, copy) NSArray *previousContinuousExposeIdentifiersInSwitcher;

- (void).cxx_destruct;
- (id)_beginAnimation;
- (void)_performBlockWithIdentifiersInSwitcher:(id)arg1 identifiersInStrip:(id)arg2 block:(id /* block */)arg3;
- (id)_waitingToAnimateReason;
- (id)_waitingToPrepareLayoutReason;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedSpaceAccessoryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAppLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })anchorPointForIndex:(unsigned long long)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)continuousExposeIdentifier;
- (unsigned long long)direction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (id)handleContinuousExposeIdentifiersChangedEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithContinuousExposeIdentifier:(id)arg1 previousContinuousExposeIdentifiersInSwitcher:(id)arg2 previousContinuousExposeIdentifiersInStrip:(id)arg3 direction:(unsigned long long)arg4;
- (id)previousContinuousExposeIdentifiersInStrip;
- (id)previousContinuousExposeIdentifiersInSwitcher;
- (double)scaleForIndex:(unsigned long long)arg1;

@end
