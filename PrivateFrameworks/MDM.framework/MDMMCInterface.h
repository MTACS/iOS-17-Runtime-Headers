
@interface MDMMCInterface : NSObject

+ (int)_mcCloudConfigSourceForCCSource:(int)arg1;
+ (int)_mcFilterFlagsForMDMFlags:(int)arg1;
+ (int)_mcProfileStoragePurposeForMDMPurpose:(int)arg1;
+ (bool)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3;
+ (id)cloudConfigurationDetails;
+ (void)enrollProvisionallyWithNonce:(id)arg1 completion:(id /* block */)arg2;
+ (id)filterMDMRestrictions:(id)arg1 acceptingKeysFromDictionary:(id)arg2;
+ (void)flush;
+ (void)installProfileDataStoredForPurpose:(int)arg1 completion:(id /* block */)arg2;
+ (bool)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id*)arg3;
+ (id)ipcuProfileList;
+ (id)ipcuRemoveProfileWithIdentifier:(id)arg1;
+ (bool)isAutomaticDateAndTimeForced;
+ (bool)isAwaitingDeviceConfigured;
+ (bool)isDiagnosticsSubmissionRestricted;
+ (bool)isEnterpriseBookBackupAllowed;
+ (bool)isLimitedAppsMode;
+ (bool)isPasscodeSet;
+ (bool)isProfileWithIdentifier:(id)arg1 managedByProfileWithIdentifier:(id)arg2;
+ (bool)isProvisioningProfileWithUUID:(id)arg1 managedByProfileWithIdentifier:(id)arg2;
+ (id)managedAppIDs;
+ (id)mdmProfileIdentifier;
+ (id)mdmQueryableRestrictions;
+ (void)profileDataStoredForPurpose:(int)arg1 completion:(id /* block */)arg2;
+ (id)profileIdentifierForProfileData:(id)arg1 allowEmptyPayload:(bool)arg2 outIsSupervisionProfile:(bool*)arg3 outProfileSigner:(struct __SecCertificate {}**)arg4 outMayInstallCloudProfile:(bool*)arg5 outError:(id*)arg6;
+ (id)profileIdentifiersWithFilterFlags:(int)arg1;
+ (id)profileListWithFilterFlags:(int)arg1;
+ (void)profiledCheckIn;
+ (id)provisioningProfileUUIDsWithManagedOnly:(bool)arg1;
+ (bool)removeProvisioningProfileWithUUID:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id*)arg3;
+ (void)retrieveCloudConfigurationDetailsCompletion:(id /* block */)arg1;
+ (void)retrieveCloudConfigurationFromURL:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completion:(id /* block */)arg5;
+ (void)storeCertificateData:(id)arg1 forHostIdentifier:(id)arg2;
+ (void)storeCloudConfigurationDetails:(id)arg1 completion:(id /* block */)arg2;
+ (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(id /* block */)arg4;

@end
