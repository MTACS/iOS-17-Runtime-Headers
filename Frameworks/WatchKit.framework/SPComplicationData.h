
@interface SPComplicationData : NSObject <NSSecureCoding> {
    double  _timeToLive;
    NSDate * _timestamp;
}

@property (nonatomic) double timeToLive;
@property (nonatomic, retain) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTimeToLive:(double)arg1;
- (void)setTimestamp:(id)arg1;
- (double)timeToLive;
- (id)timestamp;

@end