
@interface CKReplyContextDeletedMessagePartChatItem : CKReplyContextTextMessagePartChatItem <CKReplyContext>

- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })balloonDescriptor;
- (BOOL)balloonOrientation;
- (BOOL)color;
- (id)contact;
- (id)imReplyContextDeletedMessageChatItem;
- (bool)isFromMe;
- (bool)itemIsReplyContextPreview;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (BOOL)transcriptOrientation;

@end
