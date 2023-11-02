
@interface BCCloudAssetAnnotationManager : NSObject <BCCloudAssetAnnotationManager, BCCloudDataSyncManagerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    BCCloudDataSource * _annotationsDataSource;
    NSURL * _ckAssetStoreDirectory;
    BCCloudKitController * _cloudKitController;
    BCCloudDataManager * _dataManager;
    bool  _enableCloudSync;
    BCCloudDataSyncManager * _syncManager;
}

@property (nonatomic, retain) BCCloudDataSource *annotationsDataSource;
@property (nonatomic, retain) NSURL *ckAssetStoreDirectory;
@property (nonatomic) BCCloudKitController *cloudKitController;
@property (nonatomic, retain) BCCloudDataManager *dataManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableCloudSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) BCCloudDataSyncManager *syncManager;

- (void).cxx_destruct;
- (id)annotationsDataSource;
- (void)assetWithID:(id)arg1 updatedAnnotations:(id)arg2 completion:(id /* block */)arg3;
- (id)ckAssetStoreDirectory;
- (id)cloudKitController;
- (id)dataManager;
- (void)dealloc;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)arg1;
- (bool)enableCloudSync;
- (id)entityName;
- (id)fileURLForCachingCKAssetWithAssetID:(id)arg1;
- (void)getAnnotationChangesSince:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2;
- (void)setAnnotationsDataSource:(id)arg1;
- (void)setCkAssetStoreDirectory:(id)arg1;
- (void)setCloudKitController:(id)arg1;
- (void)setDataManager:(id)arg1;
- (void)setEnableCloudSync:(bool)arg1;
- (void)setSyncManager:(id)arg1;
- (void)signalSyncToCKForSyncManager:(id)arg1;
- (id)syncManager;
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(id /* block */)arg3;
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(id /* block */)arg2;
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(id /* block */)arg3;

@end
