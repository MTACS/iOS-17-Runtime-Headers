
@interface AXRNearbyDevicesViewController : UITableViewController <AXRDeviceDiscoveryObserver, AXRemoteViewServiceInterface> {
    NSArray * _discoveredDevices;
    AXRDeviceDiscoveryManager * _discoveryManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *discoveredDevices;
@property (nonatomic, retain) AXRDeviceDiscoveryManager *discoveryManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_connectToDevice:(id)arg1;
- (void)_dismissPresentedViewController;
- (void)_showActiveDeviceConnectionAlertWithDevice:(id)arg1;
- (void)_showFailedToConnectAlert;
- (void)deviceDiscoveryManager:(id)arg1 updatedDevices:(id)arg2;
- (id)discoveredDevices;
- (id)discoveryManager;
- (void)setDiscoveredDevices:(id)arg1;
- (void)setDiscoveryManager:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
