
@interface RBLaunchTracker : NSObject {
    NSMutableDictionary * _lastLaunch;
    NSMutableDictionary * _launchBeforeLast;
    <RBTimeProviding> * _timeProvider;
}

- (void).cxx_destruct;
- (id)initWithTimeProvider:(id)arg1;
- (double)nextAllowedLaunchOfIdentity:(id)arg1;
- (void)trackLaunchOfIdentity:(id)arg1;

@end
