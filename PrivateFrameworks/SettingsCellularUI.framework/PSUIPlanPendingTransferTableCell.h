
@interface PSUIPlanPendingTransferTableCell : PSUIDanglingPlanTableCell {
    CTCellularPlanPendingTransfer * _planPendingTransfer;
    UIImageView * _view;
}

@property (nonatomic, retain) CTCellularPlanPendingTransfer *planPendingTransfer;
@property (nonatomic, retain) UIImageView *view;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)planPendingTransfer;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setPlanPendingTransfer:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;

@end
