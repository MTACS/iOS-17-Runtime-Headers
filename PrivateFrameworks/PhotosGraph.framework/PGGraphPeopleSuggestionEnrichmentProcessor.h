
@interface PGGraphPeopleSuggestionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_performPeopleSuggestionForHomeWithManager:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)_performPeopleSuggestionForSharedLibraryWithManager:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)_performPeopleSuggestionLearningWithManager:(id)arg1 progressBlock:(id /* block */)arg2;
- (void)enrichDataModelWithManager:(id)arg1 curationContext:(id)arg2 graphUpdateInventory:(id)arg3 progressBlock:(id /* block */)arg4;

@end
