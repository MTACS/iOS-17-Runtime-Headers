
@interface SBContinuousExposePeekSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _appLayout;
    long long  _configuration;
    SBSwitcherModifier * _contentModifier;
    SBContinuousExposePeekTransitionModifier * _dismissalTransitionModifier;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) long long configuration;

- (void).cxx_destruct;
- (id)appLayout;
- (id)appLayoutsForContinuousExposeIdentifier:(id)arg1;
- (id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1;
- (long long)configuration;
- (id)debugPotentialChildModifiers;
- (id)handleEvent:(id)arg1;
- (id)handleScrollEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1 configuration:(long long)arg2;
- (bool)isSwitcherWindowVisible;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (unsigned long long)transactionCompletionOptions;

@end
