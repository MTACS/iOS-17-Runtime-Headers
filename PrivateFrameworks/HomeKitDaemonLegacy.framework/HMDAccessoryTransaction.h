
@interface HMDAccessoryTransaction : HMDBackingStoreModelObject {
    NSObject<OS_dispatch_group> * _configurationTracker;
    NSString * _configuredNetworkProtectionGroupUUIDString;
}

@property (nonatomic, retain) NSNumber *accessoryCategory;
@property (nonatomic, retain) NSArray *appliedFirewallWANRules;
@property (nonatomic, retain) NSString *configurationAppIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *configurationTracker;
@property (nonatomic, retain) NSString *configuredName;
@property (nonatomic, retain) NSString *configuredNetworkProtectionGroupUUIDString;
@property (nonatomic, retain) NSNumber *currentNetworkProtectionMode;
@property (nonatomic, retain) NSString *firmwareVersion;
@property (nonatomic, retain) NSString *hostAccessoryUUID;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSNumber *initialCategoryIdentifier;
@property (nonatomic, retain) NSString *initialManufacturer;
@property (nonatomic, retain) NSString *initialModel;
@property (nonatomic, retain) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (nonatomic, retain) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (nonatomic, retain) NSDate *lastSeenDate;
@property (nonatomic, retain) NSNumber *lowBattery;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *networkClientIdentifier;
@property (nonatomic, retain) NSNumber *networkClientLAN;
@property (nonatomic, retain) NSString *networkClientProfileFingerprint;
@property (nonatomic, retain) NSString *networkRouterUUID;
@property (nonatomic, retain) HMDUserManagementOperationTimestamp *pairingsAuditedTimestamp;
@property (nonatomic, retain) NSString *pendingConfigurationIdentifier;
@property (copy) NSUUID *preferredMediaUserUUID;
@property (nonatomic, copy) NSNumber *preferredUserSelectionType;
@property (nonatomic, retain) NSString *primaryProfileVersion;
@property (nonatomic, retain) NSString *productData;
@property (nonatomic, retain) NSString *productDataV2;
@property (nonatomic, retain) NSString *providedName;
@property (nonatomic, retain) NSString *roomUUID;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic, retain) HMDUserManagementOperationTimestamp *sharedAdminAddedTimestamp;
@property (nonatomic, retain) NSNumber *suspendCapable;
@property (nonatomic, retain) NSNumber *wiFiCredentialType;
@property (nonatomic, retain) NSData *wiFiUniquePreSharedKey;

+ (id)properties;

- (void).cxx_destruct;
- (id)configurationTracker;
- (id)configuredNetworkProtectionGroupUUIDString;
- (id)dependentUUIDs;
- (void)setConfigurationTracker:(id)arg1;
- (void)setConfiguredNetworkProtectionGroupUUIDString:(id)arg1;

@end
