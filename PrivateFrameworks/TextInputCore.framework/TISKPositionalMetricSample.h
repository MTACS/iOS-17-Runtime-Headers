
@interface TISKPositionalMetricSample : NSObject <NSSecureCoding> {
    NSMutableArray * _positionalMetricSample;
}

@property (nonatomic, retain) NSMutableArray *positionalMetricSample;

+ (id)makeMetric:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSample:(id)arg1 withPosition:(unsigned long long)arg2;
- (id)description:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateDataForSR:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)merge:(id)arg1;
- (id)positionalMetricSample;
- (void)setPositionalMetricSample:(id)arg1;
- (id)singleMetricSample:(unsigned long long)arg1;
- (unsigned long long)size;

@end
