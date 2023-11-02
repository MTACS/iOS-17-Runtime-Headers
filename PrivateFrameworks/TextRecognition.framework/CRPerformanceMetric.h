
@interface CRPerformanceMetric : NSObject <NSCopying> {
    double  _M2;
    double  _denominator;
    NSString * _displayName;
    double  _first;
    double  _max;
    double  _min;
    long long  _numSamples;
    unsigned long long  _pcMetricID;
    NSString * _serializationKey;
    double  _sumX;
    NSString * _unit;
    double  _welfordMean;
}

@property double M2;
@property double denominator;
@property (copy) NSString *displayName;
@property double first;
@property double max;
@property double min;
@property long long numSamples;
@property unsigned long long pcMetricID;
@property (copy) NSString *serializationKey;
@property double sumX;
@property (copy) NSString *unit;
@property (readonly) double variance;
@property double welfordMean;

+ (id)metricWithDisplayName:(id)arg1 unit:(id)arg2 denominator:(double)arg3 serializationKey:(id)arg4;
+ (id)pcMetricWithDisplayName:(id)arg1 pcMetricID:(unsigned long long)arg2 unit:(id)arg3 denominator:(double)arg4 serializationKey:(id)arg5;

- (void).cxx_destruct;
- (double)M2;
- (void)addSample:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)denominator;
- (id)dictionary;
- (id)displayName;
- (double)first;
- (id)initWithDictionary:(id)arg1 key:(id)arg2;
- (id)initWithDisplayName:(id)arg1 unit:(id)arg2 denominator:(double)arg3 serializationKey:(id)arg4;
- (double)max;
- (double)mean;
- (void)mergeMetric:(id)arg1;
- (double)min;
- (long long)numSamples;
- (unsigned long long)pcMetricID;
- (id)serializationKey;
- (void)setDenominator:(double)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFirst:(double)arg1;
- (void)setM2:(double)arg1;
- (void)setMax:(double)arg1;
- (void)setMin:(double)arg1;
- (void)setNumSamples:(long long)arg1;
- (void)setPcMetricID:(unsigned long long)arg1;
- (void)setSerializationKey:(id)arg1;
- (void)setSumX:(double)arg1;
- (void)setUnit:(id)arg1;
- (void)setWelfordMean:(double)arg1;
- (double)stdDev;
- (double)sumX;
- (id)unit;
- (double)variance;
- (double)welfordMean;

@end
