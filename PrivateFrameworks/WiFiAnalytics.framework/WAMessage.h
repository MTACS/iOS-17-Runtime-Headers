
@interface WAMessage : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _metricInfo;
    NSString * _metricName;
    long long  _options;
}

@property (nonatomic, copy) NSMutableDictionary *metricInfo;
@property (nonatomic, copy) NSString *metricName;
@property (nonatomic) long long options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addFieldForKey:(id)arg1 value:(id)arg2 options:(long long)arg3;
- (void)addFieldsForChannelFlagLikeKey:(id)arg1 value:(id)arg2 options:(long long)arg3;
- (void)addFieldsFromDictionary:(id)arg1 options:(long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetricName:(id)arg1 options:(long long)arg2;
- (id)metricInfo;
- (id)metricName;
- (long long)options;
- (void)setMetricInfo:(id)arg1;
- (void)setMetricName:(id)arg1;
- (void)setOptions:(long long)arg1;

@end
