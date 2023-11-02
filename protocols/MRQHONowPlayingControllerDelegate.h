
@protocol MRQHONowPlayingControllerDelegate <NSObject>

@optional

- (void)controller:(MRQHONowPlayingController *)arg1 contentItemsDidUpdate:(NSArray *)arg2;
- (void)controller:(MRQHONowPlayingController *)arg1 deviceLastPlayingDateDidChange:(NSDate *)arg2;
- (void)controller:(MRQHONowPlayingController *)arg1 didFailWithError:(NSError *)arg2;
- (void)controller:(MRQHONowPlayingController *)arg1 didLoadArtworkForContentItems:(NSArray *)arg2;
- (void)controller:(MRQHONowPlayingController *)arg1 didLoadResponse:(MRNowPlayingPlayerResponse *)arg2;
- (void)controller:(MRQHONowPlayingController *)arg1 didUpdateResponse:(MRNowPlayingPlayerResponse *)arg2;
- (void)controller:(MRQHONowPlayingController *)arg1 playbackQueueDidChangeFrom:(MRPlaybackQueue *)arg2 to:(MRPlaybackQueue *)arg3;
- (void)controller:(MRQHONowPlayingController *)arg1 playbackStateDidChangeFrom:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)controller:(MRQHONowPlayingController *)arg1 playerLastPlayingDateDidChange:(NSDate *)arg2;
- (void)controller:(MRQHONowPlayingController *)arg1 supportedCommandsDidChangeFrom:(NSArray *)arg2 to:(NSArray *)arg3;
- (void)controllerWillReloadForInvalidation:(MRQHONowPlayingController *)arg1;

@end
