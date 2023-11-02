
@interface SBOverrideContinuousExposeIdentifiersSwitcherModifier : SBSwitcherModifier {
    NSArray * _overrideContinuousExposeIdentifiersInStrip;
    NSArray * _overrideContinuousExposeIdentifiersInSwitcher;
}

@property (nonatomic, readonly, copy) NSArray *overrideContinuousExposeIdentifiersInStrip;
@property (nonatomic, readonly, copy) NSArray *overrideContinuousExposeIdentifiersInSwitcher;

- (void).cxx_destruct;
- (id)continuousExposeIdentifiersInStrip;
- (id)continuousExposeIdentifiersInSwitcher;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithContinuousExposeIdentifiersInSwitcher:(id)arg1 continuousExposeIdentifiersInStrip:(id)arg2;
- (id)overrideContinuousExposeIdentifiersInStrip;
- (id)overrideContinuousExposeIdentifiersInSwitcher;
- (void)setState:(long long)arg1;

@end
