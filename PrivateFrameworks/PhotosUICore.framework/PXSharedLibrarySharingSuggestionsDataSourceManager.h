
@interface PXSharedLibrarySharingSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXChangeObserver, PXPhotoLibraryUIChangeObserver, PXSharedLibraryMutableSharingSuggestionsDataSourceManager, PXSharedLibrarySharingSuggestionsDataSourceDelegate> {
    NSDate * _aggregateBeforeDate;
    NSDate * _considerNewAfterDate;
    PXSharedLibrarySharingSuggestionsCountsManager * _countsManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_promiseByContainer;
    PHPhotoLibrary * _photoLibrary;
    NSObject<OS_dispatch_queue> * _queue;
    PXUpdater * _updater;
}

@property (nonatomic, retain) NSDate *aggregateBeforeDate;
@property (nonatomic, retain) NSDate *considerNewAfterDate;
@property (nonatomic, readonly) PXSharedLibrarySharingSuggestionsCountsManager *countsManager;
@property (nonatomic, readonly) PXSharedLibrarySharingSuggestionsDataSource *currentDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;

- (void).cxx_destruct;
- (id)_createDataSourceWithSharingSuggestions:(id)arg1;
- (void)_invalidatePromisesUnreadState;
- (id)_promiseForContainer:(id)arg1;
- (void)_publishChangesForForContainers:(id)arg1;
- (void)_queue_fulfillRemainingPromises;
- (void)_scheduleFulfillRemainingPromises;
- (void)_setNeedsUpdate;
- (void)_setPromise:(id)arg1 forContainer:(id)arg2;
- (void)_updatePromisesUnreadState;
- (id)aggregateBeforeDate;
- (id)considerNewAfterDate;
- (id)countsManager;
- (id)createInitialDataSource;
- (id)currentDataSource;
- (id)dataSource:(id)arg1 promiseForContainer:(id)arg2;
- (void)didPerformChanges;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)queue;
- (void)setAggregateBeforeDate:(id)arg1;
- (void)setConsiderNewAfterDate:(id)arg1;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (id)updater;

@end
