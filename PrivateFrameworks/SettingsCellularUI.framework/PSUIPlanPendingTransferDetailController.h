
@interface PSUIPlanPendingTransferDetailController : PSListController {
    PSUIPlanPendingTransferMenusGroup * _planPendingTransferMenus;
}

@property (nonatomic, retain) PSUIPlanPendingTransferMenusGroup *planPendingTransferMenus;

- (void).cxx_destruct;
- (void)cellularPlanChanged;
- (id)getLogger;
- (id)init;
- (id)planPendingTransferMenus;
- (void)setPlanPendingTransferMenus:(id)arg1;
- (id)specifiers;

@end
