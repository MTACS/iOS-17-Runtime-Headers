
@interface MPUBorderConfiguration : NSObject <NSCopying> {
    double  _borderAlpha;
    UIColor * _borderColor;
    double  _borderWidth;
    double  _dropShadowAlpha;
    UIColor * _dropShadowColor;
    unsigned long long  _dropShadowEdges;
    double  _dropShadowWidth;
    double  _fillAlpha;
    UIColor * _fillColor;
}

@property (nonatomic) double borderAlpha;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double dropShadowAlpha;
@property (nonatomic, retain) UIColor *dropShadowColor;
@property (nonatomic) unsigned long long dropShadowEdges;
@property (nonatomic) double dropShadowWidth;
@property (nonatomic) double fillAlpha;
@property (nonatomic, retain) UIColor *fillColor;
@property (getter=isFullyTransparent, nonatomic, readonly) bool fullyTransparent;

- (void).cxx_destruct;
- (double)borderAlpha;
- (id)borderColor;
- (double)borderWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dropShadowAlpha;
- (id)dropShadowColor;
- (unsigned long long)dropShadowEdges;
- (double)dropShadowWidth;
- (double)fillAlpha;
- (id)fillColor;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isFullyTransparent;
- (void)setBorderAlpha:(double)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setDropShadowAlpha:(double)arg1;
- (void)setDropShadowColor:(id)arg1;
- (void)setDropShadowEdges:(unsigned long long)arg1;
- (void)setDropShadowWidth:(double)arg1;
- (void)setFillAlpha:(double)arg1;
- (void)setFillColor:(id)arg1;

@end