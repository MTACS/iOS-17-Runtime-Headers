
@protocol SVVideoAdEventTracker <SVVideoEventTracker>

@required

- (void)nextVideoStartedPlaying;
- (void)skipped;
- (void)willUnload;

@end
