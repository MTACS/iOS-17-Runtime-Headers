
@interface HMMediaSystemComponent : NSObject <HFStateDumpBuildable, HMFLogging, HMObjectMerge, NSCopying, NSMutableCopying, NSSecureCoding> {
    HMAccessory * _accessory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMMediaProfile * _mediaProfile;
    HMMediaSystemRole * _role;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMMediaProfile *mediaProfile;
@property (nonatomic, readonly) HMMediaSystemRole *role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_unconfigure;
- (void)_updateAccessoryReference:(id)arg1;
- (id)accessory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaProfile:(id)arg1 role:(id)arg2;
- (id)initWithUUID:(id)arg1 mediaProfile:(id)arg2 role:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)mediaProfile;
- (bool)mergeFromNewObject:(id)arg1;
- (bool)mergeRoleWithComponent:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)role;
- (id)serialize;
- (void)setAccessory:(id)arg1;
- (void)setRole:(id)arg1;
- (id)uniqueIdentifier;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
