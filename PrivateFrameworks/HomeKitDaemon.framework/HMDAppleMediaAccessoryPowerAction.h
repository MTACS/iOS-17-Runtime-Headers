
@interface HMDAppleMediaAccessoryPowerAction : HMDAction <HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, NSSecureCoding> {
    HMDAppleMediaAccessory * _accessory;
    unsigned long long  _targetSleepWakeState;
}

@property (nonatomic) HMDAppleMediaAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class modelClass;
@property (nonatomic, readonly, copy) NSUUID *modelIdentifier;
@property (nonatomic, readonly, copy) NSUUID *modelParentIdentifier;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long targetSleepWakeState;

+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessory;
- (id)associatedAccessories;
- (id)attributeDescriptions;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 targetSleepWakeState:(unsigned long long)arg3 actionSet:(id)arg4;
- (bool)isAssociatedWithAccessory:(id)arg1;
- (bool)isCompatibleWithAction:(id)arg1;
- (bool)isStaleWithAccessory:(id)arg1;
- (bool)isUnsecuringAction;
- (Class)modelClass;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (bool)requiresDeviceUnlock;
- (void)setAccessory:(id)arg1;
- (void)setTargetSleepWakeState:(unsigned long long)arg1;
- (id)stateDump;
- (unsigned long long)targetSleepWakeState;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (unsigned long long)type;

@end
