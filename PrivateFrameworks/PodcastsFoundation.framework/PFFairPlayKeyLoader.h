
@interface PFFairPlayKeyLoader : NSObject <PFFairPlayKeyLoading> {
    void $__lazy_storage_$_logPrefix;
    void activeSessionStore;
    void fairPlayKeySessionProvider;
    void internalQueue;
    void metadataLoader;
}

- (void).cxx_destruct;
- (void)createSessionWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)renewKeyRequestWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)renewKeyRequestsWithAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)startKeyRequestWithSession:(id)arg1 completion:(id /* block */)arg2;
- (void)stopKeyRequestWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)stopKeyRequestWithSession:(id)arg1 completion:(id /* block */)arg2;

@end
