
@interface LNBundleMetadataGeneratorDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _name;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 version:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)version;

@end
