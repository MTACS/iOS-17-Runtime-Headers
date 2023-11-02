
@interface GKDashboardButtonSectionHeaderView : GKDashboardSectionHeaderView {
    NSAttributedString * _attributedButtonTitle;
    UIView * _backgroundPlatterView;
    UIButton * _button;
    SEL  _buttonAction;
    bool  _buttonHidden;
    id  _buttonTarget;
    UIFocusGuide * _focusGuide;
    NSLayoutConstraint * _rightMarginConstraint;
    UIStackView * _stackView;
}

@property (nonatomic, copy) NSAttributedString *attributedButtonTitle;
@property (nonatomic) UIView *backgroundPlatterView;
@property (nonatomic) UIButton *button;
@property (nonatomic) SEL buttonAction;
@property (getter=isButtonHidden, nonatomic) bool buttonHidden;
@property (nonatomic) UIMenu *buttonMenu;
@property (nonatomic) id buttonTarget;
@property (nonatomic, copy) NSString *buttonTitle;
@property (nonatomic, retain) UIFocusGuide *focusGuide;
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint;
@property (nonatomic) UIStackView *stackView;

+ (double)defaultHeight;
+ (struct CGSize { double x1; double x2; })platformSizeForTitle:(id)arg1;
+ (struct CGSize { double x1; double x2; })platformSizeForTitle:(id)arg1 buttonTitle:(id)arg2;
+ (double)widthForTitle:(id)arg1;
+ (double)widthForTitle:(id)arg1 buttonTitle:(id)arg2;

- (void).cxx_destruct;
- (id)attributedButtonTitle;
- (void)awakeFromNib;
- (id)backgroundPlatterView;
- (id)button;
- (SEL)buttonAction;
- (id)buttonMenu;
- (void)buttonPressed:(id)arg1;
- (id)buttonTarget;
- (id)buttonTitle;
- (id)focusGuide;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isButtonHidden;
- (void)prepareForReuse;
- (id)rightMarginConstraint;
- (void)setAttributedButtonTitle:(id)arg1;
- (void)setBackgroundPlatterView:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setButtonAction:(SEL)arg1;
- (void)setButtonHidden:(bool)arg1;
- (void)setButtonMenu:(id)arg1;
- (void)setButtonTarget:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setFocusGuide:(id)arg1;
- (void)setRightMarginConstraint:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;

@end
