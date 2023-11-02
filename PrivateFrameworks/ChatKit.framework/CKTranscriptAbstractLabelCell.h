
@interface CKTranscriptAbstractLabelCell : CKTranscriptCell {
    bool  _wantsContactImageLayout;
    bool  _wantsOffsetForReplyLine;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) bool wantsContactImageLayout;
@property (nonatomic) bool wantsOffsetForReplyLine;

+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 attributedText:(id)arg2 displayScale:(double)arg3;

- (void)addFilter:(id)arg1;
- (id)attributedText;
- (id)cellView;
- (void)clearFilters;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentAlignmentRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)prepareForReuse;
- (void)setAttributedText:(id)arg1;
- (void)setWantsContactImageLayout:(bool)arg1;
- (void)setWantsOffsetForReplyLine:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)wantsContactImageLayout;
- (bool)wantsDrawerLayout;
- (bool)wantsOffsetForReplyLine;

@end
