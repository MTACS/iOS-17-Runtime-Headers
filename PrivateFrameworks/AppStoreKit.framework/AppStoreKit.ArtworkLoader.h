
@interface AppStoreKit.ArtworkLoader : _TtCs12_SwiftObject <ASKImageRequestDelegate> {
    void accessQueue;
    void assetObserver;
    void completionHandlers;
    void isOccluded;
    void pageRenderMetrics;
    void pageRenderMetricsRequestKeys;
    void renderIntent;
    void requestCompletionMap;
    void resourceLoadOperationSchemeMapping;
    void resourceLoader;
}

- (void)imageRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)imageRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)resourceLoaderDidBeginLoading;
- (void)resourceLoaderDidBeginLoadingForReason:(id)arg1;
- (void)resourceLoaderDidFinishLoadingForReason:(id)arg1;
- (void)resourceLoaderDidIdle;
- (void)resourceLoaderDidLoadAllForReason:(id)arg1;

@end
