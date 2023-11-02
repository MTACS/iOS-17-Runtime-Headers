
@interface CKTruncatedTextBalloonView : CKHyperlinkBalloonView <NSLayoutManagerDelegate> {
    bool  _avoidTextLineBreaks;
    UIImageView * _chevron;
    bool  _wantsChevron;
}

@property (nonatomic) bool avoidTextLineBreaks;
@property (nonatomic, retain) UIImageView *chevron;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsChevron;

- (void).cxx_destruct;
- (bool)avoidTextLineBreaks;
- (id)chevron;
- (void)configureForMessagePart:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForDisplay;
- (void)setAvoidTextLineBreaks:(bool)arg1;
- (void)setChevron:(id)arg1;
- (void)setWantsChevron:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (bool)wantsChevron;

@end
