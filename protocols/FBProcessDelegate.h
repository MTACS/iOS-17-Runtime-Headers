
@protocol FBProcessDelegate <FBProcessWatchdogProviding>

@required

- (void)noteProcessAssertionStateDidChange:(FBProcess *)arg1;
- (void)noteProcessDidExit:(FBProcess *)arg1;
- (void)noteProcessDidLaunch:(FBProcess *)arg1;

@end
