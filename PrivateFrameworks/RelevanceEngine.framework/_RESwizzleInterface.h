
@interface _RESwizzleInterface : NSObject

+ (id)_configuredObjects;

- (void)_re_runAfterEngineIsLoaded:(id /* block */)arg1;
- (void)_re_swizzled_availableRelevanceEngines:(id /* block */)arg1;
- (void)_re_swizzled_fetchAllElementIdentifiersInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)_re_swizzled_fetchAllElementsInRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)_re_swizzled_gatherDiagnosticLogsForRelevanceEngine:(id)arg1 completion:(id /* block */)arg2;
- (void)_re_swizzled_relevanceEngine:(id)arg1 createElementFromDescription:(id)arg2 completion:(id /* block */)arg3;
- (void)_re_swizzled_relevanceEngine:(id)arg1 encodedObjectAtPath:(id)arg2 completion:(id /* block */)arg3;
- (void)_re_swizzled_relevanceEngine:(id)arg1 performCommand:(id)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)_re_swizzled_relevanceEngine:(id)arg1 runActionOfElementWithDescription1:(id)arg2 completion:(id /* block */)arg3;

@end
