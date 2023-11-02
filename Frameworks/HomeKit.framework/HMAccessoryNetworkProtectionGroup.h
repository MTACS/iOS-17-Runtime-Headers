
@interface HMAccessoryNetworkProtectionGroup : NSObject <HFHomeKitObject, HMFObject, HMObjectMerge, NSSecureCoding> {
    HMAccessoryCategory * _category;
    HMHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _manufacturer;
    long long  _targetProtectionMode;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (readonly, copy) NSArray *accessories;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (retain) HMAccessoryCategory *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hf_displayCurrentProtectionMode;
@property (nonatomic, readonly) HMHome *hf_home;
@property (nonatomic, readonly) NSArray *hf_networkConfigurationProfiles;
@property (nonatomic, readonly, copy) NSString *hf_title;
@property HMHome *home;
@property (copy) NSString *manufacturer;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property long long targetProtectionMode;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configureWithHome:(id)arg1;
- (id)accessories;
- (id)attributeDescriptions;
- (id)category;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 protectionMode:(long long)arg4;
- (id)manufacturer;
- (bool)mergeFromNewObject:(id)arg1;
- (id)privateDescription;
- (void)setCategory:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setTargetProtectionMode:(long long)arg1;
- (id)shortDescription;
- (long long)targetProtectionMode;
- (id)uniqueIdentifier;
- (void)updateProtectionMode:(long long)arg1 completion:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_updateProtectionMode:(long long)arg1 forGroups:(id)arg2;

- (long long)hf_displayCurrentProtectionMode;
- (id)hf_home;
- (id)hf_networkConfigurationProfiles;
- (id)hf_title;
- (id)hf_updateProtectionMode:(long long)arg1;

@end
