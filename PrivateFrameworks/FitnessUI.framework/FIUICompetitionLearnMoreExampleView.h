
@interface FIUICompetitionLearnMoreExampleView : UIView {
    UILabel * _exercisePercentLabel;
    UIImageView * _exerciseRingView;
    UILabel * _movePercentLabel;
    UIImageView * _moveRingView;
    NSNumber * _previousLayoutWidth;
    UIView * _separatorView;
    UIColor * _separatorViewColor;
    UILabel * _standPercentLabel;
    UIImageView * _standRingView;
    UILabel * _totalPointsLabel;
    UIColor * _totalPointsLabelColor;
    NSString * _totalPointsLabelText;
}

@property (nonatomic, retain) UIColor *separatorViewColor;
@property (nonatomic, retain) UIColor *totalPointsLabelColor;
@property (nonatomic, retain) NSString *totalPointsLabelText;

- (void).cxx_destruct;
- (id)_ringPercentageLabelForPercentage:(double)arg1 withMetricColors:(id)arg2;
- (id)_ringViewOfType:(long long)arg1 withMetricColors:(id)arg2 percentage:(double)arg3;
- (id)init;
- (void)layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)separatorViewColor;
- (void)setSeparatorViewColor:(id)arg1;
- (void)setTotalPointsLabelColor:(id)arg1;
- (void)setTotalPointsLabelText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)totalPointsLabelColor;
- (id)totalPointsLabelText;

@end
