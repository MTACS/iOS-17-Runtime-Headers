
@interface ICAttributedStringRippler : NSObject {
    unsigned long long  _animateFrames;
    NSArray * _colors;
    unsigned long long  _delayFrames;
    UIColor * _endColor;
    UIFont * _initialFont;
    double  _initialFontSize;
    unsigned long long  _postFrames;
    unsigned long long  _preFrames;
    bool  _reduceMotion;
    NSArray * _scales;
    NSArray * _shadowColors;
    double  _startTime;
    NSAttributedString * _string;
}

@property (nonatomic) unsigned long long animateFrames;
@property (nonatomic, copy) NSArray *colors;
@property (nonatomic, readonly) unsigned long long currentTimeIndex;
@property (nonatomic) unsigned long long delayFrames;
@property (nonatomic, retain) UIColor *endColor;
@property (nonatomic, readonly) unsigned long long finishedTimeIndex;
@property (nonatomic, retain) UIFont *initialFont;
@property (nonatomic) double initialFontSize;
@property (nonatomic) unsigned long long postFrames;
@property (nonatomic) unsigned long long preFrames;
@property (nonatomic) bool reduceMotion;
@property (nonatomic, copy) NSArray *scales;
@property (nonatomic, copy) NSArray *shadowColors;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSAttributedString *string;

+ (bool)canAnimateString:(id)arg1;
+ (unsigned long long)framesPerSecond;
+ (double)refreshInterval;

- (void).cxx_destruct;
- (unsigned long long)animateFrames;
- (id)attributedStringForTimeIndex:(unsigned long long)arg1;
- (id)colors;
- (id)currentColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (unsigned long long)currentIndexForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 isFinished:(bool*)arg4;
- (double)currentScaleForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (id)currentShadowColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3;
- (unsigned long long)currentTimeIndex;
- (unsigned long long)delayFrames;
- (id)endColor;
- (bool)finishedForTimeIndex:(unsigned long long)arg1;
- (unsigned long long)finishedTimeIndex;
- (void)generateValues;
- (id)initWithAttributedString:(id)arg1 endColor:(id)arg2;
- (id)initialFont;
- (double)initialFontSize;
- (unsigned long long)postFrames;
- (unsigned long long)preFrames;
- (bool)reduceMotion;
- (id)scales;
- (void)setAnimateFrames:(unsigned long long)arg1;
- (void)setColors:(id)arg1;
- (void)setDelayFrames:(unsigned long long)arg1;
- (void)setEndColor:(id)arg1;
- (void)setInitialFont:(id)arg1;
- (void)setInitialFontSize:(double)arg1;
- (void)setPostFrames:(unsigned long long)arg1;
- (void)setPreFrames:(unsigned long long)arg1;
- (void)setReduceMotion:(bool)arg1;
- (void)setScales:(id)arg1;
- (void)setShadowColors:(id)arg1;
- (void)setStartTime:(double)arg1;
- (void)setString:(id)arg1;
- (id)shadowColors;
- (void)start;
- (double)startTime;
- (id)string;

@end
