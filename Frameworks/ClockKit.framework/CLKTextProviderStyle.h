
@interface CLKTextProviderStyle : NSObject <NSCopying> {
    CLKFont * _font;
    double  _minimumScaleFactor;
    CLKFont * _monospacedDigitsFont;
    NSDictionary * _otherAttributes;
    bool  _shouldEmbedTintColors;
    bool  _shouldStyleForTritium;
    CLKFont * _smallCapsBaseFont;
    bool  _uppercase;
}

@property (nonatomic, retain) CLKFont *font;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic, retain) CLKFont *monospacedDigitsFont;
@property (nonatomic, retain) NSDictionary *otherAttributes;
@property (nonatomic) bool shouldEmbedTintColors;
@property (nonatomic) bool shouldStyleForTritium;
@property (nonatomic, retain) CLKFont *smallCapsBaseFont;
@property (nonatomic) bool uppercase;

+ (id)otherAttributesWithParagraphStyle:(id)arg1;
+ (id)otherAttributesWithParagraphStyle:(id)arg1 kerning:(double)arg2;
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(bool)arg3 otherAttributes:(id)arg4;
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(bool)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5;
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(bool)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5 shouldEmbedTintColor:(bool)arg6;
+ (id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(bool)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5 shouldEmbedTintColor:(bool)arg6 shouldStyleForTritium:(bool)arg7;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)font;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)minimumScaleFactor;
- (id)monospacedDigitsFont;
- (id)otherAttributes;
- (void)setFont:(id)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setMonospacedDigitsFont:(id)arg1;
- (void)setOtherAttributes:(id)arg1;
- (void)setShouldEmbedTintColors:(bool)arg1;
- (void)setShouldStyleForTritium:(bool)arg1;
- (void)setSmallCapsBaseFont:(id)arg1;
- (void)setUppercase:(bool)arg1;
- (bool)shouldEmbedTintColors;
- (bool)shouldStyleForTritium;
- (id)smallCapsBaseFont;
- (bool)uppercase;

@end
