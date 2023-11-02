
@interface PKPassShareActivationShareActivationCodeView : UIView {
    NSString * _activationCode;
    UIView * _activationCodeBackgroundView;
    UILabel * _activationCodeLabel;
    PKContinuousButton * _copyButton;
    <PKPassShareActivationShareActivationCodeViewDelegate> * _delegate;
    PKContinuousButton * _phoneButton;
    PKContinuousButton * _shareButton;
    bool  _showPhoneCallButton;
}

@property (nonatomic, retain) NSString *activationCode;
@property (nonatomic) bool showPhoneCallButton;

- (void).cxx_destruct;
- (void)_copyActivationCode;
- (void)_copyButtonPressed;
- (void)_phoneButtonPressed;
- (void)_shareButtonPressed;
- (void)_showCopyMenu;
- (id)activationCode;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)setActivationCode:(id)arg1;
- (void)setShowPhoneCallButton:(bool)arg1;
- (bool)showPhoneCallButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
