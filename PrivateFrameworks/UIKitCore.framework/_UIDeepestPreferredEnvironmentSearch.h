
@interface _UIDeepestPreferredEnvironmentSearch : NSObject {
    bool  _allowsOverridingPreferedFocusEnvironments;
    _UIDebugLogNode * _debugLog;
}

@property (nonatomic) bool allowsOverridingPreferedFocusEnvironments;
@property (nonatomic, retain) _UIDebugLogNode *debugLog;

- (void).cxx_destruct;
- (id)_overridingPreferredFocusEnvironmentForPreferredEnvironment:(id)arg1 visitedFocusEnvironments:(id)arg2;
- (void)_reportDidFindLockedFocusEnvironment:(id)arg1;
- (void)_reportDidFindOverridingPreferredFocusEnvironment:(id)arg1 source:(id)arg2;
- (void)_reportDidFinishEnumeratingPreferencesWithDeepestPreferredFocusableItem:(id)arg1;
- (void)_reportFinishedEvaluatingAllPreferencesForEnvironmentInContext:(id)arg1 result:(long long)arg2;
- (void)_reportFoundFocusableItem:(id)arg1 inContext:(id)arg2;
- (void)_reportStartingSearch;
- (bool)allowsOverridingPreferedFocusEnvironments;
- (id)debugLog;
- (id)deepestPreferredFocusEnvironmentForEnvironment:(id)arg1;
- (id)deepestPreferredFocusableItemForEnvironment:(id)arg1 withRequest:(id)arg2;
- (void)setAllowsOverridingPreferedFocusEnvironments:(bool)arg1;
- (void)setDebugLog:(id)arg1;

@end
