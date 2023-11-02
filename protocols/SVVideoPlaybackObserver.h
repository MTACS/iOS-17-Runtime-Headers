
@protocol SVVideoPlaybackObserver <NSObject>

@optional

- (void)playbackCoordinator:(SVPlaybackCoordinator *)arg1 loadingProgressed:(double)arg2;
- (void)playbackCoordinator:(SVPlaybackCoordinator *)arg1 playbackFailedWithError:(NSError *)arg2;
- (void)playbackCoordinator:(SVPlaybackCoordinator *)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinatorFinishedLoadingVideoURL:(SVPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorFinishedPlayback:(SVPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorMuteStateChanged:(SVPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorPausedPlayback:(SVPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorPlaybackBufferFullStateChanged:(SVPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorPlaybackLikelyToKeepUpStateChanged:(SVPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorResumedPlayback:(SVPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorStartedLoadingVideo:(SVPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorStartedPlayback:(SVPlaybackCoordinator *)arg1;
- (void)playbackCoordinatorStateChanged:(SVPlaybackCoordinator *)arg1;

@end
