
@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding> {
    NSString * _modelIdentifier;
    long long  _productClass;
    long long  _productColor;
    long long  _productPlatform;
    long long  _productVariant;
    HMFSoftwareVersion * _softwareVersion;
}

@property (nonatomic, readonly) NSString *modelIdentifier;
@property (readonly) long long productClass;
@property (nonatomic, readonly) long long productColor;
@property (readonly) long long productPlatform;
@property (readonly) long long productVariant;
@property (nonatomic, readonly) HMFSoftwareVersion *softwareVersion;

+ (id)decodeSoftwareVersionWithCoder:(id)arg1;
+ (void)encodeSoftwareVersion:(id)arg1 withCoder:(id)arg2;
+ (id)productInfo;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 softwareVersion:(id)arg3;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 softwareVersion:(id)arg3 modelIdentifier:(id)arg4;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 variant:(long long)arg3 softwareVersion:(id)arg4;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 variant:(long long)arg3 softwareVersion:(id)arg4 color:(long long)arg5;
- (id)initWithPlatform:(long long)arg1 class:(long long)arg2 variant:(long long)arg3 softwareVersion:(id)arg4 color:(long long)arg5 modelIdentifier:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)modelIdentifier;
- (id)privateDescription;
- (long long)productClass;
- (long long)productColor;
- (long long)productPlatform;
- (long long)productVariant;
- (id)shortDescription;
- (id)softwareVersion;

@end
