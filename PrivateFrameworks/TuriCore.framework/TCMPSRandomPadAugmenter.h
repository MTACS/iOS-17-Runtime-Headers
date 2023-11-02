
@interface TCMPSRandomPadAugmenter : NSObject <TCMPSImageAugmenting> {
    double  _maxAreaFraction;
    double  _maxAspectRatio;
    unsigned long long  _maxAttempts;
    double  _minAreaFraction;
    double  _minAspectRatio;
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
@property (nonatomic) double skipProbability;
@property (readonly) Class superclass;

- (id)imageAugmentedFromImage:(id)arg1 generator:(id /* block */)arg2;
- (id)init;
- (double)maxAreaFraction;
- (double)maxAspectRatio;
- (unsigned long long)maxAttempts;
- (double)minAreaFraction;
- (double)minAspectRatio;
- (void)setMaxAreaFraction:(double)arg1;
- (void)setMaxAspectRatio:(double)arg1;
- (void)setMaxAttempts:(unsigned long long)arg1;
- (void)setMinAreaFraction:(double)arg1;
- (void)setMinAspectRatio:(double)arg1;
- (void)setSkipProbability:(double)arg1;
- (double)skipProbability;

@end
