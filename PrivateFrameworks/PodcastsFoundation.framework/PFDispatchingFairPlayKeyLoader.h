
@interface PFDispatchingFairPlayKeyLoader : NSObject <PFFairPlayKeyLoading> {
    void responseQueue;
    void wrappedInstance;
}

+ (id)receiveOn:(id)arg1 loader:(id)arg2;

- (void).cxx_destruct;
- (void)createSessionWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)renewKeyRequestWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)renewKeyRequestsWithAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)startKeyRequestWithSession:(id)arg1 completion:(id /* block */)arg2;
- (void)stopKeyRequestWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)stopKeyRequestWithSession:(id)arg1 completion:(id /* block */)arg2;

@end
