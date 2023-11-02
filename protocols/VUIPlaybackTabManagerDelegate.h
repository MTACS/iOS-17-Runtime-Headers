
@protocol VUIPlaybackTabManagerDelegate <NSObject>

@required

- (<TVPMediaItem> *)currentMediaItem;
- (long long)maxMultiviewPlayerCount;
- (NSArray *)multiviewIdentifiers;
- (long long)multiviewPlayerCount;
- (<VUINowPlayingTabControllerDelegate> *)nowPlayingControllerDelegate;
- (AVPlayerViewController *)playerViewController;

@end
