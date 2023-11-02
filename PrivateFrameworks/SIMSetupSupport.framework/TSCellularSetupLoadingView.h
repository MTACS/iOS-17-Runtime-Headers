
@interface TSCellularSetupLoadingView : UIView {
    UILabel * _firstLabel;
    bool  _isRemotePlan;
    UILabel * _secondLabel;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) UILabel *firstLabel;
@property (nonatomic) bool isRemotePlan;
@property (nonatomic, retain) UILabel *secondLabel;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (void)_setupActivityIndicator;
- (void)_setupLabels;
- (id)firstLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRemotePlan;
- (void)layoutSubviews;
- (id)secondLabel;
- (void)setFirstLabel:(id)arg1;
- (void)setIsRemotePlan:(bool)arg1;
- (void)setSecondLabel:(id)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (void)spinnerStartAnimating;
- (void)spinnerStopAnimating;

@end
