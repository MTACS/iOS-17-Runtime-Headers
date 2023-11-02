
@interface CKSyncEngineDataSourceAdapter : NSObject <CKSyncEngineDelegate, CKSyncEngineDelegatePrivate> {
    <CKSyncEngineDataSource> * _dataSource;
}

@property (nonatomic) <CKSyncEngineDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)syncEngine:(id)arg1 handleEvent:(id)arg2;
- (id)syncEngine:(id)arg1 nextRecordZoneChangeBatchForContext:(id)arg2;
- (id)syncEngine:(id)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(id)arg2 recordIDs:(id)arg3;
- (bool)syncEngine:(id)arg1 shouldFetchAssetContentsForZoneID:(id)arg2;
- (bool)syncEngine:(id)arg1 shouldFetchChangesForZoneID:(id)arg2;

@end
