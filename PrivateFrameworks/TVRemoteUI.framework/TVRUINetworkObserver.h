
@interface TVRUINetworkObserver : NSObject {
    id /* block */  _bluetoothAvailabilityDidUpdate;
    CBController * _cbController;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _reachabilityDidUpdate;
    WFClient * _wifiClient;
    WFWiFiStateMonitor * _wifiStateMonitor;
}

@property (nonatomic, copy) id /* block */ bluetoothAvailabilityDidUpdate;
@property (nonatomic, retain) CBController *cbController;
@property (nonatomic, readonly) bool isBluetoothAvailable;
@property (nonatomic, readonly) bool isNetworkReachable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ reachabilityDidUpdate;
@property (nonatomic, retain) WFClient *wifiClient;
@property (nonatomic, retain) WFWiFiStateMonitor *wifiStateMonitor;

- (void).cxx_destruct;
- (void)_updateBluetoothAvailability:(bool)arg1;
- (void)_updateNetworkReachability:(bool)arg1;
- (void)_wifiStateUpdatedWithOldState:(long long)arg1 andNewState:(long long)arg2;
- (id /* block */)bluetoothAvailabilityDidUpdate;
- (id)cbController;
- (void)dealloc;
- (id)init;
- (bool)isBluetoothAvailable;
- (bool)isNetworkReachable;
- (id)queue;
- (id /* block */)reachabilityDidUpdate;
- (void)setBluetoothAvailabilityDidUpdate:(id /* block */)arg1;
- (void)setCbController:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReachabilityDidUpdate:(id /* block */)arg1;
- (void)setWifiClient:(id)arg1;
- (void)setWifiStateMonitor:(id)arg1;
- (void)startObserving;
- (void)stopObserving;
- (id)wifiClient;
- (id)wifiStateMonitor;

@end
