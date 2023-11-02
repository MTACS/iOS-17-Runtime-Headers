
@interface MTSDevicePairingEcosystem : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSData * _rootPublicKey;
    NSUUID * _uuid;
    MTSDevicePairingVendor * _vendor;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSData *rootPublicKey;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) MTSDevicePairingVendor *vendor;

+ (id)UUIDFromRootPublicKey:(id)arg1 vendor:(id)arg2;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRootPublicKey:(id)arg1 vendor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (id)rootPublicKey;
- (id)shortDescription;
- (id)uuid;
- (id)vendor;

@end
