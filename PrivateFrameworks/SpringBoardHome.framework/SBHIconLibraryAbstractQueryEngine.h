
@interface SBHIconLibraryAbstractQueryEngine : NSObject <SBHIconLibraryQueryEngine> {
    NSHashTable * _executingQueryContexts;
    SBHIconModel * _iconModel;
    bool  _iconModelIsReloading;
    bool  _isShutdown;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHIconModel *iconModel;
@property (nonatomic, readonly) bool isShutdown;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) Class superclass;

+ (id)_leafIdentifiersForBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_addItemsWithBundleIdentifiers:(id)arg1 iconLibraryQueryContext:(id)arg2 notifyDelegate:(bool)arg3;
- (void)_iconModelDidReload:(id)arg1;
- (void)_iconModelNeedsIconAdded:(id)arg1;
- (void)_iconModelNeedsIconRemoved:(id)arg1;
- (void)_iconModelNeedsIconReplaced:(id)arg1;
- (void)_iconModelVisibilityDidChange:(id)arg1;
- (void)_iconModelWillReload:(id)arg1;
- (void)_mapBundleIdentifiersToIcons:(id)arg1 completion:(id /* block */)arg2;
- (void)_processingQueue_addIcons:(id)arg1 iconLibraryQueryContext:(id)arg2 notifyDelegate:(bool)arg3;
- (bool)_processingQueue_isBundleIdentifierValid:(id)arg1 iconLibraryQueryContext:(id)arg2;
- (bool)_processingQueue_isIconModelReloading;
- (bool)_processingQueue_isShutdown;
- (id)_processingQueue_lastQueryResultForContext:(id)arg1;
- (void)_processingQueue_noteQueryResultsWereUpdated:(id)arg1 iconLibraryQueryContext:(id)arg2 notifyDelegate:(bool)arg3;
- (void)_processingQueue_observerDispatchError:(id)arg1 forQuery:(id)arg2;
- (void)_processingQueue_observerDispatchQueryResultsWereUpdated:(id)arg1;
- (void)_processingQueue_removeItemsWithBundleIdentifiers:(id)arg1 iconLibraryQueryContext:(id)arg2 notifyDelegate:(bool)arg3;
- (id /* block */)_processingQueue_sortComperatorForQueryContext:(id)arg1;
- (void)_processingQueue_startNewQueryContext:(id)arg1;
- (void)_processingQueue_teardownQueryContext:(id)arg1;
- (void)_processingQueue_teardownQueryContext:(id)arg1 removeContext:(bool)arg2;
- (void)_setupNotifications;
- (void)_teardownNotifications;
- (void)addObserver:(id)arg1;
- (void)executeQuery:(id)arg1;
- (id)iconModel;
- (id)init;
- (id)initWithIconModel:(id)arg1;
- (bool)isShutdown;
- (id)processingQueue;
- (void)removeObserver:(id)arg1;
- (void)shutdown;

@end
