
@interface RecordStoreManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)fetchRecordSetForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSavedRecordInfoForBundleId:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
