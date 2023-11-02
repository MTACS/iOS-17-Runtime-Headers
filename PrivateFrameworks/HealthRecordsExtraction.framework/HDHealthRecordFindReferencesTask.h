
@interface HDHealthRecordFindReferencesTask : NSObject {
    HDHealthRecordRuleset * _ruleset;
}

- (void).cxx_destruct;
- (bool)_canProcessResource:(id)arg1;
- (id)_filterResources:(id)arg1;
- (bool)_isIrretrievableReference:(id)arg1 serverBaseURL:(id)arg2;
- (id)_processedContainReferencesResourceWithResource:(id)arg1 processingContext:(id)arg2 rule:(id)arg3 allResources:(id)arg4;
- (id)_processedRetrieveReferencesResourceWithResource:(id)arg1 processingContext:(id)arg2 rule:(id)arg3 allResources:(id)arg4;
- (id)_resourceForReference:(id)arg1 containedInResource:(id)arg2 error:(id*)arg3;
- (bool)_resourceReference:(id)arg1 containedInResource:(id)arg2;
- (id)_resourceReference:(id)arg1 presentInResources:(id)arg2;
- (id)debugDescription;
- (id)init;
- (id)initWithRuleset:(id)arg1;
- (bool)processContainedResourcesInProcessingContext:(id)arg1 error:(id*)arg2;
- (id)processResourcesForReferenceExtractionRequest:(id)arg1 error:(id*)arg2;

@end
