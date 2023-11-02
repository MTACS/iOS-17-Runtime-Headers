
@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {
    NSItemProvider * _dragItemProvider;
    CKMediaObject * _mediaObject;
    NSURL * _momentShareURL;
    UITraitCollection * _transcriptTraitCollection;
}

@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, readonly, copy) NSURL *momentShareURL;
@property (nonatomic, readonly, copy) NSString *transferGUID;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_adjustedSizeForSensitiveBlurredViewThatFitsSizeIfNeeded:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_transcoderGeneratedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 sizeExists:(bool*)arg2;
- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;
- (bool)canCopy;
- (bool)canExport;
- (bool)canForward;
- (bool)canInlineReply;
- (bool)canPerformQuickAction;
- (Class)cellClass;
- (id)compositionWithContext:(id)arg1;
- (id)description;
- (id)dragItemProvider;
- (id)fileURLForAttachment;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (bool)isSensitive;
- (bool)isSensitiveAndNotViewable;
- (bool)isSensitiveAndViewable;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)mediaObject;
- (id)momentShareURL;
- (id)rtfDocumentItemsWithFormatString:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMediaObject:(id)arg1;
- (void)setTranscriptTraitCollection:(id)arg1;
- (bool)shouldCacheSize;
- (bool)stickersSnapToPoint;
- (id)transcriptTraitCollection;
- (id)transferGUID;

@end
