
@interface PPSEvent : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _groupId;
    NSMutableDictionary * _metrics;
    double  _monotonicTimestamp;
    double  _timeOffset;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionary;
@property (readonly) double epochTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *metricKeys;
@property (readonly, copy) NSDictionary *metricKeysAndValues;
@property (readonly, copy) NSArray *metricValues;
@property (copy) NSMutableDictionary *metrics;
@property (readonly) double monotonicTimestamp;
@property (readonly) double timeOffset;

+ (id)eventWithMonotonicTimestamp:(double)arg1 timeOffset:(double)arg2 andDictionary:(id)arg3;
+ (id)eventWithMonotonicTimestamp:(double)arg1 timeOffset:(double)arg2 andValues:(id)arg3 forKeys:(id)arg4;
+ (id)eventWithMonotonicTimestamp:(double)arg1 timeOffset:(double)arg2 dictionary:(id)arg3 groupId:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)debugDescription;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (double)epochTimestamp;
- (unsigned long long)groupId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (id)initWithMonotonicTimestamp:(double)arg1 timeOffset:(double)arg2 andDictionary:(id)arg3;
- (id)initWithMonotonicTimestamp:(double)arg1 timeOffset:(double)arg2 andValues:(id)arg3 forKeys:(id)arg4;
- (id)initWithMonotonicTimestamp:(double)arg1 timeOffset:(double)arg2 dictionary:(id)arg3 groupId:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEvent:(id)arg1;
- (id)metricKeys;
- (id)metricKeysAndValues;
- (id)metricValueForKey:(id)arg1;
- (id)metricValues;
- (id)metricValuesForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)metrics;
- (double)monotonicTimestamp;
- (void)setMetrics:(id)arg1;
- (double)timeOffset;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
