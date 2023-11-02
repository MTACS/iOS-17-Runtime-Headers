
@interface CKMentionsRenderingAttributes : NSObject {
    UIColor * _color;
    double  _scale;
    UIColor * _shadowColor;
}

@property (nonatomic, copy) UIColor *color;
@property (nonatomic) double scale;
@property (nonatomic, copy) UIColor *shadowColor;

+ (id)newWithValuesFromRippler:(id)arg1 timeIndex:(unsigned long long)arg2 glyphIndex:(unsigned long long)arg3 glyphCount:(unsigned long long)arg4;

- (void).cxx_destruct;
- (void)_applyInContext:(struct CGContext { }*)arg1 fontPointSize:(double)arg2 getAdjustedFontSize:(double*)arg3;
- (id)_shadowIfNeededForFontPointSize:(double)arg1;
- (id)color;
- (id)initWithColor:(id)arg1 shadowColor:(id)arg2 scale:(double)arg3;
- (id)initWithValuesFromRippler:(id)arg1 timeIndex:(unsigned long long)arg2 glyphIndex:(unsigned long long)arg3 glyphCount:(unsigned long long)arg4;
- (double)scale;
- (void)setColor:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;

@end
