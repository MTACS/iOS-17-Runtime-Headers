
@interface TSIDSTransferFlow : TSSIMSetupFlow <CoreTelephonyClientCellularPlanManagementDelegate, TSSIMSetupFlowDelegate> {
    CoreTelephonyClient * _client;
    bool  _isWebsheetFlow;
    UIViewController<PRXCardContentProviding> * _secureIntentProxCard;
    NSTimer * _transferringWatchDogTimer;
}

@property (nonatomic, retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isWebsheetFlow;
@property (retain) UIViewController<PRXCardContentProviding> *secureIntentProxCard;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)client;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (void)handleTransferringWatchdogExpiry;
- (id)init;
- (bool)isWebsheetFlow;
- (void)launchSecureIntentUI:(id)arg1 isLocalConvertFlow:(bool)arg2 completion:(id /* block */)arg3;
- (id)nextViewControllerFrom:(id)arg1;
- (id)secureIntentProxCard;
- (void)setClient:(id)arg1;
- (void)setIsWebsheetFlow:(bool)arg1;
- (void)setSecureIntentProxCard:(id)arg1;
- (void)transferEventUpdate:(id)arg1;

@end
