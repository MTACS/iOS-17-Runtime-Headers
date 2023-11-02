
@interface ADDisparityToDepthFitEstimatorParameters : NSObject {
    bool  _constantSlope;
    bool  _errorCalculationOnDisparity;
    unsigned int  _iterations;
    float  _maxDepth;
    float  _minDepth;
    double  _minInlinersRatio;
    unsigned long long  _retainedWorldPointsCapacity;
    float  _retainedWorldPointsConfidenceThreshold;
    unsigned int  _seed;
    bool  _smoothing;
    float  _smoothingWeight;
    double  _threshold;
}

@property (nonatomic) bool constantSlope;
@property (nonatomic) bool errorCalculationOnDisparity;
@property (nonatomic) unsigned int iterations;
@property (nonatomic) float maxDepth;
@property (nonatomic) float minDepth;
@property (nonatomic) double minInlinersRatio;
@property (nonatomic) unsigned long long retainedWorldPointsCapacity;
@property (nonatomic) float retainedWorldPointsConfidenceThreshold;
@property (nonatomic) unsigned int seed;
@property (nonatomic) bool smoothing;
@property (nonatomic) float smoothingWeight;
@property (nonatomic) double threshold;

- (bool)constantSlope;
- (bool)errorCalculationOnDisparity;
- (id)init;
- (unsigned int)iterations;
- (float)maxDepth;
- (float)minDepth;
- (double)minInlinersRatio;
- (unsigned long long)retainedWorldPointsCapacity;
- (float)retainedWorldPointsConfidenceThreshold;
- (unsigned int)seed;
- (void)setConstantSlope:(bool)arg1;
- (void)setErrorCalculationOnDisparity:(bool)arg1;
- (void)setIterations:(unsigned int)arg1;
- (void)setMaxDepth:(float)arg1;
- (void)setMinDepth:(float)arg1;
- (void)setMinInlinersRatio:(double)arg1;
- (void)setRetainedWorldPointsCapacity:(unsigned long long)arg1;
- (void)setRetainedWorldPointsConfidenceThreshold:(float)arg1;
- (void)setSeed:(unsigned int)arg1;
- (void)setSmoothing:(bool)arg1;
- (void)setSmoothingWeight:(float)arg1;
- (void)setThreshold:(double)arg1;
- (bool)smoothing;
- (float)smoothingWeight;
- (double)threshold;

@end
