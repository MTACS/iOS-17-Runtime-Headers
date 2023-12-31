
@interface EMKGlyphRippler : NSObject {
    unsigned long long  _animateFrames;
    NSArray * _colors;
    bool  _darkMode;
    NSArray * _darkModeColors;
    NSArray * _darkModeShadowColors;
    unsigned long long  _delayFrames;
    NSArray * _offsets;
    unsigned long long  _postFrames;
    unsigned long long  _preFrames;
    bool  _reduceMotion;
    NSArray * _scales;
    NSArray * _shadowColors;
    double  _startTime;
}

- (void).cxx_destruct;
- (id)currentColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (unsigned long long)currentIndexForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 isFinished:(bool*)arg4;
- (struct CGSize { double x1; double x2; })currentOffsetForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (double)currentScaleForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (id)currentShadowColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (unsigned long long)currentTimeIndex;
- (bool)finishedForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (void)generateValues;
- (id)init;
- (void)setDelayFrames:(unsigned long long)arg1;
- (void)setPostFrames:(unsigned long long)arg1;
- (void)setPreFrames:(unsigned long long)arg1;
- (void)start;
- (void)startWithDarkMode:(bool)arg1;

@end
