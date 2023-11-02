
@interface TSTransferCloudFlow : TSSIMSetupFlow <TSCellularPlanManagerCacheDelegate, TSSIMSetupFlowDelegate> {
    UIBarButtonItem * _cancelButton;
    TSTransferCloudFlowModel * _model;
    unsigned long long  _proximitySetupState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) TSTransferCloudFlowModel *model;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createIntroViewController:(bool)arg1;
- (void)_userDidTapCancel;
- (void)dealloc;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)initWithProximitySetupState:(unsigned long long)arg1;
- (id)model;
- (id)nextViewControllerFrom:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)setModel:(id)arg1;
- (void)startOverWithFirstViewController:(id /* block */)arg1;

@end
