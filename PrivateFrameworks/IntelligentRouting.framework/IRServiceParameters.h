
@interface IRServiceParameters : NSObject <NSCopying, NSSecureCoding> {
    long long  _servicePackage;
}

@property (nonatomic, readonly) long long servicePackage;

+ (bool)isServicePackageSupported:(long long)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithServicePackage:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)servicePackage;

@end
