
@protocol SBAVSystemControllerDirectToAirPlayObserver <NSObject>

@required

- (void)currentExternalDestinationDidChange:(NSNotification *)arg1;
- (void)externalAirPlayVideoActiveDidChange:(NSNotification *)arg1;
- (void)externalAirPlayVideoPlayingDidChange:(NSNotification *)arg1;
- (void)externalDisplayChanged:(NSNotification *)arg1;
- (void)likelyExternalDestinationsDidChange:(NSNotification *)arg1;
- (void)lockStateChanged:(NSNotification *)arg1;

@end
