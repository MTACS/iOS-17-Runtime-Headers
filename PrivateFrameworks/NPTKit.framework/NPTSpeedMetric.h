
@interface NPTSpeedMetric : NSObject <NSCopying, NSSecureCoding> {
    long long  _bytesTransferred;
    NSDate * _pointInTime;
    long long  _responsiveness;
    double  _timeSinceStart;
    long long  _totalBytesExpected;
    double  privateSpeed;
}

@property (nonatomic) long long bytesTransferred;
@property (nonatomic, retain) NSDate *pointInTime;
@property (nonatomic) long long responsiveness;
@property (nonatomic) double timeSinceStart;
@property (nonatomic) long long totalBytesExpected;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)bytesTransferred;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPointInTime:(id)arg1 timeSinceStart:(double)arg2 bytesTransferred:(long long)arg3 totalBytesExpected:(long long)arg4;
- (id)initWithPointInTime:(id)arg1 timeSinceStart:(double)arg2 bytesTransferred:(long long)arg3 totalBytesExpected:(long long)arg4 speed:(double)arg5 responsiveness:(long long)arg6;
- (id)pointInTime;
- (long long)responsiveness;
- (void)setBytesTransferred:(long long)arg1;
- (void)setPointInTime:(id)arg1;
- (void)setResponsiveness:(long long)arg1;
- (void)setTimeSinceStart:(double)arg1;
- (void)setTotalBytesExpected:(long long)arg1;
- (double)speed;
- (double)timeSinceStart;
- (long long)totalBytesExpected;

@end
