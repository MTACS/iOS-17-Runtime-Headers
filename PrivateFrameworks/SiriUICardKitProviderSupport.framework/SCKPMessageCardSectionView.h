
@interface SCKPMessageCardSectionView : UIView <SCKPAudioMessageViewDelegate, SCKPMessageCardSectionAttachmentViewDelegate, UITextViewDelegate> {
    SCKPMessageCardSectionAttachmentView * _attachmentView;
    SCKPAudioMessageView * _audioMessageView;
    <SCKPMessageCardSectionViewDelegate> * _delegate;
    UIVisualEffectView * _messageBackgroundView;
    int  _messageStatus;
    UIButton * _sendButton;
    CKTextBalloonView * _sentBalloonView;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long playButtonState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sendButtonPressed:(id)arg1;
- (void)audioMessagePlayButtonTapped:(id)arg1;
- (void)dismissKeyboard;
- (id)displayedText;
- (id)initWithMessageCardSection:(id)arg1 delegate:(id)arg2;
- (bool)keyboardIsVisible;
- (void)layoutSubviews;
- (long long)playButtonState;
- (void)setMessageContents:(id)arg1;
- (void)setPlayButtonState:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)userDidTapAttachmentView:(id)arg1;

@end
