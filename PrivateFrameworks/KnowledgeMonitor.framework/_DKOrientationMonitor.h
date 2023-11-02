
@interface _DKOrientationMonitor : _DKMonitor {
    FBSDisplayLayoutMonitor * _monitor;
    BMSource * _source;
}

+ (id)_BMEventWithValue:(long long)arg1;
+ (id)_eventWithValue:(long long)arg1;
+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (void)start;
- (void)stop;

@end
