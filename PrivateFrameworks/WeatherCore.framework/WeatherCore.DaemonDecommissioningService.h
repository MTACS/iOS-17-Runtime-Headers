
@interface WeatherCore.DaemonDecommissioningService : NSObject <NSXPCListenerDelegate, WeatherCore.DaemonDecommissioningServiceType> {
    void listener;
    void notificationManager;
}

- (void).cxx_destruct;
- (void)decommissionWith:(id /* block */)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
