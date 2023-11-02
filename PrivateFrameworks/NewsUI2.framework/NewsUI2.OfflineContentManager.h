
@interface NewsUI2.OfflineContentManager : NSObject <FCBoostableOperationThrottlerDelegate, FCOfflineArticleManagerType, NDDownloadConsumer> {
    void $__lazy_storage_$_localCacheLookupThrottler;
    void _contributors;
    void _inFlightContentIDs;
    void _interestTokensByContentID;
    void _offlineContentRequests;
    void _registeredWithXPCDownloadService;
    void _xpcConnection;
    void _xpcConnectionRetryBudget;
    void _xpcDownloadService;
    void contentContext;
    void contributorsReadyGroup;
    void downloadMonitors;
    void downloadedContentIDs;
    void localArticleCacheLookupService;
    void localIssueCacheLookupService;
}

@property (nonatomic, readonly) NSSet *downloadedArticleIDs;

- (void).cxx_destruct;
- (void)downloadFinishedForRequest:(id)arg1 error:(id)arg2;
- (void)downloadProgressedForRequest:(id)arg1 contentArchive:(id)arg2;
- (void)downloadProgressedForRequest:(id)arg1 progress:(double)arg2;
- (id)downloadedArticleIDs;
- (id)init;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;

@end
