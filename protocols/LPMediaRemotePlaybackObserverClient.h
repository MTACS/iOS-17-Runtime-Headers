
@protocol LPMediaRemotePlaybackObserverClient

@required

- (double)desiredUpdateIntervalForMediaRemotePlaybackObserver:(LPMediaRemotePlaybackObserver *)arg1;
- (void)mediaRemotePlaybackObserverPlayingItemDidChange:(LPMediaRemotePlaybackObserver *)arg1;

@end
