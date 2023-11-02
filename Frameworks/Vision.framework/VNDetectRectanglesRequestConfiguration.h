
@interface VNDetectRectanglesRequestConfiguration : VNImageBasedRequestConfiguration {
    float  _maximumAspectRatio;
    unsigned long long  _maximumObservations;
    float  _minimumAspectRatio;
    float  _minimumConfidence;
    float  _minimumSize;
    float  _quadratureTolerance;
    unsigned long long  _requiredVersion;
}

@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) unsigned long long maximumObservations;
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) float minimumSize;
@property (nonatomic) float quadratureTolerance;
@property (nonatomic) unsigned long long requiredVersion;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (float)maximumAspectRatio;
- (unsigned long long)maximumObservations;
- (float)minimumAspectRatio;
- (float)minimumConfidence;
- (float)minimumSize;
- (float)quadratureTolerance;
- (unsigned long long)requiredVersion;
- (void)setMaximumAspectRatio:(float)arg1;
- (void)setMaximumObservations:(unsigned long long)arg1;
- (void)setMinimumAspectRatio:(float)arg1;
- (void)setMinimumConfidence:(float)arg1;
- (void)setMinimumSize:(float)arg1;
- (void)setQuadratureTolerance:(float)arg1;
- (void)setRequiredVersion:(unsigned long long)arg1;

@end
