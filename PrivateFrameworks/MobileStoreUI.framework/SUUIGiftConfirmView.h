
@interface SUUIGiftConfirmView : UIView {
    SUUIGiftConfirmLabeledValue * _amountView;
    UILabel * _chargeDisclaimerLabel;
    UILabel * _confirmYourOrderLabel;
    SUUIGiftConfirmLabeledValue * _fromView;
    SUUIGiftConfiguration * _giftConfiguration;
    SUUIGiftConfirmLabeledValue * _itemView;
    SUUIGiftConfirmLabeledValue * _messageView;
    SUUIGiftConfirmLabeledValue * _recipientsView;
    UIView * _rule1;
    UIView * _rule2;
    UIView * _rule3;
    UIView * _rule4;
    UIView * _rule5;
    UIView * _rule6;
    SUUIGiftConfirmLabeledValue * _sendOnView;
    SUUIGiftConfirmLabeledValue * _senderView;
    UIButton * _termsButton;
    SUUIGiftConfirmLabeledValue * _themeNameView;
    UILabel * _totalLabel;
}

@property (nonatomic, readonly) UIButton *termsButton;

- (void).cxx_destruct;
- (id)_newBoldLabelWithSize:(double)arg1;
- (id)_newLightLabelWithSize:(double)arg1 alpha:(double)arg2;
- (id)_termsButton;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)layoutSubviews;
- (id)termsButton;

@end
