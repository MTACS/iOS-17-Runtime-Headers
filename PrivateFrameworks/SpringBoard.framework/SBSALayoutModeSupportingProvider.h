
@interface SBSALayoutModeSupportingProvider : SBSABasePreferencesProvider {
    SBSALayoutTransitionProvider * _activeTransitionProvider;
}

- (void).cxx_destruct;
- (void)_transitionToLayoutModeIfNecessary:(long long)arg1 context:(id)arg2;
- (id)preferencesFromContext:(id)arg1;

@end
