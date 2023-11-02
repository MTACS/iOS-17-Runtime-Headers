
@interface HKElectrocardiogramInfoView : UIStackView {
    UILabel * _bodyLabel;
    NSLayoutConstraint * _heartImageViewHeightConstraint;
    NSLayoutConstraint * _heartRateFirstBaselineConstraint;
    UILabel * _heartRateLabel;
    NSLayoutConstraint * _heartRateLabelLeadingConstraint;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) NSString *bodyText;
@property (nonatomic, retain) NSLayoutConstraint *heartImageViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *heartRateFirstBaselineConstraint;
@property (nonatomic, retain) UILabel *heartRateLabel;
@property (nonatomic, retain) NSLayoutConstraint *heartRateLabelLeadingConstraint;
@property (nonatomic, retain) NSString *heartRateText;

- (void).cxx_destruct;
- (void)_addSubviews;
- (id)_bodyView;
- (id)_heartRateView;
- (id)bodyLabel;
- (id)bodyText;
- (id)heartImageViewHeightConstraint;
- (id)heartRateFirstBaselineConstraint;
- (id)heartRateLabel;
- (id)heartRateLabelLeadingConstraint;
- (id)heartRateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBodyLabel:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)setHeartImageViewHeightConstraint:(id)arg1;
- (void)setHeartRateFirstBaselineConstraint:(id)arg1;
- (void)setHeartRateLabel:(id)arg1;
- (void)setHeartRateLabelLeadingConstraint:(id)arg1;
- (void)setHeartRateText:(id)arg1;
- (id)suffixForElementWithString:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end
