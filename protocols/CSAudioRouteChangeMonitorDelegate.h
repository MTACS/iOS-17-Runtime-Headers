
@protocol CSAudioRouteChangeMonitorDelegate <NSObject>

@required

- (void)CSAudioRouteChangeMonitor:(CSAudioRouteChangeMonitor *)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2;

@end
