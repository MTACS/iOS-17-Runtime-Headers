
@interface CKExclamationAcknowledgmentGlyphView : CKAcknowledgmentGlyphView {
    CKAcknowledgmentGlyphImageView * _leftExclamationGlyph;
    CKAcknowledgmentGlyphImageView * _rightExclamationGlyph;
}

@property (nonatomic, retain) CKAcknowledgmentGlyphImageView *leftExclamationGlyph;
@property (nonatomic, retain) CKAcknowledgmentGlyphImageView *rightExclamationGlyph;

- (void).cxx_destruct;
- (long long)acknowledgmentType;
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(id /* block */)arg3;
- (double)animationDuration;
- (struct CGPoint { double x1; double x2; })glyphOffset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(BOOL)arg2;
- (void)layoutSubviews;
- (id)leftExclamationGlyph;
- (id)rightExclamationGlyph;
- (void)setGlyphColor:(id)arg1;
- (void)setLeftExclamationGlyph:(id)arg1;
- (void)setRightExclamationGlyph:(id)arg1;

@end
