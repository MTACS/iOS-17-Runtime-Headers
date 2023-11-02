
@interface MNLPRRuleHelper : NSObject

- (void)_findResourceNamesForRegions:(id)arg1 forceUpdate:(bool)arg2 asyncCompletion:(id /* block */)arg3;
- (void)_loadRules:(id)arg1 asyncCompletion:(id /* block */)arg2;
- (void)fetchRulesForWaypoints:(id)arg1 forceUpdateManifest:(bool)arg2 forceUpdateRules:(bool)arg3 completionQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)prefetchRulesForWaypoints:(id)arg1;
- (id)workQueue;

@end
