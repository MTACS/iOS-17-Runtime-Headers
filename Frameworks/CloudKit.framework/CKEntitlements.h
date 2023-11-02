
@interface CKEntitlements : NSObject <CKSQLiteItem> {
    NSString * _cachedApplicationBundleID;
    NSDictionary * _entitlementsDict;
    int  _pid;
    NSString * _procName;
    NSError * _secEntitlementsError;
}

@property (readonly) NSString *applicationBundleID;
@property (nonatomic, readonly) NSString *apsEnvironmentEntitlement;
@property (nonatomic, readonly) NSString *associatedApplicationBundleID;
@property (nonatomic, readonly) NSString *clientPrefixEntitlement;
@property (nonatomic, readonly) NSArray *cloudServices;
@property (nonatomic, readonly) NSDictionary *codeServiceURLByContainerAndServiceEntitlement;
@property (nonatomic, readonly) NSDictionary *codeServiceURLByServiceEntitlement;
@property (nonatomic, readonly) NSString *codeServiceURLEntitlement;
@property (nonatomic, readonly) long long containerEnvironment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *developmentContainerEnvironmentOverrides;
@property (nonatomic, readonly) bool hasAllowAccessDuringBuddyEntitlement;
@property (nonatomic, readonly) bool hasAllowFakeEntitlementsEntitlement;
@property (nonatomic, readonly) bool hasAllowOnDeviceAssetStreamingEntitlement;
@property (nonatomic, readonly) bool hasAllowPackagesEntitlement;
@property (nonatomic, readonly) bool hasAllowRealTimeOperationsEntitlement;
@property (nonatomic, readonly) bool hasAllowUnverifiedAccountEntitlement;
@property (nonatomic, readonly) bool hasAlwaysAllowPublishAssetsEntitlement;
@property (nonatomic, readonly) bool hasCloudKitSupportServiceEntitlement;
@property (nonatomic, readonly) bool hasCloudKitSystemServiceEntitlement;
@property (nonatomic, readonly) bool hasCustomAccountsEntitlement;
@property (nonatomic, readonly) bool hasDarkWakeNetworkReachabilityEnabledEntitlement;
@property (nonatomic, readonly) bool hasDeviceIdentifierEntitlement;
@property (nonatomic, readonly) bool hasDisplaysSystemAcceptPromptEntitlement;
@property (nonatomic, readonly) bool hasEnvironmentEntitlement;
@property (nonatomic, readonly) bool hasExplicitCodeOperationURLEntitlement;
@property (nonatomic, readonly) bool hasLightweightPCSEntitlement;
@property (nonatomic, readonly) bool hasMasqueradingEntitlement;
@property (nonatomic, readonly) bool hasNonLegacyShareURLEntitlement;
@property (nonatomic, readonly) bool hasOutOfProcessUIEntitlement;
@property (nonatomic, readonly) bool hasParticipantPIIEntitlement;
@property (nonatomic, readonly) bool hasProtectionDataEntitlement;
@property (nonatomic, readonly) bool hasSPIEntitlement;
@property (nonatomic, readonly) bool hasSystemLaunchDaemonEntitlement;
@property (nonatomic, readonly) bool hasVFSOpenByIDEntitlement;
@property (nonatomic, readonly) bool hasZoneProtectionDataEntitlement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBackgroundAssetsExtension;
@property (nonatomic, readonly) NSDictionary *serviceNameForContainerIdentifierMapEntitlement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationBundleID;
- (id)apsEnvironmentEntitlement;
- (id)associatedApplicationBundleID;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)clientPrefixEntitlement;
- (id)cloudServices;
- (id)codeServiceURLByContainerAndServiceEntitlement;
- (id)codeServiceURLByServiceEntitlement;
- (id)codeServiceURLEntitlement;
- (long long)containerEnvironment;
- (id)description;
- (id)developmentContainerEnvironmentOverrides;
- (id)entitlementsByAddingOverlay:(id)arg1;
- (bool)hasAllowAccessDuringBuddyEntitlement;
- (bool)hasAllowFakeEntitlementsEntitlement;
- (bool)hasAllowOnDeviceAssetStreamingEntitlement;
- (bool)hasAllowPackagesEntitlement;
- (bool)hasAllowRealTimeOperationsEntitlement;
- (bool)hasAllowUnverifiedAccountEntitlement;
- (bool)hasAlwaysAllowPublishAssetsEntitlement;
- (bool)hasCloudKitSupportServiceEntitlement;
- (bool)hasCloudKitSystemServiceEntitlement;
- (bool)hasCustomAccountsEntitlement;
- (bool)hasDarkWakeNetworkReachabilityEnabledEntitlement;
- (bool)hasDeviceIdentifierEntitlement;
- (bool)hasDisplaysSystemAcceptPromptEntitlement;
- (bool)hasEnvironmentEntitlement;
- (bool)hasExplicitCodeOperationURLEntitlement;
- (bool)hasLightweightPCSEntitlement;
- (bool)hasMasqueradingEntitlement;
- (bool)hasNonLegacyShareURLEntitlement;
- (bool)hasOutOfProcessUIEntitlement;
- (bool)hasParticipantPIIEntitlement;
- (bool)hasProtectionDataEntitlement;
- (bool)hasSPIEntitlement;
- (bool)hasSystemLaunchDaemonEntitlement;
- (bool)hasVFSOpenByIDEntitlement;
- (bool)hasZoneProtectionDataEntitlement;
- (unsigned long long)hash;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 pid:(int)arg2;
- (id)initWithCurrentProcess;
- (id)initWithEntitlementsDict:(id)arg1;
- (id)initWithSqliteRepresentation:(id)arg1;
- (bool)isBackgroundAssetsExtension;
- (bool)isEqual:(id)arg1;
- (id)serviceNameForContainerIdentifierMapEntitlement;
- (id)sqliteRepresentation;
- (bool)validateEntitlementsWithSDKVersion:(unsigned int)arg1 error:(id*)arg2;

@end