
@interface CSAudioRouteChangeMonitorImpl : CSAudioRouteChangeMonitor {
    bool  _isHearstConnected;
    bool  _isHearstRouted;
    bool  _isJarvisConnected;
    bool  _isSiriInputSourceOutOfBand;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (bool)_fetchHearstConnectionState;
- (bool)_fetchHearstRoutedState;
- (bool)_fetchJarvisConnectionState;
- (bool)_fetchSiriInputSourceOutOfBandState;
- (void)_notifyHearstConnectionState:(bool)arg1;
- (void)_notifyHearstRoutedState:(bool)arg1;
- (void)_notifyJarvisConnectionState:(bool)arg1;
- (void)_notifySiriInputSourceOutOfBandState:(bool)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_startObservingAudioRouteChange;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)arg1;
- (void)carPlayAuxStreamSupportDidChange:(id)arg1;
- (bool)carPlayConnected;
- (void)carPlayIsConnectedDidChange:(id)arg1;
- (void)getHearstConnected:(id /* block */)arg1;
- (void)getHearstOwnershipStatus:(id /* block */)arg1;
- (void)getHearstRouted:(id /* block */)arg1;
- (void)getJarvisConnected:(id /* block */)arg1;
- (void)getSiriInputSourceOutOfBand:(id /* block */)arg1;
- (bool)hearstConnected;
- (long long)hearstOwnership;
- (bool)hearstRouted;
- (id)init;
- (bool)jarvisConnected;
- (void)pickableRoutesDidChange:(id)arg1;
- (void)preferredExternalRouteDidChange:(id)arg1;
- (bool)siriInputSourceOutOfBand;

@end
