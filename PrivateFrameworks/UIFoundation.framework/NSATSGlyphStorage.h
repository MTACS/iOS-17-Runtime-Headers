
@interface NSATSGlyphStorage : CTGlyphStorageInterface {
    long long  _bufferSize;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    struct __CFSet { } * _children;
    struct { 
        unsigned int _hasNonNominalGlyph : 1; 
        unsigned int _hasPositionalStake : 1; 
        unsigned int _hasBidiRun : 1; 
        unsigned int _isEllipsisStorage : 1; 
        unsigned int _hasNonNominalStringIndexes : 1; 
        unsigned int _isUnordered : 1; 
        unsigned int _hasTotalAbsorbedCount : 1; 
        unsigned int _reserved : 25; 
    }  _gFlags;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _glyphRange;
    struct __CTGlyphStorage { } * _glyphStorage;
    const struct { id x1; id x2; long long x3; long long x4; double x5; double x6; double x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 1; unsigned int x_10_1_5 : 1; unsigned int x_10_1_6 : 1; unsigned int x_10_1_7 : 1; unsigned int x_10_1_8 : 1; unsigned int x_10_1_9 : 24; } x10; } * _lastElasticRun;
    long long  _lastElasticRunLocation;
    struct __CFArray { } * _masterRuns;
    long long  _numRuns;
    long long  _paraEndElasticCharIndex;
    double  _paraEndElasticCharWidth;
    NSATSGlyphStorage * _parent;
    long long  _runBufferSize;
    struct { id x1; id x2; long long x3; long long x4; double x5; double x6; double x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 1; unsigned int x_10_1_4 : 1; unsigned int x_10_1_5 : 1; unsigned int x_10_1_6 : 1; unsigned int x_10_1_7 : 1; unsigned int x_10_1_8 : 1; unsigned int x_10_1_9 : 24; } x10; } * _runs;
    struct { long long x1; struct { unsigned short x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; long long x_2_1_5; } x2[0]; } * _stack;
    NSString * _textString;
    long long  _totalAbsorbedCount;
    NSATSTypesetter * _typesetter;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (struct __CTGlyphStorage { }*)createCopy:(struct { long long x1; long long x2; })arg1;
- (void)dealloc;
- (void)disposeGlyphStack;
- (void)finalize;
- (void)getCustomAdvance:(struct CGSize { double x1; double x2; }*)arg1 forIndex:(long long)arg2;
- (void)initGlyphStack:(long long)arg1;
- (void)insertGlyphs:(struct { long long x1; long long x2; })arg1;
- (void)moveGlyphsTo:(long long)arg1 from:(struct { long long x1; long long x2; })arg2;
- (void)popGlyph:(long long)arg1;
- (void)pushGlyph:(long long)arg1;
- (oneway void)release;
- (void)setAbsorbedCount:(long long)arg1 forIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize { double x1; double x2; })arg1 forIndex:(long long)arg2;
- (void)setGlyphID:(unsigned short)arg1 forIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 forIndex:(long long)arg2;
- (void)setStringIndex:(long long)arg1 forIndex:(long long)arg2;
- (void)swapGlyph:(long long)arg1 withIndex:(long long)arg2;

@end
