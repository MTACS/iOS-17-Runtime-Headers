
@interface PKBundleResourceDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _extension;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *extension;
@property (nonatomic, readonly, copy) NSString *name;

+ (bool)supportsSecureCoding;
+ (id)withName:(id)arg1 extension:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extension;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 extension:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBundleResourceDescriptor:(id)arg1;
- (id)name;

@end
