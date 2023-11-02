
@interface HMCharacteristicWriteAction : HMAction {
    HMCharacteristic * _characteristic;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <NSCopying> * _targetValue;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, readonly, copy) <NSCopying> *targetValue;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)actionWithProtoBuf:(id)arg1 home:(id)arg2;
+ (id)allowedTargetValueClassesForShortcuts;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;
- (bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (id)characteristic;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodeAsProtoBuf;
- (id)init;
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 home:(id)arg2;
- (id)initWithUUID:(id)arg1;
- (bool)isAffectedByEndEvents;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfAllowedTargetValueClass:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (bool)requiresDeviceUnlock;
- (id)targetValue;
- (unsigned long long)type;
- (void)updateTargetValue:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_affectedAccessoryProfiles;
- (id)hf_affectedAccessoryRepresentables;
- (id)hf_affectedCharacteristic;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
