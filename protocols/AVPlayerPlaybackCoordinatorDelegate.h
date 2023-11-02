
@protocol AVPlayerPlaybackCoordinatorDelegate <NSObject>

@optional

- (NSString *)playbackCoordinator:(AVPlayerPlaybackCoordinator *)arg1 identifierForPlayerItem:(AVPlayerItem *)arg2;
- (NSArray *)playbackCoordinator:(AVPlayerPlaybackCoordinator *)arg1 interstitialTimeRangesForPlayerItem:(AVPlayerItem *)arg2;

@end
