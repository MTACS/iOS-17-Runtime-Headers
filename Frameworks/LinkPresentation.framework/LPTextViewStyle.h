
@interface LPTextViewStyle : NSObject <NSCopying> {
    UIColor * _color;
    NSString * _compositingFilter;
    LPPointUnit * _firstLineLeading;
    UIFont * _font;
    double  _fontScalingFactor;
    float  _hyphenationFactor;
    LPPointUnit * _lastLineDescent;
    LPGlyphStyle * _leadingGlyph;
    unsigned int  _maximumCharacters;
    unsigned int  _maximumLines;
    unsigned int  _maximumLinesWithMedia;
    LPPadding * _padding;
    LPPointUnit * _paragraphSpacing;
    bool  _shouldScaleMaximumLinesWithDynamicType;
    long long  _textAlignment;
    LPGlyphStyle * _trailingGlyph;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *compositingFilter;
@property (nonatomic, retain) LPPointUnit *firstLineLeading;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) double fontScalingFactor;
@property (nonatomic) float hyphenationFactor;
@property (nonatomic, retain) LPPointUnit *lastLineDescent;
@property (nonatomic, retain) LPGlyphStyle *leadingGlyph;
@property (nonatomic) unsigned int maximumCharacters;
@property (nonatomic) unsigned int maximumLines;
@property (nonatomic) unsigned int maximumLinesWithMedia;
@property (nonatomic, readonly, retain) LPPadding *padding;
@property (nonatomic, retain) LPPointUnit *paragraphSpacing;
@property (nonatomic) bool shouldScaleMaximumLinesWithDynamicType;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) LPGlyphStyle *trailingGlyph;

- (void).cxx_destruct;
- (void)_adjustForString:(id)arg1;
- (id)adjustedForString:(id)arg1;
- (id)color;
- (id)compositingFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)firstLineLeading;
- (id)font;
- (double)fontScalingFactor;
- (float)hyphenationFactor;
- (id)initWithPlatform:(long long)arg1 fontScalingFactor:(double)arg2;
- (id)lastLineDescent;
- (id)leadingGlyph;
- (unsigned int)maximumCharacters;
- (unsigned int)maximumLines;
- (unsigned int)maximumLinesWithMedia;
- (id)padding;
- (id)paragraphSpacing;
- (void)setColor:(id)arg1;
- (void)setCompositingFilter:(id)arg1;
- (void)setFirstLineLeading:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontScalingFactor:(double)arg1;
- (void)setHyphenationFactor:(float)arg1;
- (void)setLastLineDescent:(id)arg1;
- (void)setLeadingGlyph:(id)arg1;
- (void)setMaximumCharacters:(unsigned int)arg1;
- (void)setMaximumLines:(unsigned int)arg1;
- (void)setMaximumLinesWithMedia:(unsigned int)arg1;
- (void)setParagraphSpacing:(id)arg1;
- (void)setShouldScaleMaximumLinesWithDynamicType:(bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTrailingGlyph:(id)arg1;
- (bool)shouldScaleMaximumLinesWithDynamicType;
- (long long)textAlignment;
- (id)trailingGlyph;

@end
