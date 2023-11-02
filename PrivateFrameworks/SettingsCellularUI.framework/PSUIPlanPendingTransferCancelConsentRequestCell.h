
@interface PSUIPlanPendingTransferCancelConsentRequestCell : PSTableCell {
    CTCellularPlanManager * _cellularPlanManager;
    CTCellularPlanPendingTransfer * _planPendingTransfer;
}

@property (nonatomic, retain) CTCellularPlanManager *cellularPlanManager;
@property (nonatomic, retain) CTCellularPlanPendingTransfer *planPendingTransfer;

- (void).cxx_destruct;
- (void)cancelPressed;
- (id)cellularPlanManager;
- (id)getLogger;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)planPendingTransfer;
- (void)setCellularPlanManager:(id)arg1;
- (void)setPlanPendingTransfer:(id)arg1;

@end
