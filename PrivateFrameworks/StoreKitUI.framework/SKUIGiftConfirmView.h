
@interface SKUIGiftConfirmView : UIView {
    SKUIGiftConfirmLabeledValue * _amountView;
    UILabel * _chargeDisclaimerLabel;
    UILabel * _confirmYourOrderLabel;
    SKUIGiftConfirmLabeledValue * _fromView;
    SKUIGiftConfiguration * _giftConfiguration;
    SKUIGiftConfirmLabeledValue * _itemView;
    SKUIGiftConfirmLabeledValue * _messageView;
    SKUIGiftConfirmLabeledValue * _recipientsView;
    UIView * _rule1;
    UIView * _rule2;
    UIView * _rule3;
    UIView * _rule4;
    UIView * _rule5;
    UIView * _rule6;
    SKUIGiftConfirmLabeledValue * _sendOnView;
    SKUIGiftConfirmLabeledValue * _senderView;
    UIButton * _termsButton;
    SKUIGiftConfirmLabeledValue * _themeNameView;
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
