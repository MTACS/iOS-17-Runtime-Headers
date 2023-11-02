
@interface PKPeerPaymentMessagesNumberPadView : UIView {
    id /* block */  _actionHandler;
    UIView * _buttonContainerView;
    PKPeerPaymentNumberPadActionButton * _buttons;
    bool  _enabled;
    unsigned long long  _style;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) unsigned long long style;

+ (struct CGSize { double x1; double x2; })referenceSize;
+ (struct CGSize { double x1; double x2; })referenceSizeForStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_buttonForAction:(unsigned long long)arg1;
- (void)_handleActionButton:(id)arg1;
- (id /* block */)actionHandler;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)layoutSubviews;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)style;

@end
