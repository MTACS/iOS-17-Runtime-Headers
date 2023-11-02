
@interface CKOperationGroup : NSObject <ICLoggable, NSSecureCoding> {
    NSString * _authPromptReason;
    CKOperationConfiguration * _defaultConfiguration;
    long long  _expectedReceiveSize;
    long long  _expectedSendSize;
    NSString * _name;
    NSString * _operationGroupID;
    NSNumber * _quantityNumber;
    CKOperationGroupSystemImposedInfo * _systemImposedInfo_locked;
}

@property (nonatomic, readonly) long long approximateReceiveBytes;
@property (nonatomic, readonly) long long approximateSendBytes;
@property (copy) NSString *authPromptReason;
@property (readonly, copy) NSString *debugDescription;
@property (copy) CKOperationConfiguration *defaultConfiguration;
@property (readonly, copy) NSString *description;
@property long long expectedReceiveSize;
@property long long expectedSendSize;
@property (readonly) unsigned long long hash;
@property (copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *operationGroupID;
@property unsigned long long quantity;
@property (copy) NSNumber *quantityNumber;
@property (nonatomic, readonly, copy) NSString *safari_logDescription;
@property (readonly) Class superclass;
@property (nonatomic, copy) CKOperationGroupSystemImposedInfo *systemImposedInfo;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (long long)approximateReceiveBytes;
- (long long)approximateSendBytes;
- (id)authPromptReason;
- (id)defaultConfiguration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedReceiveSize;
- (long long)expectedSendSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)operationGroupID;
- (unsigned long long)quantity;
- (id)quantityNumber;
- (unsigned long long)resolvedNetworkServiceTypeForConfig:(id)arg1;
- (void)setAuthPromptReason:(id)arg1;
- (void)setDefaultConfiguration:(id)arg1;
- (void)setExpectedReceiveSize:(long long)arg1;
- (void)setExpectedSendSize:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setQuantity:(unsigned long long)arg1;
- (void)setQuantityNumber:(id)arg1;
- (void)setSystemImposedInfo:(id)arg1;
- (id)systemImposedInfo;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)br_aggressiveChaining;
+ (id)br_downloadConflictingVersions;
+ (id)br_downloadOpportunistic;
+ (id)br_downloadOptimizeStorageOff;
+ (id)br_downloadThumbnails;
+ (id)br_downloadThumbnailsUserInitiated;
+ (id)br_downloadUpdatedDocuments;
+ (id)br_downloadUserInitiated;
+ (id)br_fetchIdentityXPC;
+ (id)br_fetchNonLocalVersions;
+ (id)br_fetchParentChain;
+ (id)br_fetchRecents;
+ (id)br_listDirectoryContents;
+ (id)br_locateRecord;
+ (id)br_logout;
+ (id)br_operationGroupWithName:(id)arg1;
+ (id)br_osUpgradeMigration;
+ (id)br_publishingRequest;
+ (id)br_purge;
+ (id)br_quotaUpdateTelemetry;
+ (id)br_quotaUpdateUploader;
+ (id)br_quotaUpdateXPC;
+ (id)br_sharingMisc;
+ (id)br_syncDown;
+ (id)br_syncDownAppLaunch;
+ (id)br_syncDownAppLibraryMetadata;
+ (id)br_syncDownInitial;
+ (id)br_syncDownPeriodic;
+ (id)br_syncDownPushTriggered;
+ (id)br_syncDownZoneHealth;
+ (id)br_syncUp;
+ (id)br_syncUpAndDownShareDB;
+ (id)br_syncUpAppLibraryMetadata;
+ (id)br_syncUpZoneHealth;
+ (id)br_upload;
+ (id)br_zoneConsolidation;
+ (id)br_zoneConsolidationManual;
+ (id)br_zoneHealthSimulation;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)ic_loggingIdentifier;
- (id)ic_loggingValues;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)pk_operationGroupWithName:(id)arg1;
+ (id)pk_operationGroupWithName:(id)arg1 suffix:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)safari_logDescription;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

+ (id)br_aggressiveChaining;
+ (id)br_downloadConflictingVersions;
+ (id)br_downloadOpportunistic;
+ (id)br_downloadOptimizeStorageOff;
+ (id)br_downloadThumbnails;
+ (id)br_downloadThumbnailsUserInitiated;
+ (id)br_downloadUpdatedDocuments;
+ (id)br_downloadUserInitiated;
+ (id)br_fetchIdentityXPC;
+ (id)br_fetchNonLocalVersions;
+ (id)br_fetchParentChain;
+ (id)br_fetchRecents;
+ (id)br_listDirectoryContents;
+ (id)br_locateRecord;
+ (id)br_logout;
+ (id)br_operationGroupWithName:(id)arg1;
+ (id)br_osUpgradeMigration;
+ (id)br_publishingRequest;
+ (id)br_purge;
+ (id)br_quotaUpdateTelemetry;
+ (id)br_quotaUpdateUploader;
+ (id)br_quotaUpdateXPC;
+ (id)br_sharingMisc;
+ (id)br_syncDown;
+ (id)br_syncDownAppLaunch;
+ (id)br_syncDownAppLibraryMetadata;
+ (id)br_syncDownInitial;
+ (id)br_syncDownPeriodic;
+ (id)br_syncDownPushTriggered;
+ (id)br_syncDownZoneHealth;
+ (id)br_syncUp;
+ (id)br_syncUpAndDownShareDB;
+ (id)br_syncUpAppLibraryMetadata;
+ (id)br_syncUpZoneHealth;
+ (id)br_upload;
+ (id)br_zoneConsolidation;
+ (id)br_zoneConsolidationManual;
+ (id)br_zoneHealthSimulation;

@end
