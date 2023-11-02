
@interface PKPeerPaymentMessagesMultiActionView : UIView {
    id /* block */  _actionHandler;
    unsigned long long  _centerAction;
    UIButton * _centerButton;
    bool  _enabled;
    unsigned long long  _leadingAction;
    UIActivityIndicatorView * _leadingActivityIndicator;
    UIView * _leadingActivityIndicatorBackground;
    PKPeerPaymentMessagesRoundedRectangleButton * _leadingButton;
    unsigned long long  _style;
    unsigned long long  _trailingAction;
    UIActivityIndicatorView * _trailingActivityIndicator;
    UIView * _trailingActivityIndicatorBackground;
    PKPeerPaymentMessagesRoundedRectangleButton * _trailingButton;
    bool  _usesFlexibleButtonWidth;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic) unsigned long long centerAction;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) unsigned long long leadingAction;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long trailingAction;
@property (nonatomic) bool usesFlexibleButtonWidth;

- (void).cxx_destruct;
- (id)_axIdentifierForAction:(unsigned long long)arg1;
- (void)_handleActionButton:(id)arg1;
- (double)_heightForPrimaryButtonForAvailableSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_primaryButton;
- (id)_secondaryButton;
- (id)_titleForAction:(unsigned long long)arg1;
- (id /* block */)actionHandler;
- (unsigned long long)centerAction;
- (id)init;
- (bool)isEnabled;
- (void)layoutSubviews;
- (unsigned long long)leadingAction;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setActivityIndicatorVisible:(bool)arg1 forAction:(unsigned long long)arg2;
- (void)setCenterAction:(unsigned long long)arg1;
- (void)setCenterButtonVisible:(bool)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setLeadingAction:(unsigned long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTrailingAction:(unsigned long long)arg1;
- (void)setUsesFlexibleButtonWidth:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forStyle:(unsigned long long)arg2;
- (unsigned long long)style;
- (unsigned long long)trailingAction;
- (bool)usesFlexibleButtonWidth;

@end
