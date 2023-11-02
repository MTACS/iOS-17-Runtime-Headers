
@protocol SVVideoPlayerViewControllerDelegate <NSObject>

@optional

- (void)videoPlayerViewController:(SVVideoPlayerViewController *)arg1 initiatedPlaybackOfVideo:(id <SVVideoProviding>)arg2;
- (void)videoPlayerViewController:(SVVideoPlayerViewController *)arg1 pausedPlaybackOfVideo:(id <SVVideoProviding>)arg2;
- (void)videoPlayerViewController:(void *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: SVVideoPlayerViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)videoPlayerViewController:(SVVideoPlayerViewController *)arg1 resumedPlaybackOfVideo:(id <SVVideoProviding>)arg2;
- (void)videoPlayerViewController:(SVVideoPlayerViewController *)arg1 startedPlaybackOfVideo:(id <SVVideoProviding>)arg2;
- (void)videoPlayerViewControllerDidExitFullscreen:(SVVideoPlayerViewController *)arg1;
- (void)videoPlayerViewControllerDidStartPictureInPicture:(SVVideoPlayerViewController *)arg1;
- (void)videoPlayerViewControllerDidStopPictureInPicture:(SVVideoPlayerViewController *)arg1;
- (void)videoPlayerViewControllerFinishedVideoPlayback:(SVVideoPlayerViewController *)arg1;
- (bool)videoPlayerViewControllerShouldStartPlayback:(SVVideoPlayerViewController *)arg1;
- (void)videoPlayerViewControllerWillEnterFullscreen:(SVVideoPlayerViewController *)arg1;
- (void)videoPlayerViewControllerWillExitFullscreen:(SVVideoPlayerViewController *)arg1;
- (void)videoPlayerViewControllerWillStartPictureInPicture:(SVVideoPlayerViewController *)arg1;
- (void)videoPlayerViewControllerWillStopPictureInPicture:(SVVideoPlayerViewController *)arg1;

@end
