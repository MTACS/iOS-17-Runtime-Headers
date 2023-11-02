
@interface CKWalletItemReplyPreviewBalloonView : CKColoredBalloonView {
    LPLinkView * _linkView;
    CKMediaObject * _mediaObject;
}

@property (nonatomic, retain) LPLinkView *linkView;
@property (nonatomic, retain) CKMediaObject *mediaObject;

- (void).cxx_destruct;
- (void)configureForMessagePart:(id)arg1;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)linkView;
- (id)mediaObject;
- (void)prepareForDisplay;
- (void)setLinkView:(id)arg1;
- (void)setMediaObject:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;

@end
