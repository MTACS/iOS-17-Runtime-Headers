
@interface TCMPSRandomCropAugmenter : NSObject <TCMPSImageAugmenting> {
    double  _maxAreaFraction;
    double  _maxAspectRatio;
    unsigned long long  _maxAttempts;
    double  _minAreaFraction;
    double  _minAspectRatio;
    double  _minEjectCoverage;
    double  _minObjectCovered;
    double  _skipProbability;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxAreaFraction;
@property (nonatomic) double maxAspectRatio;
@property (nonatomic) unsigned long long maxAttempts;
@property (nonatomic) double minAreaFraction;
@property (nonatomic) double minAspectRatio;
@property (nonatomic) double minEjectCoverage;
@property (nonatomic) double minObjectCovered;
@property (nonatomic) double skipProbability;
@property (readonly) Class superclass;

- (id)applyCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toAnnotations:(id)arg2;
- (id)imageAugmentedFromImage:(id)arg1 generator:(id /* block */)arg2;
- (id)init;
- (double)maxAreaFraction;
- (double)maxAspectRatio;
- (unsigned long long)maxAttempts;
- (double)minAreaFraction;
- (double)minAspectRatio;
- (double)minEjectCoverage;
- (double)minObjectCovered;
- (void)setMaxAreaFraction:(double)arg1;
- (void)setMaxAspectRatio:(double)arg1;
- (void)setMaxAttempts:(unsigned long long)arg1;
- (void)setMinAreaFraction:(double)arg1;
- (void)setMinAspectRatio:(double)arg1;
- (void)setMinEjectCoverage:(double)arg1;
- (void)setMinObjectCovered:(double)arg1;
- (void)setSkipProbability:(double)arg1;
- (double)skipProbability;

@end
