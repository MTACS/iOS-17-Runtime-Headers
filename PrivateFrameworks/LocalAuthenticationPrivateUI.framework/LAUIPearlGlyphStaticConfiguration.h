
@interface LAUIPearlGlyphStaticConfiguration : NSObject {
    double  _checkmarkThicknessScale;
    long long  _initialStyle;
    double  _lineThicknessScale;
    long long  _pathStyle;
}

@property (nonatomic) double checkmarkThicknessScale;
@property (nonatomic) long long initialStyle;
@property (nonatomic) double lineThicknessScale;
@property (nonatomic) long long pathStyle;

+ (id)createDefaultConfiguration;
+ (id)createSystemApertureConfiguration;

- (double)checkmarkThicknessScale;
- (id)init;
- (long long)initialStyle;
- (double)lineThicknessScale;
- (long long)pathStyle;
- (void)setCheckmarkThicknessScale:(double)arg1;
- (void)setInitialStyle:(long long)arg1;
- (void)setLineThicknessScale:(double)arg1;
- (void)setPathStyle:(long long)arg1;

@end
