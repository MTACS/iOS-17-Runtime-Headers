
@interface ARDirectionalLightEstimate : ARLightEstimate <NSCopying> {
    double  _confidenceRating;
    void _primaryLightDirection;
    double  _primaryLightIntensity;
    struct { 
        float coefficients[9]; 
    }  _sphericalHarmonicIntensity;
    NSData * _sphericalHarmonicsCoefficients;
    double  _timestamp;
}

@property (nonatomic) double confidenceRating;
@property (nonatomic, readonly) void primaryLightDirection;
@property (nonatomic, readonly) double primaryLightIntensity;
@property (nonatomic, readonly, copy) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidenceRating;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirectionalLightEstimate:(id)arg1;
- (id)initWithSphericalHarmonics:(struct { float x1[9]; })arg1 ambientIntensity:(double)arg2 temperature:(double)arg3;
- (id)lightEstimateByApplyingRotation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)primaryLightDirection;
- (double)primaryLightIntensity;
- (void)setConfidenceRating:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (id)sphericalHarmonicsCoefficients;
- (double)timestamp;

@end
