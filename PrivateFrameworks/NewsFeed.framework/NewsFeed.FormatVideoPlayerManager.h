
@interface NewsFeed.FormatVideoPlayerManager : NSObject <SVVideoPlayerViewControllerDataSource, SVVideoPlayerViewControllerDelegate> {
    void adJournal;
    void cacheKey;
    void commandCenter;
    void coordinator;
    void cover;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  data;
    void delegate;
    void isBookmarkInProgress;
    void isViewTransitionInProcess;
    void offlineAlertControllerFactory;
    void offlineManager;
    void offscreenVisibility;
    void onscreenVisibility;
    void partialVisibility;
    void pictureInPictureState;
    void playerViewController;
    void reuseDelegate;
    void sceneProvider;
    void videoAdProviderFactory;
    void visibilityPercentage;
}

- (void).cxx_destruct;
- (void)didApplyBookmark;
- (void)didFinishCoveringWithNotification:(id)arg1;
- (void)didStartCoveringWithNotification:(id)arg1;
- (id)init;
- (void)startPictureInPictureIfPossible;
- (id)videoAdForVideoPlayerViewController:(id)arg1;
- (id)videoForVideoPlayerViewController:(id)arg1;
- (void)videoPlayerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id /* block */)arg2;
- (void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewControllerDidExitFullscreen:(id)arg1;
- (void)videoPlayerViewControllerDidStopPictureInPicture:(id)arg1;
- (void)videoPlayerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)willApplyBookmark;

@end
