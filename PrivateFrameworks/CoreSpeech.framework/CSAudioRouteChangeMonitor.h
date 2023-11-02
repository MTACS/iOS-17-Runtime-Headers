
@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (bool)carPlayConnected;
- (void)getHearstConnected:(id /* block */)arg1;
- (void)getHearstOwnershipStatus:(id /* block */)arg1;
- (void)getHearstRouted:(id /* block */)arg1;
- (void)getJarvisConnected:(id /* block */)arg1;
- (void)getSiriInputSourceOutOfBand:(id /* block */)arg1;
- (bool)hearstConnected;
- (long long)hearstOwnership;
- (bool)hearstRouted;
- (bool)jarvisConnected;
- (bool)siriInputSourceOutOfBand;

@end
