
@interface CKReplyContextAggregateAttachmentMessagePartChatItem : CKAggregateAttachmentMessagePartChatItem <CKReplyContext>

- (Class)balloonViewClass;
- (bool)canForward;
- (Class)cellClass;
- (bool)isReplyContextPreview;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptDrawerText;
- (bool)replyIsFromMe;

@end
