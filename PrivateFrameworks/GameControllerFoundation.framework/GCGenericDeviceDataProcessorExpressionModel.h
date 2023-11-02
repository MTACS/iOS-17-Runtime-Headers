
@interface GCGenericDeviceDataProcessorExpressionModel : NSObject <NSCopying, NSSecureCoding>

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)arg1 error:(out id*)arg2;
- (id /* block */)buildPullExpressionWithOverrideBuilder:(id /* block */)arg1 error:(out id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
