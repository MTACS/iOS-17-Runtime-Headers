
@interface _DKAudioOutputMonitor : _DKMonitor {
    AVAudioSession * _outputMonitor;
    BMSource * _source;
}

+ (id)_BMEventWithState:(id)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5;
+ (id)_eventWithState:(id)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5;
+ (id)contextValueForAudioOutputConnectionStatus:(bool)arg1 type:(id)arg2 name:(id)arg3 identifier:(id)arg4 routeChangeReason:(id)arg5;
+ (id)entitlements;
+ (id)eventStream;

- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (void)onAudioRouteChangeNotification:(id)arg1;
- (void)start;
- (void)stop;

@end
