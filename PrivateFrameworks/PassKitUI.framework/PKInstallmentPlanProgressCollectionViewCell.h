
@interface PKInstallmentPlanProgressCollectionViewCell : PKDashboardCollectionViewCell {
    bool  _complete;
    UIImageView * _completeCheckmark;
    UILabel * _completeLabel;
    UILabel * _detailLabel;
    PKCurrencyAmount * _leadingAmount;
    UILabel * _leadingAmountLabel;
    NSString * _leadingTitle;
    UILabel * _leadingTitleLabel;
    PKProgressBar * _progressBar;
    NSString * _subtitleText;
    PKCurrencyAmount * _trailingAmount;
    UILabel * _trailingAmountLabel;
    NSString * _trailingTitle;
    UILabel * _trailingTitleLabel;
}

@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic, retain) PKCurrencyAmount *leadingAmount;
@property (nonatomic, copy) NSString *leadingTitle;
@property (nonatomic) double progressAmount;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, retain) PKCurrencyAmount *trailingAmount;
@property (nonatomic, copy) NSString *trailingTitle;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isComplete;
- (void)layoutSubviews;
- (id)leadingAmount;
- (id)leadingTitle;
- (double)progressAmount;
- (void)setComplete:(bool)arg1;
- (void)setLeadingAmount:(id)arg1;
- (void)setLeadingTitle:(id)arg1;
- (void)setProgressAmount:(double)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTrailingAmount:(id)arg1;
- (void)setTrailingTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleText;
- (id)trailingAmount;
- (id)trailingTitle;

@end
