
@protocol PHAActivityDelegate

@required

- (bool)registerActivityToRun:(id <PHAActivity>)arg1;
- (void)unregisterRunningActivity:(id <PHAActivity>)arg1;

@end
