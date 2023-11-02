
@interface TSCellularPlanProximityTransferController : NSObject <CoreTelephonyClientCellularPlanManagementDelegate, TSSIMSetupFlowDelegate> {
    CoreTelephonyClient * _client;
    <ESIMProxTransferControllerDelegate> * _delegate;
}

@property (nonatomic, retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ESIMProxTransferControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)attemptFailed;
- (id)client;
- (id)delegate;
- (id)initWithESIMDelegate:(id)arg1;
- (void)launchSecureIntentUI:(id)arg1 isLocalConvertFlow:(bool)arg2 completion:(id /* block */)arg3;
- (void)setClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)userDidTapCancel;
- (void)viewControllerDidComplete:(id)arg1;

@end
