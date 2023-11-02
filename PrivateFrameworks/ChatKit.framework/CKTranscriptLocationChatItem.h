
@interface CKTranscriptLocationChatItem : CKAttachmentMessagePartChatItem {
    CKLocationMediaObject * _locationMediaObject;
    NSURL * _locationURL;
}

@property (nonatomic, retain) CKLocationMediaObject *locationMediaObject;
@property (nonatomic, retain) NSURL *locationURL;

- (void).cxx_destruct;
- (Class)balloonViewClass;
- (bool)canCopy;
- (id)dragItemProvider;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)locationMediaObject;
- (id)locationURL;
- (id)mediaObject;
- (void)setLocationMediaObject:(id)arg1;
- (void)setLocationURL:(id)arg1;
- (id)transferGUID;

@end
