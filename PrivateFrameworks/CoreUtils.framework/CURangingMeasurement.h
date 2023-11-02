
@interface CURangingMeasurement : NSObject <NSSecureCoding> {
    double  _distanceError;
    double  _distanceMeters;
    NSError * _error;
    unsigned int  _flags;
    double  _horizontalAngle;
    double  _horizontalError;
    NSString * _identifier;
    double  _ptsScore;
    unsigned long long  _timestampTicks;
    double  _verticalAngle;
    double  _verticalError;
}

@property (nonatomic) double distanceError;
@property (nonatomic) double distanceMeters;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) unsigned int flags;
@property (nonatomic) double horizontalAngle;
@property (nonatomic) double horizontalError;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) double ptsScore;
@property (nonatomic) unsigned long long timestampTicks;
@property (nonatomic) double verticalAngle;
@property (nonatomic) double verticalError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (double)distanceError;
- (double)distanceMeters;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned int)flags;
- (double)horizontalAngle;
- (double)horizontalError;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (double)ptsScore;
- (void)setDistanceError:(double)arg1;
- (void)setDistanceMeters:(double)arg1;
- (void)setError:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHorizontalAngle:(double)arg1;
- (void)setHorizontalError:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPtsScore:(double)arg1;
- (void)setTimestampTicks:(unsigned long long)arg1;
- (void)setVerticalAngle:(double)arg1;
- (void)setVerticalError:(double)arg1;
- (unsigned long long)timestampTicks;
- (double)verticalAngle;
- (double)verticalError;

@end