
@interface CKMessageEditingView : UIView <CKMessageEditingBalloonViewDelegate> {
    UIButton * _confirmButton;
    bool  _firstLayoutPassCompleted;
    CKMessageEditingBalloonView * _messageEditingBalloonView;
    <CKMessageEditingViewDelegate> * _messageEditingViewDelegate;
    long long  _messageEditingViewState;
    CKComposition * _originalComposition;
    UIButton * _rejectButton;
}

@property (nonatomic, readonly) UIView *balloonViewForAlignment;
@property (nonatomic, retain) UIButton *confirmButton;
@property (nonatomic, readonly) CKComposition *currentComposition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool firstLayoutPassCompleted;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMessageEditingBalloonView *messageEditingBalloonView;
@property (nonatomic) <CKMessageEditingViewDelegate> *messageEditingViewDelegate;
@property (nonatomic) long long messageEditingViewState;
@property (nonatomic, retain) CKComposition *originalComposition;
@property (nonatomic, retain) UIButton *rejectButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_confirmButtonSelected:(id)arg1;
- (void)_rejectButtonSelected:(id)arg1;
- (void)_updateTextFieldWithOriginalComposition;
- (void)applyGrammarCheckingIndication;
- (id)balloonViewForAlignment;
- (bool)becomeFirstResponder;
- (id)confirmButton;
- (id)currentComposition;
- (bool)firstLayoutPassCompleted;
- (id)init;
- (id)keyCommands;
- (void)layoutSubviews;
- (id)messageEditingBalloonView;
- (void)messageEditingBalloonViewContentDidChange:(id)arg1;
- (id)messageEditingViewDelegate;
- (long long)messageEditingViewState;
- (id)originalComposition;
- (id)rejectButton;
- (void)resetMessageToOriginalContent;
- (void)setConfirmButton:(id)arg1;
- (void)setMessageEditingBalloonView:(id)arg1;
- (void)setMessageEditingViewDelegate:(id)arg1;
- (void)setMessageEditingViewState:(long long)arg1;
- (void)setOriginalComposition:(id)arg1;
- (void)setRejectButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)styledAttributedStringFromString:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)underlineWithProofreadingInfo:(id)arg1;

@end
