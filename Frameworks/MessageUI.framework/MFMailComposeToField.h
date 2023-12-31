
@interface MFMailComposeToField : MFMailComposeRecipientTextView {
    bool  _canEncrypt;
    MFComposeSMIMELockButton * _smimeButton;
    bool  _smimeButtonEnabled;
    bool  _smimeButtonVisible;
    <MFMailComposeToFieldDelegate> * _toFieldDelegate;
    bool  _wantsEncryption;
}

@property (nonatomic, readonly) MFComposeSMIMELockButton *SMIMEButton;
@property (nonatomic) bool smimeButtonEnabled;
@property (nonatomic) bool smimeButtonVisible;
@property (nonatomic) <MFMailComposeToFieldDelegate> *toFieldDelegate;

- (void).cxx_destruct;
- (id)SMIMEButton;
- (void)_setSMIMEButtonVisible:(bool)arg1 animated:(bool)arg2;
- (void)_tappedSMIMEButton:(id)arg1;
- (id)_textContainerExclusionPathsWithAddButton:(bool)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setExpanded:(bool)arg1;
- (void)setSmimeButtonEnabled:(bool)arg1;
- (void)setSmimeButtonVisible:(bool)arg1;
- (void)setToFieldDelegate:(id)arg1;
- (void)setWantsEncryption:(bool)arg1 canEncrypt:(bool)arg2 animated:(bool)arg3;
- (bool)smimeButtonEnabled;
- (bool)smimeButtonVisible;
- (id)toFieldDelegate;

@end
