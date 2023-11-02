
@interface CKAttachmentBalloonView : CKImageBalloonView <LPLinkViewDelegate> {
    LPLinkView * _attachmentView;
    CKMediaObject * _mediaObject;
}

@property (nonatomic, retain) LPLinkView *attachmentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (readonly) Class superclass;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } uncroppedSourceFrame;
@property (readonly) UIView *uncroppedSourceView;

+ (id)_linkViewThumbnailFromMediaObject:(id)arg1;
+ (id)linkMetadataFromMediaObject:(id)arg1;

- (void).cxx_destruct;
- (bool)_isFromMe;
- (void)_setProgressWithMediaObject:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)attachmentBalloonViewPreview;
- (id)attachmentView;
- (void)configureForComposition:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)linkViewNeedsResize:(id)arg1;
- (id)mediaObject;
- (id)overlayColor;
- (id)overlayImage;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)richIconDidChange:(id)arg1;
- (void)setAttachmentView:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (void)setOverrideBackgroundColor:(id)arg1;
- (bool)shouldProvideDragPreview;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)transferUpdated:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })uncroppedSourceFrame;
- (id)uncroppedSourceView;

@end
