
@interface HMCHIPHome : NSObject <HFHomeKitObject, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _UUID;
    HMCHIPEcosystem * _ecosystem;
    NSNumber * _identifier;
    NSNumber * _index;
    NSString * _name;
}

@property (readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMCHIPEcosystem *ecosystem;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSNumber *identifier;
@property (readonly, copy) NSNumber *index;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)ecosystem;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)index;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 index:(id)arg2 name:(id)arg3 ecosystem:(id)arg4;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 ecosystem:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)uniqueIdentifier;

@end
