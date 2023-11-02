
@interface CEMSecurityInformationCommand_StatusSecurityInfo : CEMPayloadBase {
    NSNumber * _statusFDEEnabled;
    NSNumber * _statusFDEHasInstitutionalRecoveryKey;
    NSNumber * _statusFDEHasPersonalRecoveryKey;
    NSData * _statusFDEPersonalRecoveryKeyCMS;
    NSString * _statusFDEPersonalRecoveryKeyDeviceKey;
    CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings * _statusFirewallSettings;
    CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus * _statusFirmwarePasswordStatus;
    NSNumber * _statusHardwareEncryptionCaps;
    NSNumber * _statusPasscodeCompliant;
    NSNumber * _statusPasscodeCompliantWithProfiles;
    NSNumber * _statusPasscodeLockGracePeriod;
    NSNumber * _statusPasscodeLockGracePeriodEnforced;
    NSNumber * _statusPasscodePresent;
    NSNumber * _statusSystemIntegrityProtectionEnabled;
}

@property (nonatomic, copy) NSNumber *statusFDEEnabled;
@property (nonatomic, copy) NSNumber *statusFDEHasInstitutionalRecoveryKey;
@property (nonatomic, copy) NSNumber *statusFDEHasPersonalRecoveryKey;
@property (nonatomic, copy) NSData *statusFDEPersonalRecoveryKeyCMS;
@property (nonatomic, copy) NSString *statusFDEPersonalRecoveryKeyDeviceKey;
@property (nonatomic, copy) CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings *statusFirewallSettings;
@property (nonatomic, copy) CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus *statusFirmwarePasswordStatus;
@property (nonatomic, copy) NSNumber *statusHardwareEncryptionCaps;
@property (nonatomic, copy) NSNumber *statusPasscodeCompliant;
@property (nonatomic, copy) NSNumber *statusPasscodeCompliantWithProfiles;
@property (nonatomic, copy) NSNumber *statusPasscodeLockGracePeriod;
@property (nonatomic, copy) NSNumber *statusPasscodeLockGracePeriodEnforced;
@property (nonatomic, copy) NSNumber *statusPasscodePresent;
@property (nonatomic, copy) NSNumber *statusSystemIntegrityProtectionEnabled;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithHardwareEncryptionCaps:(id)arg1 withPasscodePresent:(id)arg2 withPasscodeCompliant:(id)arg3 withPasscodeCompliantWithProfiles:(id)arg4 withPasscodeLockGracePeriod:(id)arg5 withPasscodeLockGracePeriodEnforced:(id)arg6 withFDEEnabled:(id)arg7 withFDEHasPersonalRecoveryKey:(id)arg8 withFDEHasInstitutionalRecoveryKey:(id)arg9 withFDEPersonalRecoveryKeyCMS:(id)arg10 withFDEPersonalRecoveryKeyDeviceKey:(id)arg11 withSystemIntegrityProtectionEnabled:(id)arg12 withFirewallSettings:(id)arg13 withFirmwarePasswordStatus:(id)arg14;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusFDEEnabled:(id)arg1;
- (void)setStatusFDEHasInstitutionalRecoveryKey:(id)arg1;
- (void)setStatusFDEHasPersonalRecoveryKey:(id)arg1;
- (void)setStatusFDEPersonalRecoveryKeyCMS:(id)arg1;
- (void)setStatusFDEPersonalRecoveryKeyDeviceKey:(id)arg1;
- (void)setStatusFirewallSettings:(id)arg1;
- (void)setStatusFirmwarePasswordStatus:(id)arg1;
- (void)setStatusHardwareEncryptionCaps:(id)arg1;
- (void)setStatusPasscodeCompliant:(id)arg1;
- (void)setStatusPasscodeCompliantWithProfiles:(id)arg1;
- (void)setStatusPasscodeLockGracePeriod:(id)arg1;
- (void)setStatusPasscodeLockGracePeriodEnforced:(id)arg1;
- (void)setStatusPasscodePresent:(id)arg1;
- (void)setStatusSystemIntegrityProtectionEnabled:(id)arg1;
- (id)statusFDEEnabled;
- (id)statusFDEHasInstitutionalRecoveryKey;
- (id)statusFDEHasPersonalRecoveryKey;
- (id)statusFDEPersonalRecoveryKeyCMS;
- (id)statusFDEPersonalRecoveryKeyDeviceKey;
- (id)statusFirewallSettings;
- (id)statusFirmwarePasswordStatus;
- (id)statusHardwareEncryptionCaps;
- (id)statusPasscodeCompliant;
- (id)statusPasscodeCompliantWithProfiles;
- (id)statusPasscodeLockGracePeriod;
- (id)statusPasscodeLockGracePeriodEnforced;
- (id)statusPasscodePresent;
- (id)statusSystemIntegrityProtectionEnabled;

@end
