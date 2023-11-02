
@interface PodcastsFoundation.RSSFeedUpdater : NSObject <MTExternalFeedDownloaderDelegate, MTRestorableBackgroundSession> {
    void ctx;
    void externalFeedDownloader;
    void feedQueue;
    void ingesterProvider;
    void pendingRestorationQueue;
    void requests;
    void workQueue;
}

@property (nonatomic, copy) id /* block */ sessionCompletionHandler;

- (void).cxx_destruct;
- (void)didDownloadFeedWithError:(id)arg1 data:(id)arg2 task:(id)arg3 requestedUrl:(id)arg4 useBackgroundFetch:(bool)arg5;
- (void)didRestoreFeedUrlTask:(id)arg1;
- (id)init;
- (void)performOnFeedProcessingQueue:(id /* block */)arg1;
- (id /* block */)sessionCompletionHandler;
- (void)setSessionCompletionHandler:(id /* block */)arg1;

@end
