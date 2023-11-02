
@interface PKPayLaterFinancingPlanCellView : UIView {
    unsigned long long  _context;
    UIImageView * _disclosureView;
    struct CGSize { 
        double width; 
        double height; 
    }  _disclosureViewSize;
    PKPayLaterFinancingPlan * _financingPlan;
    UILabel * _primaryLabel;
    PKProgressBar * _progressBar;
    long long  _rowIndex;
    UILabel * _secondaryLabel;
    bool  _showSpinner;
    UIActivityIndicatorView * _spinner;
    UILabel * _tertiaryLabel;
}

@property (nonatomic) bool showSpinner;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (id)initWithFinancingPlan:(id)arg1 context:(unsigned long long)arg2 rowIndex:(long long)arg3;
- (void)layoutSubviews;
- (void)setShowSpinner:(bool)arg1;
- (bool)showSpinner;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
