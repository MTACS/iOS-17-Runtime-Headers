
@interface CMAPosition : NSObject {
    double  _distance;
    double  _horizontalAngle;
    double  _horizontalAngleAccuracy;
    NSNumber * _horizontalAngleAccuracyNumber;
    NSNumber * _horizontalAngleNumber;
    NSNumber * _horizontalDistanceNumber;
    double  _timestamp;
    long long  convergenceStatus;
    long long  revokeReason;
    long long  verticalState;
}

@property (nonatomic) long long convergenceStatus;
@property (nonatomic) double distance;
@property (nonatomic) double horizontalAngle;
@property (nonatomic) double horizontalAngleAccuracy;
@property (nonatomic) NSNumber *horizontalAngleAccuracyNumber;
@property (nonatomic) NSNumber *horizontalAngleNumber;
@property (nonatomic) NSNumber *horizontalDistanceNumber;
@property (nonatomic) long long revokeReason;
@property (nonatomic) double timestamp;
@property (nonatomic) long long verticalState;

- (long long)convergenceStatus;
- (double)distance;
- (double)horizontalAngle;
- (double)horizontalAngleAccuracy;
- (id)horizontalAngleAccuracyNumber;
- (id)horizontalAngleNumber;
- (id)horizontalDistanceNumber;
- (long long)revokeReason;
- (void)setConvergenceStatus:(long long)arg1;
- (void)setDistance:(double)arg1;
- (void)setHorizontalAngle:(double)arg1;
- (void)setHorizontalAngleAccuracy:(double)arg1;
- (void)setHorizontalAngleAccuracyNumber:(id)arg1;
- (void)setHorizontalAngleNumber:(id)arg1;
- (void)setHorizontalDistanceNumber:(id)arg1;
- (void)setRevokeReason:(long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVerticalState:(long long)arg1;
- (double)timestamp;
- (long long)verticalState;

@end
