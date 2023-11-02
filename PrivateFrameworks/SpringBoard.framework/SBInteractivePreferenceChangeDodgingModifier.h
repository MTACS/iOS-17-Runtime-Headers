
@interface SBInteractivePreferenceChangeDodgingModifier : SBDodgingModifier {
    bool  _awaitingFinalAnimation;
    NSString * _identifier;
    SBPreferenceChangeDodgingModifier * _preferenceChangeModifier;
    unsigned long long  _style;
}

- (void).cxx_destruct;
- (long long)animationBehaviorModeForIdentifier:(id)arg1;
- (bool)completesWhenChildrenComplete;
- (id)framesForIdentifiers;
- (id)handlePreferenceChangeEvent:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)zOrderedIdentifiers;

@end
