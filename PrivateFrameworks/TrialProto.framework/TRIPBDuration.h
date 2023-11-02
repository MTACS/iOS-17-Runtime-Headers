
@interface TRIPBDuration : TRIPBMessage

@property (nonatomic) int nanos;
@property (nonatomic) long long seconds;
@property (nonatomic) double timeInterval;
@property (nonatomic) double timeIntervalSince1970;

+ (id)descriptor;

- (id)initWithTimeInterval:(double)arg1;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)setTimeIntervalSince1970:(double)arg1;
- (double)timeInterval;
- (double)timeIntervalSince1970;

@end
