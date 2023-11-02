
@interface DDSManager : NSObject <DDSAssetObservingDelegate, DDSAssetProvidingDelegate, DDSAssetTrackingDelegate, DDSManaging, DDSManagingDelegate, DDSRemoteSyncStateDelegate> {
    <DDSAssetObserving> * _assetObserver;
    DDSMAAutoAssetManager * _autoAssetManager;
    <DDSManagerDataSource> * _dataSource;
    <DDSManagingDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _pendingAssertionsToUpdateByAssetType;
    <DDSAssetProviding> * _provider;
    NSMutableDictionary * _remoteSyncStateByAssetType;
    <DDSAssetTracking> * _tracker;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSString * _xpcServiceName;
}

@property (nonatomic, readonly) <DDSAssetObserving> *assetObserver;
@property (nonatomic, readonly) DDSMAAutoAssetManager *autoAssetManager;
@property (nonatomic, readonly) <DDSManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <DDSManagingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *pendingAssertionsToUpdateByAssetType;
@property (nonatomic, readonly) <DDSAssetProviding> *provider;
@property (nonatomic, readonly) NSMutableDictionary *remoteSyncStateByAssetType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <DDSAssetTracking> *tracker;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *xpcServiceName;

+ (id)errorForDDSAssetDownloadUIErrorCode:(long long)arg1;
+ (id)updateCatalogMetadataKeyForAssetType:(id)arg1;

- (void).cxx_destruct;
- (void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
- (void)assertionIDsForClientID:(id)arg1 reply:(id /* block */)arg2;
- (id)assetObserver;
- (long long)assetUpdateStatusForAssertion:(id)arg1;
- (id)autoAssetManager;
- (void)beginUpdateCycleForAssetType:(id)arg1 forced:(bool)arg2 discretionaryDownload:(bool)arg3;
- (id)catalogUpdateDateForAssetType:(id)arg1;
- (void)createRemoteSyncStateForAssetType:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (void)deleteV1AssetsIfNecessary;
- (void)didBeginUpdateCatalog;
- (void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2;
- (void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2;
- (void)didCompleteDownloadForAssertions:(id)arg1 error:(id)arg2;
- (void)didEndUpdateCycleWithAssetType:(id)arg1 error:(id)arg2;
- (void)didStartUpdateCycleForAssetType:(id)arg1;
- (void)didUpdateCatalogWithAssetType:(id)arg1 error:(id)arg2;
- (void)downloadAutoAssetForAssertions:(id)arg1;
- (void)fetchAssetUpdateStatusForQuery:(id)arg1 callback:(id /* block */)arg2;
- (void)handleAddedNewDescriptor:(id)arg1 forAssertion:(id)arg2;
- (void)handleNewAssertions:(id)arg1;
- (void)handleRemovedAssertions:(id)arg1;
- (id)initWithProvider:(id)arg1 tracker:(id)arg2;
- (id)initWithProvider:(id)arg1 tracker:(id)arg2 dataSource:(id)arg3;
- (id)initWithProvider:(id)arg1 tracker:(id)arg2 dataSource:(id)arg3 autoAssetManager:(id)arg4;
- (id)pendingAssertionsToUpdateByAssetType;
- (id)provider;
- (id)remoteSyncStateByAssetType;
- (void)remoteSyncStateRequestsResetForAssetType:(id)arg1;
- (void)remoteSyncStateRequestsRetryForAssetType:(id)arg1;
- (void)remoteSyncStateRequestsUpdateForAssetType:(id)arg1;
- (void)removeAssertionWithID:(id)arg1;
- (void)serverDidUpdateAssetsWithType:(id)arg1;
- (void)setCatalogUpdateDate:(id)arg1 forAssetType:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)tracker;
- (void)triggerDump;
- (void)triggerUpdate;
- (void)updateAssetForQuery:(id)arg1 callback:(id /* block */)arg2;
- (void)updateCatalogForAssetType:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)willRetryUpdateCycle;
- (id)workQueue;
- (id)xpcServiceName;

@end
