
@protocol SBApplicationWakeLifecycleHandling <NSObject>

@required

- (bool)beginWakeForApplication:(SBApplication *)arg1;
- (void)endWake;
- (double)wakeDuration;

@end
