
@interface CKRichLinkReplyPreviewBalloonView : CKColoredBalloonView {
    IMBalloonPluginDataSource * _dataSource;
    LPLinkMetadata * _linkMetadata;
    LPLinkView * _linkView;
}

@property (nonatomic, retain) IMBalloonPluginDataSource *dataSource;
@property (nonatomic, retain) LPLinkMetadata *linkMetadata;
@property (nonatomic, retain) LPLinkView *linkView;

- (void).cxx_destruct;
- (void)configureForTranscriptPlugin:(id)arg1;
- (id)dataSource;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)linkMetadata;
- (id)linkView;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setDataSource:(id)arg1;
- (void)setLinkMetadata:(id)arg1;
- (void)setLinkView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;

@end
