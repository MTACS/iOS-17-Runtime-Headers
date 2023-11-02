
@interface CKSyncEngineAsyncDelegateAdapter : NSObject <CKSyncEngineAsyncDelegate> {
    <CKSyncEngineDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKSyncEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)syncEngine:(id)arg1 handleEvent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)syncEngine:(id)arg1 nextFetchChangesOptionsForContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)syncEngine:(id)arg1 nextRecordZoneChangeBatchForContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)syncEngine:(id)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(id)arg2 recordIDs:(id)arg3 completionHandler:(id /* block */)arg4;

@end
