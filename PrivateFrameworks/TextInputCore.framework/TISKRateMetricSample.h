
@interface TISKRateMetricSample : NSObject <NSSecureCoding> {
    int  _countFactor;
    double  _durationFactor;
}

@property (nonatomic) int countFactor;
@property (nonatomic) double durationFactor;

+ (id)makeMetric;
+ (bool)supportsSecureCoding;

- (void)addToCounter:(int)arg1;
- (void)addToDuration:(double)arg1;
- (int)countFactor;
- (id)description;
- (double)durationFactor;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)merge:(id)arg1;
- (id)rate;
- (void)setCountFactor:(int)arg1;
- (void)setDurationFactor:(double)arg1;

@end
