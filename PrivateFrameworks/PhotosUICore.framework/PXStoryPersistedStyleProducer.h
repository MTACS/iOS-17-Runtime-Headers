
@interface PXStoryPersistedStyleProducer : NSObject <PXStoryStylesProducer> {
    <PXStoryAutoEditDecisionList> * _autoEditDecisionList;
    NSObject<OS_os_log> * _log;
    <PFStoryRecipe> * _persistedRecipe;
    <PXStorySongResource> * _songResource;
}

@property (nonatomic, readonly, copy) <PXStoryAutoEditDecisionList> *autoEditDecisionList;
@property (nonatomic, readonly) <PFStoryRecipe> *persistedRecipe;
@property (nonatomic, readonly) <PXStorySongResource> *songResource;

- (void).cxx_destruct;
- (id)autoEditDecisionList;
- (id)initWithPersistedRecipe:(id)arg1 songResource:(id)arg2 autoEditDecisionList:(id)arg3;
- (id)persistedRecipe;
- (id)requestStylesWithOptions:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
- (id)songResource;

@end
