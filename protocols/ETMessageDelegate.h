
@protocol ETMessageDelegate

@required

- (void)messageDidStopPlaying:(ETMessage *)arg1;
- (void)messageWillReachSizeLimit:(ETMessage *)arg1;
- (void)messageWillStopPlaying:(ETMessage *)arg1;

@end
