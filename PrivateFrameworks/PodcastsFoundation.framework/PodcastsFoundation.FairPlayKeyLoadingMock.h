
@interface PodcastsFoundation.FairPlayKeyLoadingMock : _TtCs12_SwiftObject <PFFairPlayKeyLoading> {
    void createSessionHandler;
    void renewKeyRequestHandler;
    void renewKeyRequestsHandler;
    void startKeyRequestHandler;
    void stopKeyRequestAssetHandler;
    void stopKeyRequestSessionHandler;
}

- (void)createSessionWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)renewKeyRequestWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)renewKeyRequestsWithAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)startKeyRequestWithSession:(id)arg1 completion:(id /* block */)arg2;
- (void)stopKeyRequestWithAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)stopKeyRequestWithSession:(id)arg1 completion:(id /* block */)arg2;

@end
