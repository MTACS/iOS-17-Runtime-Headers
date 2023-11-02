
@interface BUNetworkMonitor : NSObject <BUNetworkMonitoring> {
    NSObject<OS_nw_path> * _currentPath;
    NSObject<OS_dispatch_queue> * _monitorQueue;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
    RadiosPreferences * _radiosPreferences;
}

@property (nonatomic, retain) NSObject<OS_nw_path> *currentPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *monitorQueue;
@property (nonatomic, retain) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (nonatomic, retain) RadiosPreferences *radiosPreferences;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentPath;
- (bool)hasCellularCapability;
- (bool)hasCellularConnection;
- (bool)hasWAPICapability;
- (bool)hasWifiConnection;
- (id)initWithQueue:(id)arg1;
- (bool)isAirplaneModeEnabled;
- (bool)isConnected;
- (id)monitorQueue;
- (id)pathMonitor;
- (id)radiosPreferences;
- (void)setCurrentPath:(id)arg1;
- (void)setMonitorQueue:(id)arg1;
- (void)setPathMonitor:(id)arg1;
- (void)setRadiosPreferences:(id)arg1;
- (void)start;
- (void)stop;

@end
