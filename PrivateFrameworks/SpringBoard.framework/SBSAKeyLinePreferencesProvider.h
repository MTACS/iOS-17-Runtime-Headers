
@interface SBSAKeyLinePreferencesProvider : SBSABasePreferencesProvider {
    SBSAElementLayoutTransition * _lastChangingElementLayoutTransition;
    long long  _lastKnownConsensusBackgroundLuma;
    long long  _mitosisSuppressionState;
    SBSAInterfaceElementPropertyIdentity * _pendingMitosisKeyLineSuppressionUnhidePropertyIdentity;
}

- (void).cxx_destruct;
- (id)behaviorSettingsForProperty:(id)arg1;
- (id)preferencesFromContext:(id)arg1;

@end
