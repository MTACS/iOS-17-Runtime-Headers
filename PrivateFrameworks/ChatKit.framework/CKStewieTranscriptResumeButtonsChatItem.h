
@interface CKStewieTranscriptResumeButtonsChatItem : CKStampLabelChatItem

- (Class)cellClass;
- (id)chatIdentifier;
- (id)imStewieResumeItem;
- (bool)isEmergency;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (bool)shouldShowStewieTextButton;

@end
