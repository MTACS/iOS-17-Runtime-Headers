
@interface SBSADefaultElementContentProvider : SBSABasePreferencesProvider {
    NSMutableDictionary * _identifiersToElementDescriptions;
    bool  _wasAnimating;
}

- (void).cxx_destruct;
- (void)_pruneElementDescriptionWithIdentifier:(id)arg1;
- (id)_updatedElementDescriptionAssociatedWithElementContext:(id)arg1 transitionDescriptions:(id)arg2 context:(id)arg3 updateReasons:(id)arg4;
- (id)_updatedElementDescriptionFromDescription:(id)arg1 associatedElementContext:(id)arg2 associatedSnapshotContext:(id)arg3 transitionDescriptions:(id)arg4 context:(id)arg5 updateReasons:(id)arg6;
- (id)defaultTransitionSettings;
- (id)preferencesFromContext:(id)arg1;

@end
