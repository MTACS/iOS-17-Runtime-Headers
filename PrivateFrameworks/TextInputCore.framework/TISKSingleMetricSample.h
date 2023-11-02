
@interface TISKSingleMetricSample : NSObject <NSSecureCoding> {
    NSMutableArray * _samples;
}

@property (nonatomic, retain) NSMutableArray *samples;

+ (id)makeMetric;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSample:(id)arg1;
- (double)average;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)generateDataForSR:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)merge:(id)arg1;
- (id)samples;
- (void)setSamples:(id)arg1;
- (unsigned long long)size;
- (double)sum;
- (double)variance;

@end
