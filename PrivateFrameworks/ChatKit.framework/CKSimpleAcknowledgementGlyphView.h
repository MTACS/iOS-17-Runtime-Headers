
@interface CKSimpleAcknowledgementGlyphView : CKAcknowledgmentGlyphView {
    CKAcknowledgmentGlyphImageView * _glyph;
}

@property (nonatomic, retain) CKAcknowledgmentGlyphImageView *glyph;

- (void).cxx_destruct;
- (double)animationDuration;
- (id)glyph;
- (id)glyphImageForType:(long long)arg1 color:(BOOL)arg2;
- (struct CGPoint { double x1; double x2; })glyphOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setGlyph:(id)arg1;
- (void)setGlyphColor:(id)arg1;

@end
