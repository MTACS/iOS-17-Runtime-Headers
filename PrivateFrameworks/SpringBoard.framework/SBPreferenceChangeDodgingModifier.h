
@interface SBPreferenceChangeDodgingModifier : SBDodgingModifier {
    bool  _animated;
    bool  _boostUpdatedIdentifier;
    NSString * _identifier;
    unsigned long long  _phase;
    bool  _resignLifecycleManagement;
}

@property (getter=isResigningLifecycleManagement, nonatomic) bool boostUpdatedIdentifier;
@property (getter=isResigningLifecycleManagement, nonatomic) bool resignLifecycleManagement;

- (void).cxx_destruct;
- (long long)animationBehaviorModeForIdentifier:(id)arg1;
- (id)handleAnimationCompletionEvent:(id)arg1;
- (id)handlePreferenceChangeEvent:(id)arg1;
- (id)initWithIdentifier:(id)arg1 animated:(bool)arg2;
- (bool)isResigningLifecycleManagement;
- (bool)isResigningLifecycleManagement;
- (id)modelForInvalidatedModel:(id)arg1;
- (void)setBoostUpdatedIdentifier:(bool)arg1;
- (void)setResignLifecycleManagement:(bool)arg1;
- (id)zOrderedIdentifiers;

@end
