
@interface SBDefaultAuthenticationPolicy : NSObject <SBFAuthenticationPolicy> {
    SBiCloudPasscodeRequirementLockoutController * _iCloudPasscodeRequirementLockoutController;
    SecureBackup * _secureBackupHelper;
    SBSoftwareUpdatePasscodePolicyManager * _softwareUpdatePasscodePolicyManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBiCloudPasscodeRequirementLockoutController *iCloudPasscodeRequirementLockoutController;
@property (getter=_secureBackupHelper, setter=_setSecureBackupHelper:, nonatomic, retain) SecureBackup *secureBackupHelper;
@property (nonatomic, retain) SBSoftwareUpdatePasscodePolicyManager *softwareUpdatePasscodePolicyManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_secureBackupHelper;
- (void)_setSecureBackupHelper:(id)arg1;
- (bool)allowAuthenticationRevocation;
- (void)cachePasscode:(id)arg1;
- (void)clearPasscodeCache;
- (id)iCloudPasscodeRequirementLockoutController;
- (void)passcodeAuthenticationFailedWithError:(id)arg1;
- (void)setICloudPasscodeRequirementLockoutController:(id)arg1;
- (void)setSoftwareUpdatePasscodePolicyManager:(id)arg1;
- (bool)shouldClearBlockStateOnSync;
- (id)softwareUpdatePasscodePolicyManager;
- (bool)usesSecureMode;
- (void)wipeDeviceWithReason:(id)arg1;

@end
