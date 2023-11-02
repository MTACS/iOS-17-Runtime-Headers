
@interface _EMKTextLayoutFragmentView : UIView {
    unsigned long long  _animatingGlyphCount;
    unsigned long long  _animatingGlyphCountBeforeFragment;
    NSTextLayoutFragment * _layoutFragment;
    EMKGlyphRippler * _rippler;
    unsigned long long  _timeIndex;
}

@property (nonatomic) unsigned long long animatingGlyphCount;
@property (nonatomic) unsigned long long animatingGlyphCountBeforeFragment;
@property (nonatomic, retain) NSTextLayoutFragment *layoutFragment;
@property (nonatomic, retain) EMKGlyphRippler *rippler;
@property (nonatomic) unsigned long long timeIndex;

- (void).cxx_destruct;
- (void)___drawAnimatingEmojiGlyph:(unsigned short)arg1 textPosition:(struct CGPoint { double x1; double x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 font:(struct __CTFont { }*)arg4 attributes:(id)arg5;
- (void)__drawAnimatingEmojiRun:(struct __CTRun { }*)arg1 textPosition:(struct CGPoint { double x1; double x2; })arg2 animatingGlyphCountBefore:(long long)arg3 drawnRunGlyphCount:(long long*)arg4;
- (void)_drawTextLineFragment:(id)arg1 animatingGlyphCountBefore:(long long)arg2 drawnGlyphCount:(long long*)arg3;
- (unsigned long long)animatingGlyphCount;
- (unsigned long long)animatingGlyphCountBeforeFragment;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutFragment:(id)arg2;
- (bool)isOpaque;
- (id)layoutFragment;
- (id)rippler;
- (void)setAnimatingGlyphCount:(unsigned long long)arg1;
- (void)setAnimatingGlyphCountBeforeFragment:(unsigned long long)arg1;
- (void)setLayoutFragment:(id)arg1;
- (void)setRippler:(id)arg1;
- (void)setTimeIndex:(unsigned long long)arg1;
- (void)startAnimationWithRippler:(id)arg1 animatingGlyphCount:(unsigned long long)arg2 animatingGlyphCountBefore:(unsigned long long)arg3;
- (unsigned long long)timeIndex;
- (void)updateWithTimeIndex:(unsigned long long)arg1;

@end
