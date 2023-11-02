
@interface HMCHIPEcosystem : NSObject <HFHomeKitObject, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSData * _rootPublicKey;
    HMCHIPVendor * _vendor;
}

@property (readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSData *rootPublicKey;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) HMCHIPVendor *vendor;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRootPublicKey:(id)arg1 vendor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)privateDescription;
- (id)rootPublicKey;
- (id)shortDescription;
- (id)vendor;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id /* block */)hf_ecosystemComparator;

- (id)uniqueIdentifier;

@end
