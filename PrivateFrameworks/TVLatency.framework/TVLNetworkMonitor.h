
@interface TVLNetworkMonitor : NSObject <NSNetServiceBrowserDelegate> {
    TVLNetworkInterface * _awdl;
    NSNetServiceBrowser * _awdlServiceBrowser;
    NSObject<OS_nw_path_monitor> * _awdl_monitor;
    TVLNetworkInterface * _ethernet;
    NSObject<OS_nw_path_monitor> * _ethernet_monitor;
    NSObject<OS_dispatch_queue> * _monitorQueue;
    bool  _monitoring;
    unsigned long long  _monitoringOptions;
    id /* block */  _updateHandler;
    TVLNetworkInterface * _wifi;
    NSObject<OS_nw_path_monitor> * _wifi_monitor;
}

@property (nonatomic, retain) TVLNetworkInterface *awdl;
@property (nonatomic, retain) NSNetServiceBrowser *awdlServiceBrowser;
@property (nonatomic, retain) NSObject<OS_nw_path_monitor> *awdl_monitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TVLNetworkInterface *ethernet;
@property (nonatomic, retain) NSObject<OS_nw_path_monitor> *ethernet_monitor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *monitorQueue;
@property (getter=isMonitoring, nonatomic) bool monitoring;
@property (nonatomic) unsigned long long monitoringOptions;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;
@property (nonatomic, retain) TVLNetworkInterface *wifi;
@property (nonatomic, retain) NSObject<OS_nw_path_monitor> *wifi_monitor;

- (void).cxx_destruct;
- (id)awdl;
- (id)awdlServiceBrowser;
- (id)awdl_monitor;
- (void)dealloc;
- (id)ethernet;
- (id)ethernet_monitor;
- (id)init;
- (bool)isMonitoring;
- (id)monitorQueue;
- (unsigned long long)monitoringOptions;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)setAwdl:(id)arg1;
- (void)setAwdlServiceBrowser:(id)arg1;
- (void)setAwdl_monitor:(id)arg1;
- (void)setEthernet:(id)arg1;
- (void)setEthernet_monitor:(id)arg1;
- (void)setMonitorQueue:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setMonitoringOptions:(unsigned long long)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)setWifi:(id)arg1;
- (void)setWifi_monitor:(id)arg1;
- (void)startMonitoringForInterfaceTypes:(unsigned long long)arg1 updateHandler:(id /* block */)arg2;
- (void)stopMonitoring;
- (id /* block */)updateHandler;
- (id)wifi;
- (id)wifi_monitor;

@end
