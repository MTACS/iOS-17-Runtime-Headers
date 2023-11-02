
@interface PKPayLaterFinancingPlanRow : NSObject <PKPayLaterDashboardIconRow> {
    NSString * _amountText;
    unsigned long long  _context;
    PKPayLaterFinancingPlan * _financingPlan;
    UIImage * _icon;
    unsigned long long  _maskType;
    long long  _rowIndex;
    id /* block */  _selectionHandler;
    bool  _showSpinner;
    NSString * _tertiaryText;
}

@property (nonatomic, copy) NSString *amountText;
@property (nonatomic) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) unsigned long long maskType;
@property (nonatomic) bool showSpinner;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tertiaryText;

- (void).cxx_destruct;
- (id)amountText;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (unsigned long long)context;
- (void)handleCellSelectionWithContinueBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)identifier;
- (id)initWithFinancingPlan:(id)arg1 rowIndex:(long long)arg2 selectionHandler:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maskType;
- (void)setAmountText:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setIcon:(id)arg1;
- (void)setMaskType:(unsigned long long)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setTertiaryText:(id)arg1;
- (bool)shouldHighlightItem;
- (bool)showSpinner;
- (id)tertiaryText;

@end
