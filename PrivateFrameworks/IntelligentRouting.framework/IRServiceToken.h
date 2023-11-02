
@interface IRServiceToken : NSObject <NSCopying, NSSecureCoding> {
    NSString * _serviceIdentifier;
    long long  _servicePackage;
}

@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) long long servicePackage;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 servicePackage:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)serviceIdentifier;
- (long long)servicePackage;

@end
