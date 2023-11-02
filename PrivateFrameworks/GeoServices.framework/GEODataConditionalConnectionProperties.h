
@interface GEODataConditionalConnectionProperties : NSObject <NSSecureCoding> {
    double  _timeWindowDuration;
    double  _timeWindowStartTime;
    unsigned long long  _workLoad;
}

@property (nonatomic, readonly) double timeWindowDuration;
@property (nonatomic, readonly) double timeWindowStartTime;
@property (nonatomic, readonly) unsigned long long workLoad;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkload:(unsigned long long)arg1 timeWindowDuration:(double)arg2;
- (id)initWithWorkload:(unsigned long long)arg1 timeWindowStartTime:(double)arg2 timeWindowDuration:(double)arg3;
- (double)timeWindowDuration;
- (double)timeWindowStartTime;
- (unsigned long long)workLoad;

@end
