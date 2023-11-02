
@interface CTGlyphStorageInterface : NSObject {
    long long * _absorbedCounts;
    struct CGSize { double x1; double x2; } * _advances;
    long long  _glyphCount;
    unsigned short * _glyphs;
    struct CGPoint { double x1; double x2; } * _origins;
    unsigned int * _props;
    long long * _stringIndexes;
}

- (struct __CTGlyphStorage { }*)createCopy:(struct { long long x1; long long x2; })arg1;
- (void)disposeGlyphStack;
- (void)getCustomAdvance:(struct CGSize { double x1; double x2; }*)arg1 forIndex:(long long)arg2;
- (void)initGlyphStack:(long long)arg1;
- (void)insertGlyphs:(struct { long long x1; long long x2; })arg1;
- (void)moveGlyphsTo:(long long)arg1 from:(struct { long long x1; long long x2; })arg2;
- (void)popGlyph:(long long)arg1;
- (void)pushGlyph:(long long)arg1;
- (void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize { double x1; double x2; })arg1 forIndex:(long long)arg2;
- (void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 forIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 forIndex:(long long)arg2;
- (void)swapGlyph:(long long)arg1 withIndex:(long long)arg2;

@end