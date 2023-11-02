
@interface HMDCharacteristicWriteAction : HMDAction <HMDBackingStoreObjectProtocol, NSSecureCoding> {
    NSDictionary * _actionInformation;
    HMDCharacteristic * _characteristic;
    NSString * _dumpState;
    id  _targetValue;
}

@property (nonatomic, readonly) NSDictionary *actionInformation;
@property (nonatomic, readonly) HMDCharacteristic *characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *dumpState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id targetValue;

+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_processWriteActionModelUpdated:(id)arg1 message:(id)arg2;
- (id)actionInformation;
- (id)associatedAccessories;
- (id)attributeDescriptions;
- (id)characteristic;
- (id)dictionaryRepresentation;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)entitlementsForNotification;
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 characteristic:(id)arg2 targetValue:(id)arg3 actionSet:(id)arg4;
- (bool)isActionForCharacteristic:(id)arg1;
- (bool)isAssociatedWithAccessory:(id)arg1;
- (bool)isCompatibleWithAction:(id)arg1;
- (bool)isSecureAction;
- (bool)isUnsecuringAction;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (bool)requiresDeviceUnlock;
- (void)setTargetValue:(id)arg1;
- (id)stateDump;
- (id)targetValue;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (unsigned long long)type;

@end
