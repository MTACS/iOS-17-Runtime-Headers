
@interface HMAction : NSObject <HFHomeKitObject, HFStateDumpBuildable, HMObjectMerge, NSCopying, NSSecureCoding> {
    HMActionSet * _actionSet;
    _HMContext * _context;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (readonly) HMActionSet *actionSet;
@property (getter=isAffectedByEndEvents, readonly) bool affectedByEndEvents;
@property (nonatomic, readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool requiresDeviceUnlock;
@property (readonly) Class superclass;
@property (readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (copy) NSUUID *uuid;
@property (getter=isValid, readonly) bool valid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;
- (bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (void)_unconfigure;
- (id)actionSet;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodeAsProtoBuf;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 home:(id)arg2;
- (id)initWithUUID:(id)arg1;
- (bool)isAffectedByEndEvents;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (bool)isValidWithError:(id*)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (bool)requiresDeviceUnlock;
- (void)setUuid:(id)arg1;
- (unsigned long long)type;
- (id)uniqueIdentifier;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_affectedAccessoryProfiles;
- (id)hf_affectedAccessoryRepresentables;
- (id)hf_affectedCharacteristic;
- (bool)hf_isServiceLikeItemInvolved:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
