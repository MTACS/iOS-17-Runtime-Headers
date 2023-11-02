
@interface CKTextReplyPreviewBalloonView : CKTextBalloonView {
    bool  _isFromMe;
    bool  _shouldUseFilledBalloonStyle;
}

@property (nonatomic) bool isFromMe;
@property (nonatomic) bool shouldUseFilledBalloonStyle;

- (void)addFilter:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })balloonDescriptor;
- (void)clearFilters;
- (void)configureForMessagePart:(id)arg1;
- (id)description;
- (bool)hasBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFromMe;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIsFromMe:(bool)arg1;
- (void)setShouldUseFilledBalloonStyle:(bool)arg1;
- (bool)shouldUseFilledBalloonStyle;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 isSingleLine:(bool*)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })targetTextContainerInsets;

@end
