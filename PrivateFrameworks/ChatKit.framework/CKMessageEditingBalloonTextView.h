
@interface CKMessageEditingBalloonTextView : CKMessageEntryTextView <CKBalloonTextViewProtocol> {
    bool  _fakeSelected;
    <CKBalloonTextViewInteractionDelegate> * _interactionDelegate;
    bool  _shouldAdjustInsetsForMinimumSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFakeSelected, nonatomic) bool fakeSelected;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CKBalloonTextViewInteractionDelegate> *interactionDelegate;
@property (nonatomic) bool shouldAdjustInsetsForMinimumSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)interactionDelegate;
- (bool)isFakeSelected;
- (void)setBalloonTextSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setFakeSelected:(bool)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setShouldAdjustInsetsForMinimumSize:(bool)arg1;
- (bool)shouldAdjustInsetsForMinimumSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 isSingleLine:(bool*)arg3 isReplyPreview:(bool)arg4;

@end
