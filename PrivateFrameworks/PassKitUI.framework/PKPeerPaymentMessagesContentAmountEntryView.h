
@interface PKPeerPaymentMessagesContentAmountEntryView : UIView {
    PKPeerPaymentMessagesMultiActionView * _actionView;
    PKPeerPaymentMessagesAmountStepperView * _amountStepperView;
    UILabel * _balanceLabel;
    UIView * _containerView;
    bool  _isAnimationAllowed;
    bool  _isExpansionSupported;
    bool  _isKeypadSupported;
    double  _navigationBarHeight;
    PKPeerPaymentMessagesNumberPadView * _numberPadView;
    double  _percentExpanded;
    UIButton * _showKeypadButton;
    UILabel * _showKeypadHint;
    bool  _usesAccessibilityLayout;
}

@property (nonatomic, readonly) PKPeerPaymentMessagesMultiActionView *actionView;
@property (nonatomic, readonly) PKPeerPaymentMessagesAmountStepperView *amountStepperView;
@property (nonatomic, readonly) UILabel *balanceLabel;
@property (nonatomic) bool isAnimationAllowed;
@property (nonatomic) bool isExpansionSupported;
@property (nonatomic) bool isKeypadSupported;
@property (nonatomic) double navigationBarHeight;
@property (nonatomic, readonly) PKPeerPaymentMessagesNumberPadView *numberPadView;
@property (nonatomic) double percentExpanded;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 progressToExpanded:(double)arg2 isTemplate:(bool)arg3;
- (void)_setBalanceLabelVisible:(bool)arg1 animated:(bool)arg2;
- (void)_setNumberPadVisible:(bool)arg1 animated:(bool)arg2;
- (void)_setShowKeypadHintVisible:(bool)arg1 animated:(bool)arg2;
- (id)actionView;
- (id)amountStepperView;
- (id)balanceLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimationAllowed;
- (bool)isExpansionSupported;
- (bool)isKeypadSupported;
- (void)layoutSubviews;
- (double)navigationBarHeight;
- (id)numberPadView;
- (double)percentExpanded;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsAnimationAllowed:(bool)arg1;
- (void)setIsExpansionSupported:(bool)arg1;
- (void)setIsKeypadSupported:(bool)arg1;
- (void)setNavigationBarHeight:(double)arg1;
- (void)setPercentExpanded:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;
- (void)traitCollectionDidChange:(id)arg1;

@end
