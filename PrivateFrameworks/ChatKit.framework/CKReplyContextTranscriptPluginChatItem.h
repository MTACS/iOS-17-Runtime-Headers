
@interface CKReplyContextTranscriptPluginChatItem : CKMessagePartChatItem <CKReplyContext> {
    LPLinkMetadata * _linkMetadata;
}

@property (nonatomic, readonly) LPLinkMetadata *linkMetadata;

- (void).cxx_destruct;
- (id)_imChatItem;
- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })balloonDescriptor;
- (Class)balloonViewClass;
- (BOOL)color;
- (void)configureBalloonView:(id)arg1;
- (id)description;
- (bool)isReplyContextPreview;
- (id)linkMetadata;
- (id)mediaObject;
- (bool)replyIsFromMe;

@end
