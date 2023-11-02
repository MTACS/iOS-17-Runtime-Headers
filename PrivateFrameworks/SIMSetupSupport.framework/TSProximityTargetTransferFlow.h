
@interface TSProximityTargetTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    unsigned long long  _backgroundTask;
    SSProximityDevice * _btServer;
    UIBarButtonItem * _cancelButton;
    NSString * _pin;
    id  _transferBackPlan;
}

@property unsigned long long backgroundTask;
@property (retain) SSProximityDevice *btServer;
@property (retain) UIBarButtonItem *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *pin;
@property (readonly) Class superclass;
@property (retain) id transferBackPlan;

- (void).cxx_destruct;
- (void)_beginAdvertising:(id /* block */)arg1;
- (void)_endAdvertising;
- (id)_firstViewController;
- (void)_handleSKEvent:(id)arg1;
- (void)_startBackgroundTask;
- (void)_stopBackgroundTask;
- (void)appBackgrounded;
- (void)appForegrounded;
- (void)attemptFailed;
- (unsigned long long)backgroundTask;
- (id)btServer;
- (id)cancelButton;
- (void)dealloc;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)initWithTransferBackPlan:(id)arg1;
- (id)nextViewControllerFrom:(id)arg1;
- (id)pin;
- (void)setBackgroundTask:(unsigned long long)arg1;
- (void)setBtServer:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)setPin:(id)arg1;
- (void)setTransferBackPlan:(id)arg1;
- (id)transferBackPlan;
- (void)userDidTapCancel;

@end
