
@interface DocumentUnderstanding.TextUnderstandingManager : NSObject {
    void $__lazy_storage_$_bulkupdater;
    void $__lazy_storage_$_client;
    void $__lazy_storage_$_updater;
    void queue;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)addSerializedDocument:(id)arg1 documentType:(long long)arg2 completion:(id /* block */)arg3;
- (void)foundInEventResultWithSerializedDocument:(id)arg1 documentType:(long long)arg2 completion:(id /* block */)arg3;
- (void)incrementallyUpdatePoem;
- (id)init;
- (void)onBoardPoem;
- (void)pingWithReply:(id /* block */)arg1;
- (void)triggerSpotlightFileUpdateNoArgsWithReply:(id /* block */)arg1;

@end
