
@interface PLLibraryScopeRuleManager : NSObject {
    PLManagedAssetRuleInterpreter * _interpreter;
    PLLibraryScope * _libraryScope;
    PLLibraryScopeRuleEvaluator * _ruleEvaluator;
}

@property (nonatomic, retain) PLManagedAssetRuleInterpreter *interpreter;
@property (nonatomic, retain) PLLibraryScope *libraryScope;
@property (nonatomic, retain) PLLibraryScopeRuleEvaluator *ruleEvaluator;

- (void).cxx_destruct;
- (id)_fetchAssetObjectIDsContainedInMomentObjectIDs:(id)arg1 excludingAssetObjectIDs:(id)arg2 inManagedObjectContext:(id)arg3 predicateToFetchAssetsToEvaluate:(id)arg4;
- (id)_fetchAssetObjectIDsContainedInMomentsToPropagateForMomentIdByAssetId:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_personUUIDsUsedInRules;
- (id)_predicateToIncludeAssetsCapturedByCamera;
- (id)_predicateToIncludeAssetsSuggestedByCamera;
- (bool)_shouldTryToPropagateResultsToMomentWithInclusiveMatchedConditions:(id)arg1;
- (bool)evaluateAssetObjectIDs:(id)arg1 simulate:(bool)arg2 predicateToFetchAssetsToEvaluate:(id)arg3 withResultEnumerationBlock:(id /* block */)arg4;
- (bool)evaluateAssetObjectIDs:(id)arg1 simulate:(bool)arg2 withResultEnumerationBlock:(id /* block */)arg3;
- (bool)evaluateAssetObjectIDs:(id)arg1 withResultEnumerationBlock:(id /* block */)arg2;
- (bool)evaluateFaceObjectIDs:(id)arg1 simulate:(bool)arg2 withResultEnumerationBlock:(id /* block */)arg3;
- (bool)evaluateFaceObjectIDs:(id)arg1 withResultEnumerationBlock:(id /* block */)arg2;
- (id)initWithLibraryScope:(id)arg1;
- (id)interpreter;
- (id)libraryScope;
- (id)ruleEvaluator;
- (void)setInterpreter:(id)arg1;
- (void)setLibraryScope:(id)arg1;
- (void)setRuleEvaluator:(id)arg1;

@end
