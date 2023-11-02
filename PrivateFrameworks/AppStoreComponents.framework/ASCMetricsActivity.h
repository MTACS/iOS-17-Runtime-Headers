
@interface ASCMetricsActivity : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _fields;
}

@property (nonatomic, readonly, copy) NSDictionary *fields;

+ (id)defaultFields;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fields;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFields:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)metricsActivityByMergingFields:(id)arg1 uniquingFieldsWithBlock:(id /* block */)arg2;
- (id)metricsActivityByRemovingValueForKey:(id)arg1;
- (id)metricsActivityWithValue:(id)arg1 forKey:(id)arg2;

@end
