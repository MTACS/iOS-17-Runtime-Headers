
@interface ASCMetricsData : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _excludingFields;
    NSDictionary * _fields;
    NSSet * _includingFields;
    bool  _shouldFlush;
    NSString * _topic;
}

@property (nonatomic, readonly, copy) NSSet *excludingFields;
@property (nonatomic, readonly, copy) NSDictionary *fields;
@property (nonatomic, readonly, copy) NSSet *includingFields;
@property (nonatomic, readonly) bool shouldFlush;
@property (nonatomic, readonly, copy) NSString *topic;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)excludingFields;
- (id)fields;
- (unsigned long long)hash;
- (id)includingFields;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopic:(id)arg1 shouldFlush:(bool)arg2 fields:(id)arg3 includingFields:(id)arg4 excludingFields:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)metricsDataByMergingFields:(id)arg1 uniquingFieldsWithBlock:(id /* block */)arg2;
- (bool)shouldFlush;
- (id)topic;

@end
