
@interface SBSADefaultContainerLayoutProvider : SBSABasePreferencesProvider {
    NSMutableArray * _orderedContainerDescriptions;
}

- (void).cxx_destruct;
- (double)_calculateCornerRadiusForContainerDescription:(id)arg1 context:(id)arg2;
- (unsigned long long)_indexOfContainerViewDescriptionWithIdentifier:(id)arg1;
- (void)_pruneContainerDescriptionWithIdentifier:(id)arg1;
- (void)_updateContainerDescriptionAtIndex:(unsigned long long)arg1 transitionDescriptions:(id)arg2 context:(id)arg3 updateReason:(out id*)arg4;
- (void)_updateContainerViewDescription:(id)arg1 transitionDescriptions:(id)arg2 context:(id)arg3;
- (void)_updateContainerViewDescriptionInCollection:(id)arg1;
- (id)behaviorSettingsForProperty:(id)arg1;
- (id)defaultTransitionSettings;
- (id)preferencesFromContext:(id)arg1;

@end
