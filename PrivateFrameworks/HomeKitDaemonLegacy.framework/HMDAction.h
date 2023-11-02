
@interface HMDAction : HMFObject <HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging, NSSecureCoding> {
    HMDActionSet * _actionSet;
    NSUUID * _uuid;
}

@property (nonatomic) HMDActionSet *actionSet;
@property (readonly, copy) NSArray *associatedAccessories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long entitlementsForNotification;
@property (readonly) unsigned long long hash;
@property (readonly) bool isUnsecuringAction;
@property (readonly) Class modelClass;
@property (nonatomic, readonly, copy) NSUUID *modelIdentifier;
@property (nonatomic, readonly, copy) NSUUID *modelParentIdentifier;
@property (readonly) bool requiresDeviceUnlock;
@property (nonatomic, readonly) NSString *stateDump;
@property (readonly) Class superclass;
@property (readonly) unsigned long long type;
@property (nonatomic, copy) NSUUID *uuid;

+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionSet;
- (id)associatedAccessories;
- (id)attributeDescriptions;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (void)configureWithHome:(id)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)entitlementsForNotification;
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 actionSet:(id)arg2;
- (bool)isAssociatedWithAccessory:(id)arg1;
- (bool)isCompatibleWithAction:(id)arg1;
- (bool)isUnsecuringAction;
- (id)logIdentifier;
- (id)modelBackedObjects;
- (Class)modelClass;
- (id)modelIdentifier;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelParentIdentifier;
- (bool)requiresDeviceUnlock;
- (void)setActionSet:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)stateDump;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (unsigned long long)type;
- (void)updateActionSetIfNil:(id)arg1;
- (id)uuid;

@end
