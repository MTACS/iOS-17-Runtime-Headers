
@interface WebMediaSessionHelper : NSObject {
    void * _callback;
    bool  _monitoringAirPlayRoutes;
    struct RetainPtr<AVRouteDetector> { 
        void *m_ptr; 
    }  _routeDetector;
    bool  _startMonitoringAirPlayRoutesPending;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)activeOutputDeviceDidChange:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)carPlayIsConnectedDidChange:(id)arg1;
- (void)clearCallback;
- (void)dealloc;
- (bool)hasWirelessTargetsAvailable;
- (id)initWithCallback:(void*)arg1;
- (void)mediaServerConnectionDied:(id)arg1;
- (void)startMonitoringAirPlayRoutes;
- (void)stopMonitoringAirPlayRoutes;
- (void)wirelessRoutesAvailableDidChange:(id)arg1;

@end
