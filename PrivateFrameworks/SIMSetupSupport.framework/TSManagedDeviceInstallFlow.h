
@interface TSManagedDeviceInstallFlow : TSSIMSetupFlow <TSCellularPlanManagerCacheDelegate, TSSIMSetupFlowDelegate> {
    bool  _fallbackToActivationCode;
    id /* block */  _firstViewCompletion;
    bool  _ignoreTransport;
    NSError * _planInstallError;
    NSTimer * _provisioningWatchDogTimer;
    bool  _startMonitoringConnection;
    bool  _waitForService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (void)handleProvisioningWatchdogExpiry;
- (void)hasCellularConnection:(id /* block */)arg1;
- (id)initWith:(bool)arg1 fallbackToActivationCode:(bool)arg2 ignoreTransport:(bool)arg3;
- (void)invokeCompletionWithPlanInstallResult:(unsigned long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;

@end
