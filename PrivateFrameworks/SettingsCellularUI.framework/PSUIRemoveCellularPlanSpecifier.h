
@interface PSUIRemoveCellularPlanSpecifier : PSConfirmationSpecifier {
    CTCellularPlanManager * _cellularPlanManager;
    PSListController * _hostController;
    PSUICellularPlanManagerCache * _planManagerCache;
    PSUICellularPlanUniversalReference * _planReference;
    bool  _popViewControllerOnPlanDeletion;
}

@property (nonatomic, retain) CTCellularPlanManager *cellularPlanManager;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) PSUICellularPlanManagerCache *planManagerCache;
@property (nonatomic, retain) PSUICellularPlanUniversalReference *planReference;
@property (nonatomic) bool popViewControllerOnPlanDeletion;

- (void).cxx_destruct;
- (void)_didRemoveSessionComplete;
- (void)alignLeft;
- (id)cellularPlanManager;
- (id)getLogger;
- (id)hostController;
- (id)initWithPlanUniversalReference:(id)arg1 cellularPlanManager:(id)arg2 planManagerCache:(id)arg3 hostController:(id)arg4 popViewControllerOnPlanDeletion:(bool)arg5;
- (id)planManagerCache;
- (id)planReference;
- (bool)popViewControllerOnPlanDeletion;
- (void)prepareToShowRemap:(id)arg1 completion:(id /* block */)arg2;
- (void)remap:(id)arg1 to:(id)arg2 completion:(id /* block */)arg3;
- (void)removeCellularPlan:(id)arg1;
- (void)removeCellularPlanConfirmed:(id)arg1;
- (void)setCellularPlanManager:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setPlanManagerCache:(id)arg1;
- (void)setPlanReference:(id)arg1;
- (void)setPopViewControllerOnPlanDeletion:(bool)arg1;
- (void)showRemapFor:(id)arg1 withList:(id)arg2 completion:(id /* block */)arg3;

@end
