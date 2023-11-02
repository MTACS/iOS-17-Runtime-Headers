
@interface HMDUserManagementOperationModel : HMDBackingStoreModelObject

@property (nonatomic, retain) HMFPairingIdentity *accessoryPairingIdentity;
@property (nonatomic, retain) NSArray *dependencies;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSNumber *operationType;
@property (nonatomic, retain) HAPPairingIdentity *ownerPairingIdentity;
@property (nonatomic, retain) HAPPairingIdentity *userPairingIdentity;

+ (id)properties;

- (id)dependentUUIDs;

@end
