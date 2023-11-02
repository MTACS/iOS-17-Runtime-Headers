
@protocol CKBalloonTextViewProtocol <NSObject>

@required

- (<CKBalloonTextViewInteractionDelegate> *)interactionDelegate;
- (bool)isFakeSelected;
- (void)setBalloonTextSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setFakeSelected:(bool)arg1;
- (void)setInteractionDelegate:(id <CKBalloonTextViewInteractionDelegate>)arg1;
- (void)setShouldAdjustInsetsForMinimumSize:(bool)arg1;
- (bool)shouldAdjustInsetsForMinimumSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 isSingleLine:(bool*)arg3 isReplyPreview:(bool)arg4;

@end
