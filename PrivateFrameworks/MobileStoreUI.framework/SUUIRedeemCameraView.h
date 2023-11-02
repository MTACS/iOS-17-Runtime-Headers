
@interface SUUIRedeemCameraView : UIView <UITextFieldDelegate> {
    SUUIClientContext * _clientContext;
    <SUUIRedeemCameraViewDelegate> * _delegate;
    bool  _displayRedeem;
    SUUIITunesPassConfiguration * _iTunesPassConfiguration;
    SUUIRedeemITunesPassLockup * _iTunesPassLockup;
    SUUIRedeemTextField * _inputAccessoryTextField;
    SUUIRedeemCameraLandingView * _landingView;
    UIView * _overlay;
    UIView * _redeemerView;
    UIButton * _termsButton;
    SUUIRedeemTextField * _textField;
}

@property (nonatomic, retain) SUUIITunesPassConfiguration *ITunesPassConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIRedeemCameraViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)ITunesPassConfiguration;
- (void)_hideKeyboard;
- (void)_iTunesPassLearnMoreAction:(id)arg1;
- (bool)_isShowingRedeemer;
- (void)_landingButtonAction:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2;
- (void)_pauseRedeemer;
- (void)_resumeRedeemer;
- (void)_showRedeemer:(bool)arg1;
- (void)_tapGestureAction:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)image;
- (id)initWithClientContext:(id)arg1;
- (bool)isEnabled;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setITunesPassConfiguration:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)showKeyboard;
- (void)start;
- (id)text;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;

@end
