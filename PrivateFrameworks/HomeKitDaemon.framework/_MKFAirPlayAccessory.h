
@interface _MKFAirPlayAccessory : _MKFMediaAccessory <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAirPlayAccessory, MKFAirPlayAccessoryPrivateExtensions>

@property (nonatomic, copy) NSNumber *accessoryCategory;
@property (nonatomic, readonly, retain) NSArray *actionMediaPlaybacks;
@property (nonatomic, readonly, retain) NSArray *analysisEventBulletinRegistrations;
@property (nonatomic, retain) <MKFApplicationData> *applicationData;
@property (nonatomic, retain) NSArray *appliedFirewallWANRules;
@property (nonatomic, readonly, retain) NSArray *cameraAccessModeBulletinRegistrations;
@property (nonatomic, readonly, retain) NSArray *cameraReachabilityBulletinRegistrations;
@property (nonatomic, readonly, retain) NSArray *cameraSignificantEventBulletinRegistrations;
@property (nonatomic, copy) NSString *configurationAppIdentifier;
@property (nonatomic, copy) NSString *configuredName;
@property (nonatomic, copy) NSNumber *currentNetworkProtectionMode;
@property (nonatomic, readonly, copy) MKFAirPlayAccessoryDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *firmwareVersion;
@property (nonatomic, copy) NSUUID *groupIdentifier;
@property (nonatomic, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *hmd_modelID;
@property (nonatomic, readonly, copy) NSUUID *hmd_parentModelID;
@property (nonatomic, readonly, retain) <MKFHome> *home;
@property (nonatomic, retain) <MKFAccessory> *hostAccessory;
@property (nonatomic, readonly, retain) NSArray *hostedAccessories;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSNumber *initialCategoryIdentifier;
@property (nonatomic, copy) NSString *initialManufacturer;
@property (nonatomic, copy) NSString *initialModel;
@property (nonatomic, copy) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (nonatomic, copy) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (nonatomic, copy) NSDate *lastPairingAuditTime;
@property (nonatomic, copy) NSDate *lastSeenDate;
@property (nonatomic, copy) NSNumber *lowBattery;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, readonly, retain) NSArray *mediaPropertyNotificationRegistrations;
@property (nonatomic, copy) NSNumber *minimumUserPriviledge;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (nonatomic, copy) NSNumber *needsPairingAudit;
@property (nonatomic, copy) NSNumber *networkClientIdentifier;
@property (nonatomic, copy) NSNumber *networkClientLAN;
@property (nonatomic, copy) NSString *networkClientProfileFingerprint;
@property (nonatomic, copy) NSString *networkRouterUUID;
@property (nonatomic, readonly, retain) NSArray *pairedUsers;
@property (nonatomic, retain) NSSet *pairedUsers_;
@property (nonatomic, retain) HMFPairingIdentity *pairingIdentity;
@property (nonatomic, retain) NSSet *pairingsToRemove;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *pendingConfigurationIdentifier;
@property (nonatomic, copy) NSString *primaryProfileVersion;
@property (nonatomic, copy) NSString *productData;
@property (nonatomic, copy) NSString *providedName;
@property (nonatomic, retain) <MKFRoom> *room;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, retain) <MKFSoftwareUpdate> *softwareUpdate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *suspendCapable;
@property (nonatomic, readonly, retain) NSArray *usersWithListeningHistoryEnabled;
@property (nonatomic, readonly, retain) NSArray *usersWithMediaContentProfileEnabled;
@property (nonatomic, readonly, retain) NSArray *usersWithPersonalRequestsEnabled;
@property (nonatomic, copy) NSNumber *wiFiCredentialType;
@property (nonatomic, retain) NSData *wiFiUniquePreSharedKey;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (Class)cd_modelClass;
+ (id)fetchRequest;
+ (id)homeRelation;
+ (id)modelIDForParentRelationshipTo:(id)arg1;

- (void)addPairedUsersObject:(id)arg1;
- (id)castIfAirPlayAccessory;
- (id)databaseID;
- (id)pairedUsers;
- (void)removePairedUsersObject:(id)arg1;

@end
