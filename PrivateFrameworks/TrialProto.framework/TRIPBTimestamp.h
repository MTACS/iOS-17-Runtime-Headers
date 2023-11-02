
@interface TRIPBTimestamp : TRIPBMessage

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) int nanos;
@property (nonatomic) long long seconds;
@property (nonatomic) double timeIntervalSince1970;

+ (id)descriptor;

- (id)date;
- (id)initWithDate:(id)arg1;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (void)setDate:(id)arg1;
- (void)setTimeIntervalSince1970:(double)arg1;
- (double)timeIntervalSince1970;

@end
