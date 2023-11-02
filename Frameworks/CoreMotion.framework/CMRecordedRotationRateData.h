
@interface CMRecordedRotationRateData : CMRotationRateData {
    struct { 
        double x; 
        double y; 
        double z; 
    }  _rotationRate;
    double  _startDateValue;
    double  _timestampValue;
}

@property (readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(struct CMGyro200 { float x1; float x2; float x3; float x4; unsigned long long x5; }*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3;
- (struct { double x1; double x2; double x3; })rotationRate;
- (id)startDate;
- (double)timestamp;

@end
