
@interface PXStoryResourcesDataSourceManager : PXObservable <PXChangeObserver, PXStoryMutableResourcesDataSourceManager, PXStoryQueueParticipant> {
    PXStoryConfiguration * _configuration;
    PXStoryResourcesDataSource * _dataSource;
    bool  _isDataSourceFinal;
    PXStoryRecipe * _recipe;
    PXStoryRecipeManager * _recipeManager;
    NSObject<OS_dispatch_queue> * _storyQueue;
    PXUpdater * _updater;
}

@property (nonatomic, readonly) PXStoryConfiguration *configuration;
@property (nonatomic, readonly) PXStoryResourcesDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDataSourceFinal;
@property (nonatomic, retain) PXStoryRecipe *recipe;
@property (nonatomic, readonly) PXStoryRecipeManager *recipeManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;

- (void).cxx_destruct;
- (void)_invalidateDataSource;
- (void)_invalidateIsDataSourceFinal;
- (void)_invalidateRecipe;
- (void)_setNeedsUpdate;
- (void)_updateDataSource;
- (void)_updateIsDataSourceFinal;
- (void)_updateRecipe;
- (id)configuration;
- (id)dataSource;
- (void)didPerformChanges;
- (id)init;
- (id)initWithRecipeManager:(id)arg1;
- (bool)isDataSourceFinal;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (id)recipe;
- (id)recipeManager;
- (void)reloadDataSource;
- (void)setDataSource:(id)arg1;
- (void)setIsDataSourceFinal:(bool)arg1;
- (void)setRecipe:(id)arg1;
- (id)storyQueue;
- (id)updater;

@end
