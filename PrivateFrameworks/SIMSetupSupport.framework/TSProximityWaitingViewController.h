
@interface TSProximityWaitingViewController : TSOBWelcomeController <TSSetupFlowItem> {
    SSProximityDevice * _btServer;
    <TSSIMSetupFlowDelegate> * _delegate;
}

@property SSProximityDevice *btServer;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)btServer;
- (id)delegate;
- (id)initWithBTServer:(id)arg1 transferBackPhoneNumber:(id)arg2;
- (bool)isStartOverRequiredOnBackButtonTapped;
- (void)setBtServer:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
