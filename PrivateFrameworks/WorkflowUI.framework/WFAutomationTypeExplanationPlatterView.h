
@interface WFAutomationTypeExplanationPlatterView : UIView {
    UIButton * _button;
    UILabel * _explanationTextLabel;
    UIImageView * _iconView;
    UIStackView * _stackView;
}

@property (nonatomic, readonly) UIButton *button;
@property (nonatomic, readonly) UILabel *explanationTextLabel;
@property (nonatomic, readonly) UIImageView *iconView;
@property (nonatomic, readonly) UIStackView *stackView;

- (void).cxx_destruct;
- (id)button;
- (void)configureForAutomationType:(unsigned long long)arg1;
- (id)explanationTextLabel;
- (id)homeAutomationIcon;
- (id)homeButtonColor;
- (id)homeExplanatoryText;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)personalAutomationIcon;
- (void)prepareForReuse;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setButtonTitle:(id)arg1 color:(id)arg2;
- (void)setExplanatoryText:(id)arg1;
- (void)setIcon:(id)arg1;
- (id)stackView;

@end
