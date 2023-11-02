
@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell {
    CTCellularPlanPendingTransfer * _planPendingTransfer;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) CTCellularPlanPendingTransfer *planPendingTransfer;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (id)_setStatusLabelText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)planPendingTransfer;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setPlanPendingTransfer:(id)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;

@end
