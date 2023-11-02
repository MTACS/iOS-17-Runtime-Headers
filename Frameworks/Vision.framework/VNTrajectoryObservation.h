
@interface VNTrajectoryObservation : VNObservation {
    NSArray * _detectedPoints;
    void _equationCoefficients;
    double  _movingAverageRadius;
    NSArray * _projectedPoints;
    NSUUID * _requestUUID;
}

@property (nonatomic, readonly, copy) NSArray *detectedPoints;
@property (nonatomic, readonly) void equationCoefficients;
@property (nonatomic, readonly) double movingAverageRadius;
@property (nonatomic, readonly, copy) NSArray *projectedPoints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)detectedPoints;
- (id)detectedPointsInTopLeftOrigin:(bool)arg1 orientation:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)equationCoefficients;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)movingAverageRadius;
- (id)projectedPoints;
- (id)projectedPointsInTopLeftOrigin:(bool)arg1 orientation:(unsigned int)arg2;
- (id)vn_cloneObject;

@end
