
@interface PKPaymentSetupTransferCardView : UIView {
    <PKPaymentSetupTransferCardDelegate> * _delegate;
    UIButton * _transferBalanceButton;
}

@property (nonatomic) <PKPaymentSetupTransferCardDelegate> *delegate;
@property (nonatomic, retain) UIButton *transferBalanceButton;

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_transferBalanceButtonTapped:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setTransferBalanceButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)transferBalanceButton;

@end
