
@interface HMDMutableHomeData : HMDHomeData <NSCopying, NSMutableCopying>

@property (nonatomic, copy) NSArray *UUIDsOfRemovedHomes;
@property (nonatomic) bool accessAllowedWhenLocked;
@property (nonatomic, copy) NSArray *accessories;
@property (nonatomic, retain) HMDAccount *account;
@property (nonatomic, copy) HMDApplicationData *applicationData;
@property (nonatomic, copy) NSArray *cloudZones;
@property (nonatomic, copy) NSString *currentDevice;
@property (nonatomic, copy) NSUUID *dataTag;
@property (nonatomic) long long dataVersion;
@property (nonatomic, copy) NSDictionary *demoAccessories;
@property (nonatomic) bool demoFinalized;
@property (nonatomic, copy) NSArray *homes;
@property (nonatomic, copy) NSArray *incomingInvitations;
@property (nonatomic, copy) NSUUID *lastCurrentHomeUUID;
@property (nonatomic, copy) NSArray *pendingReasonSaved;
@property (nonatomic, copy) NSArray *pendingUserManagementOperations;
@property (nonatomic, copy) HMDAccountHandle *primaryAccountHandle;
@property (nonatomic, copy) NSUUID *primaryHomeUUID;
@property (nonatomic) long long recoveryVersion;
@property (nonatomic, copy) NSArray *remoteAccounts;
@property (nonatomic) long long residentEnabledState;
@property (nonatomic) long long schemaVersion;
@property (nonatomic, copy) NSArray *unprocessedOperationIdentifiers;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
