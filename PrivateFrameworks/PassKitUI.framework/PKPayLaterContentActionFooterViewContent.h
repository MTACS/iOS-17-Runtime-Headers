
@interface PKPayLaterContentActionFooterViewContent : UIView {
    UIButton * _button;
    NSString * _buttonText;
    UIColor * _buttonTintColor;
    UIColor * _buttonTitleColor;
    <PKPayLaterContentActionFooterViewDelegate> * _delegate;
    UILabel * _leadingDetail;
    NSString * _leadingDetailText;
    UIColor * _leadingDetailTextColor;
    PKIconTextLabel * _leadingTitle;
    UIImage * _leadingTitleIcon;
    NSString * _leadingTitleText;
    UIColor * _leadingTitleTextColor;
    bool  _showSpinner;
    UIActivityIndicatorView * _spinnerView;
}

@property (nonatomic, copy) NSString *buttonText;
@property (nonatomic, retain) UIColor *buttonTintColor;
@property (nonatomic, retain) UIColor *buttonTitleColor;
@property (nonatomic, copy) NSString *leadingDetailText;
@property (nonatomic, retain) UIColor *leadingDetailTextColor;
@property (nonatomic, retain) UIImage *leadingTitleIcon;
@property (nonatomic, copy) NSString *leadingTitleText;
@property (nonatomic, retain) UIColor *leadingTitleTextColor;
@property (nonatomic) bool showSpinner;

+ (id)leadingTitleFont;

- (void).cxx_destruct;
- (void)_buttonTapped;
- (void)_configureButton;
- (void)_configureLabels;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (id)buttonText;
- (id)buttonTintColor;
- (id)buttonTitleColor;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (id)leadingDetailText;
- (id)leadingDetailTextColor;
- (id)leadingTitleIcon;
- (id)leadingTitleText;
- (id)leadingTitleTextColor;
- (void)setButtonText:(id)arg1;
- (void)setButtonTintColor:(id)arg1;
- (void)setButtonTitleColor:(id)arg1;
- (void)setLeadingDetailText:(id)arg1;
- (void)setLeadingDetailTextColor:(id)arg1;
- (void)setLeadingTitleIcon:(id)arg1;
- (void)setLeadingTitleText:(id)arg1;
- (void)setLeadingTitleTextColor:(id)arg1;
- (void)setShowSpinner:(bool)arg1;
- (bool)showSpinner;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
