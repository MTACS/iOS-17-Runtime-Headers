
@interface DSWifiSyncController : DSTableWelcomeController <DSController, DSWifiSyncDelegate, UITableViewDelegate> {
    <DSNavigationDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _devicesLock;
    NSError * _fetchError;
    NSMutableArray * _pairedComputers;
    DSRemotePairingWrapper * _remotePairing;
    NSMutableArray * _selectedPairedComputers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *fetchError;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *pairedComputers;
@property (nonatomic, retain) DSRemotePairingWrapper *remotePairing;
@property (nonatomic, retain) NSMutableArray *selectedPairedComputers;
@property (readonly) Class superclass;

+ (void)removeAllPairedDevicesOnQueue:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_updateButtons;
- (void)addPairedDevices;
- (id)dateDescription:(id)arg1;
- (id)delegate;
- (id)fetchError;
- (id)init;
- (void)learnMoreWifiSyncPressed;
- (id)localizedDetailText;
- (id)pairedComputers;
- (void)presentFetchedErrorAlert;
- (void)presentRemoveErrorAlert:(id)arg1;
- (void)reloadDetailText;
- (id)remotePairing;
- (void)removeAllPairedDevicesAndPushNextPane;
- (void)removeComputersFromRemotePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeDetailViewControllerFromStack;
- (void)removePairedDevices:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeSelectedPairedDevicesAndPushNextPane;
- (void)returnFromDetailAndRemoveComputer:(id)arg1;
- (id)selectedPairedComputers;
- (void)setDelegate:(id)arg1;
- (void)setFetchError:(id)arg1;
- (void)setPairedComputers:(id)arg1;
- (void)setRemotePairing:(id)arg1;
- (void)setSelectedPairedComputers:(id)arg1;
- (void)shouldShowWithCompletion:(id /* block */)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)titleForPairedComputer:(id)arg1;
- (void)viewDidLoad;

@end
