
@interface PXGadgetDataSourceManager : PXSectionedDataSourceManager <PXGadgetDelegate, PXGadgetProviderDelegate> {
    NSArray * _cachedProviders;
    bool  _canLoadRemainingDataForProviders;
    bool  _dataSourceNeedsUpdate;
    NSObject<OS_dispatch_group> * _deferredGadgetLoadingGroup;
    NSObject<OS_dispatch_queue> * _deferredGadgetQueue;
    bool  _didLoadRemainingGadgets;
    bool  _hasLoadedPriorities;
    bool  _isPerformingChanges;
    bool  _loadingInitialGadgets;
    NSObject<OS_dispatch_queue> * _lookupQueue;
    NSMutableArray * _lookupQueue_loadedProviders;
    bool  _needsToLoadAllProviders;
    <PXGadgetDelegate> * _nextGadgetResponder;
}

@property (nonatomic, copy) NSArray *cachedProviders;
@property (nonatomic) bool canLoadRemainingDataForProviders;
@property (nonatomic, readonly) PXGadgetDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didLoadRemainingGadgets;
@property (nonatomic, readonly) id /* block */ gadgetProviderSortComparator;
@property (nonatomic, readonly) NSArray *gadgetProviders;
@property (nonatomic, readonly) id /* block */ gadgetSortComparator;
@property (nonatomic, readonly) <PXGadgetTransition> *gadgetTransition;
@property (nonatomic) bool hasLoadedPriorities;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool loadingInitialGadgets;
@property (nonatomic) bool needsToLoadAllProviders;
@property (nonatomic) <PXGadgetDelegate> *nextGadgetResponder;
@property (nonatomic, readonly) PXGadgetNavigationHelper *rootNavigationHelper;
@property (readonly) Class superclass;

+ (id)gadgetDataSourceManagerLog;

- (void).cxx_destruct;
- (id)_dataSourceSnapshot;
- (void)_loadDataFromProviders:(id)arg1 withGadgetMinimum:(unsigned long long)arg2;
- (void)_loadPriorityForProviders:(id)arg1;
- (void)_updateDataSource;
- (void)beginLoadingInitialGadgets:(unsigned long long)arg1;
- (id)cachedProviders;
- (bool)canLoadRemainingDataForProviders;
- (id)createInitialDataSource;
- (void)didLoadDataForPriorities;
- (bool)didLoadRemainingGadgets;
- (void)didPerformChanges;
- (void)dismissGadgetViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)gadget:(id)arg1 animateChanges:(id /* block */)arg2;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (bool)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id /* block */)gadgetProviderSortComparator;
- (id)gadgetProviders;
- (id /* block */)gadgetSortComparator;
- (id)gadgetTransition;
- (id)gadgetViewControllerHostingGadget:(id)arg1;
- (bool)hasLoadedPriorities;
- (id)hiddenGadgetProviders;
- (id)init;
- (id)initWithQueueName:(id)arg1;
- (void)invalidateGadgets;
- (void)loadRemainingGadgetsIfNeeded;
- (void)loadRemainingGadgetsIfNeeded:(id /* block */)arg1;
- (void)loadRemainingGadgetsIfNeededWithGenerateGadgetFinishedBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (bool)loadingInitialGadgets;
- (bool)needsToLoadAllProviders;
- (id)nextGadgetResponder;
- (id)noContentGadget;
- (void)presentGadgetViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentationEnvironmentForGadget:(id)arg1;
- (void)removeCachedProviders;
- (id)rootNavigationHelper;
- (void)setCachedProviders:(id)arg1;
- (void)setCanLoadRemainingDataForProviders:(bool)arg1;
- (void)setHasLoadedPriorities:(bool)arg1;
- (void)setLoadingInitialGadgets:(bool)arg1;
- (void)setNeedsToLoadAllProviders:(bool)arg1;
- (void)setNextGadgetResponder:(id)arg1;
- (void)willPerformChanges;

@end
