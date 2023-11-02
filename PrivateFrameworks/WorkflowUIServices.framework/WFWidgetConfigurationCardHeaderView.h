
@interface WFWidgetConfigurationCardHeaderView : UIView {
    UIView * _blendedBorderView;
    NSLayoutConstraint * _bottomAreaHeightConstraint;
    UIButton * _closeButton;
    <WFWidgetConfigurationCardHeaderViewDelegate> * _delegate;
    UIStackView * _labelsStackView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    double  _widgetDescriptionTallScriptCompensatedSpacing;
}

@property (nonatomic, readonly) UIView *blendedBorderView;
@property (nonatomic, readonly) NSLayoutConstraint *bottomAreaHeightConstraint;
@property (nonatomic, readonly) UIButton *closeButton;
@property (nonatomic) <WFWidgetConfigurationCardHeaderViewDelegate> *delegate;
@property (nonatomic, readonly) UIStackView *labelsStackView;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic) double widgetDescriptionTallScriptCompensatedSpacing;

- (void).cxx_destruct;
- (id)blendedBorderView;
- (id)bottomAreaHeightConstraint;
- (void)close;
- (id)closeButton;
- (id)delegate;
- (id)initWithIcon:(id)arg1 closeButton:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
- (id)initWithRequest:(id)arg1;
- (id)labelsStackView;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setWidgetDescriptionTallScriptCompensatedSpacing:(double)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateIconBorderColor;
- (void)updateIconBorderWidth;
- (double)widgetDescriptionTallScriptCompensatedSpacing;

@end
