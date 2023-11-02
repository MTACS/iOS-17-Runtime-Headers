
@interface VKCGlowParameters : NSObject {
    double  _blurRadius;
    double  _maxOpacity;
    double  _maxThickness;
    double  _minOpacity;
    double  _minThickness;
    unsigned long long  _strokeCount;
    double  _strokeLengthFraction;
    double  _strokeTaperLength;
}

@property (nonatomic) double blurRadius;
@property (nonatomic) double maxOpacity;
@property (nonatomic) double maxThickness;
@property (nonatomic) double minOpacity;
@property (nonatomic) double minThickness;
@property (nonatomic) unsigned long long strokeCount;
@property (nonatomic) double strokeLengthFraction;
@property (nonatomic) double strokeTaperLength;

- (double)blurRadius;
- (double)maxOpacity;
- (double)maxThickness;
- (double)minOpacity;
- (double)minThickness;
- (void)setBlurRadius:(double)arg1;
- (void)setMaxOpacity:(double)arg1;
- (void)setMaxThickness:(double)arg1;
- (void)setMinOpacity:(double)arg1;
- (void)setMinThickness:(double)arg1;
- (void)setStrokeCount:(unsigned long long)arg1;
- (void)setStrokeLengthFraction:(double)arg1;
- (void)setStrokeTaperLength:(double)arg1;
- (unsigned long long)strokeCount;
- (double)strokeLengthFraction;
- (double)strokeTaperLength;

@end
