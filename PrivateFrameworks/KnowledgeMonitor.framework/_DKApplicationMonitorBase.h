
@interface _DKApplicationMonitorBase : _DKMonitor {
    BMSource * _appInFocusSource;
    BMAppInFocus * _currentAppInFocusEvent;
    NSString * _lastFocalApplicationForContext;
}

@property (retain) BMSource *appInFocusSource;

+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (id)_eventWithTimestamp:(id)arg1 bundleIdentifier:(id)arg2 launchReason:(id)arg3 shortVersionString:(id)arg4 exactBundleVersion:(id)arg5;
- (id)appInFocusSource;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (bool)lookupApplication:(id)arg1 shortVersionString:(id*)arg2 exactBundleVersion:(id*)arg3;
- (void)obtainCurrentValue;
- (void)platformSpecificStart;
- (void)platformSpecificStop;
- (void)setAppInFocusSource:(id)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)updateBiomeAppInFocusWithStopEventAtTimestamp:(id)arg1 reason:(id)arg2;
- (void)updateBiomeWithAppInFocusStartEvent:(id)arg1;
- (void)updateContextStoreWithFocalApplication:(id)arg1 launchReason:(id)arg2;

@end
