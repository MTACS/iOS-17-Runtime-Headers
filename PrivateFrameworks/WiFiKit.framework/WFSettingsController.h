
@interface WFSettingsController : NSObject <WFNetworkSettingsViewControllerDataCoordinator> {
    WFAppearanceProxy * _appearanceProxy;
    bool  _cloudSyncRunning;
    WFNetworkSettingsConfig * _config;
    bool  _currentNetwork;
    WFDetailsContext * _detailsContext;
    NSString * _hardwareMACAddress;
    WFIPMonitor * _ipMonitor;
    bool  _monitorIPChanges;
    WFNetworkScanRecord * _network;
    NSOperationQueue * _queue;
    WFNetworkSettingsViewController * _settingsViewController;
}

@property (nonatomic, retain) WFAppearanceProxy *appearanceProxy;
@property (nonatomic) bool cloudSyncRunning;
@property (nonatomic, retain) WFNetworkSettingsConfig *config;
@property (getter=isCurrentNetwork, nonatomic) bool currentNetwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFDetailsContext *detailsContext;
@property (nonatomic, retain) NSString *hardwareMACAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFIPMonitor *ipMonitor;
@property (nonatomic) bool monitorIPChanges;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (nonatomic, retain) WFNetworkSettingsViewController *settingsViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applySetupAppearances;
- (id)_baseConfigForNetwork:(id)arg1 current:(bool)arg2;
- (void)_currentNetworkDidChange:(id)arg1;
- (void)_ipStateDidChange:(id)arg1;
- (void)_refreshSettingsConfig:(id)arg1;
- (void)_startMontoringIPChanges;
- (void)_stopMonitoringIPChanges;
- (id)appearanceProxy;
- (bool)cloudSyncRunning;
- (id)config;
- (void)dealloc;
- (id)detailsContext;
- (id)hardwareMACAddress;
- (id)initWithDetailsContext:(id)arg1;
- (id)initWithDetailsContext:(id)arg1 appearanceProxy:(id)arg2;
- (id)ipMonitor;
- (bool)isCurrentNetwork;
- (bool)monitorIPChanges;
- (id)network;
- (void)networkSettingsViewController:(id)arg1 saveConfig:(id)arg2 errorHandler:(id /* block */)arg3;
- (id)queue;
- (void)setAppearanceProxy:(id)arg1;
- (void)setCloudSyncRunning:(bool)arg1;
- (void)setConfig:(id)arg1;
- (void)setCurrentNetwork:(bool)arg1;
- (void)setDetailsContext:(id)arg1;
- (void)setHardwareMACAddress:(id)arg1;
- (void)setIpMonitor:(id)arg1;
- (void)setMonitorIPChanges:(bool)arg1;
- (void)setNetwork:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSettingsViewController:(id)arg1;
- (id)settingsViewController;

@end
