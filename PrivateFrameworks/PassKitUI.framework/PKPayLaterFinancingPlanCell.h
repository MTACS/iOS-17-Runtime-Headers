
@interface PKPayLaterFinancingPlanCell : PKPayLaterIconCell {
    unsigned long long  _context;
    PKPayLaterFinancingPlan * _financingPlan;
    bool  _showSpinner;
    PKPayLaterFinancingPlanCellView * _view;
}

@property (nonatomic, readonly) unsigned long long context;
@property (nonatomic, readonly) PKPayLaterFinancingPlan *financingPlan;
@property (nonatomic) bool showSpinner;

- (void).cxx_destruct;
- (unsigned long long)context;
- (id)financingPlan;
- (double)minimumHeight;
- (void)prepareForReuse;
- (void)setFinancingPlan:(id)arg1 context:(unsigned long long)arg2 rowIndex:(long long)arg3;
- (void)setShowSpinner:(bool)arg1;
- (bool)showSpinner;

@end
