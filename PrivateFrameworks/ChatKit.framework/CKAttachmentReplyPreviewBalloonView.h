
@interface CKAttachmentReplyPreviewBalloonView : CKColoredBalloonView {
    CKMediaObject * _mediaObject;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)attachmentTitleForMediaObject:(id)arg1;
- (void)configureForComposition:(id)arg1;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)configureForMessagePart:(id)arg1;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)mediaObject;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setMediaObject:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)titleLabel;

@end
