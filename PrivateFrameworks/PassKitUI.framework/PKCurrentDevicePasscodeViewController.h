
@interface PKCurrentDevicePasscodeViewController : DevicePINController <DevicePINControllerDelegate> {
    PKPasscodeUpgradeFlowController * _flowController;
    bool  _viewHasAppeared;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPasscodeUpgradeFlowController:(id)arg1;
- (id)pinInstructionsPrompt;
- (bool)requiresKeyboard;
- (id)stringsBundle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
