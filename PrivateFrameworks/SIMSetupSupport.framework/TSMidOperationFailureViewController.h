
@interface TSMidOperationFailureViewController : TSOBWelcomeController <TSSIMSetupDelegate, TSSetupFlowItem, UINavigationControllerDelegate> {
    UIBarButtonItem * _cancelButton;
    NSString * _carrierName;
    CoreTelephonyClient * _client;
    <TSSIMSetupFlowDelegate> * _delegate;
    NSDictionary * _errorHeaderDetail;
    bool  _isContinueByUser;
    NSError * _planItemError;
    CTCellularPlanItem * _updatePlanItem;
    bool  _withBackButton;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isContinueByUser;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonAction;
- (void)_disableMismatchedPlan;
- (void)_doneButtonTapped;
- (void)_locationServiceButtonAction;
- (void)_userDidTapCancel;
- (id)delegate;
- (id)initWithPlanItemError:(id)arg1 updatePlanItem:(id)arg2 withBackButton:(bool)arg3 forCarrier:(id)arg4 withCarrierErrorCode:(id)arg5;
- (bool)isContinueByUser;
- (bool)isStartOverRequiredOnBackButtonTapped;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
