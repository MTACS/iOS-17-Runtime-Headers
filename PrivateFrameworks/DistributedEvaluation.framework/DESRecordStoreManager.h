
@interface DESRecordStoreManager : NSObject {
    DESDeviceIdentifierStore * _identifierStore;
    DESRecordStorePolicyManager * _policyManager;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)deleteAllSavedRecordsForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteSavedRecordForBundleId:(id)arg1 identfier:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchCoreDuetEventsForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchNativeRecordDataForRecordUUID:(id)arg1 bundleId:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRecordSetForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (id)fetchRecordSetSynchronouslyForBundleId:(id)arg1 error:(id*)arg2;
- (void)fetchSavedRecordInfoForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSavedRecordInfoForRecordType:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)recordDirURLsForBundleId:(id)arg1;
- (void)saveCoreDuetEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)saveRecordForBundleId:(id)arg1 data:(id)arg2 recordInfo:(id)arg3 completion:(id /* block */)arg4;
- (id)saveRecordToDirPath:(id)arg1 data:(id)arg2 recordInfo:(id)arg3 error:(id*)arg4;

@end
