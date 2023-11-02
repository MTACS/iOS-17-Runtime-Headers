
@interface ARInertialState : NSObject <ARDaemonSecureCoding> {
    void _accelerometerBias;
    double  _covarianceMatrix;
    void _gyroscopeBias;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _orientation;
    void _position;
    void _velocity;
}

@property (nonatomic) void accelerometerBias;
@property (nonatomic, readonly) double*covarianceMatrix;
@property (nonatomic) void gyroscopeBias;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } orientation;
@property (nonatomic) void position;
@property (nonatomic) void velocity;

+ (bool)supportsSecureCoding;

- (void)accelerometerBias;
- (double*)covarianceMatrix;
- (void)encodeWithCoder:(id)arg1;
- (void)gyroscopeBias;
- (id)initWithCoder:(id)arg1;
- (id)initWithCovarianceMatrix:(double*)arg1;
- (bool)isEqual:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })orientation;
- (void)position;
- (void)setAccelerometerBias;
- (void)setGyroscopeBias;
- (void)setOrientation:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setPosition;
- (void)setVelocity;
- (void)velocity;

@end
