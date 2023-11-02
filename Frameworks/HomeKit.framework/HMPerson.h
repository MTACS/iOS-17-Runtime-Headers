
@interface HMPerson : NSObject <HFHomeKitObject, HMFObject, NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSUUID * _externalPersonUUID;
    NSString * _name;
    NSSet * _personLinks;
}

@property (readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSUUID *externalPersonUUID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *name;
@property (copy) NSSet *personLinks;
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
- (void)encodeWithCoder:(id)arg1;
- (id)externalPersonUUID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)personLinks;
- (id)privateDescription;
- (void)setExternalPersonUUID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPersonLinks:(id)arg1;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)createHMIPerson;
- (id)initWithHMIPerson:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)createHMIPerson;
- (id)initWithHMIPerson:(id)arg1;

@end
