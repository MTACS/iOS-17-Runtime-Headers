
@interface ADLineRansacParameters : NSObject {
    bool  _constantSlope;
    bool  _errorByY;
    int  _maxIterations;
    float  _minInlinersRatio;
    unsigned int  _seed;
    float  _threshold;
}

@property (nonatomic) bool constantSlope;
@property (nonatomic) bool errorByY;
@property (nonatomic) int maxIterations;
@property (nonatomic) float minInlinersRatio;
@property (nonatomic) unsigned int seed;
@property (nonatomic) float threshold;

- (bool)constantSlope;
- (bool)errorByY;
- (id)init;
- (int)maxIterations;
- (float)minInlinersRatio;
- (unsigned int)seed;
- (void)setConstantSlope:(bool)arg1;
- (void)setErrorByY:(bool)arg1;
- (void)setMaxIterations:(int)arg1;
- (void)setMinInlinersRatio:(float)arg1;
- (void)setSeed:(unsigned int)arg1;
- (void)setThreshold:(float)arg1;
- (float)threshold;

@end
