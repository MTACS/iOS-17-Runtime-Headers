
@interface CKMessageEditingBalloonView : CKTextBalloonView <UITextViewDelegate> {
    <CKMessageEditingBalloonViewDelegate> * _editingBalloonViewDelegate;
    CKMessageEditingBalloonTextView * _messageEditingBalloonTextView;
    NSDictionary * _typingAttributes;
}

@property (nonatomic, readonly) NSAttributedString *currentCompositionText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CKMessageEditingBalloonViewDelegate> *editingBalloonViewDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMessageEditingBalloonTextView *messageEditingBalloonTextView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *typingAttributes;

- (void).cxx_destruct;
- (id)currentCompositionText;
- (id)description;
- (id)editingBalloonViewDelegate;
- (bool)hasBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)messageEditingBalloonTextView;
- (void)prepareForReuse;
- (void)setEditingBalloonViewDelegate:(id)arg1;
- (void)setMessageEditingBalloonTextView:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (bool)textViewShouldBeginEditing:(id)arg1;
- (id)typingAttributes;

@end
