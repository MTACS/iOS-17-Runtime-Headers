
@interface CDPDFollowUpFactory : NSObject

+ (id)contextToIdentifierMap;

- (id)_baseFollowUpItemWithContext:(id)arg1;
- (id)_baseFollowUpNotificationWithContext:(id)arg1;
- (void)_configureConfirmExistingSecretFollowUpItem:(id)arg1;
- (void)_configureRepairFollowUpItem:(id)arg1;
- (void)_configureWalrusConfirmExistingSecretFollowUpItem:(id)arg1;
- (void)_configureWalrusRepairFollowUpItem:(id)arg1;
- (id)_confirmExistingSecretFollowUpAction;
- (id)_createPasscodeDismissNoteFollowUpAction;
- (id)_createPasscodeFollowUpAction;
- (id)_createPasscodeNoteFollowUpAction;
- (id)_deviceCapabilityProvider;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpForConfirmExistingSecretWithContext:(id)arg1;
- (id)_followUpForOfflineSecretChangeWithContext:(id)arg1;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)arg1;
- (id)_followUpForRepairWithContext:(id)arg1;
- (id)_followUpForSecureTermsWithContext:(id)arg1;
- (id)_followUpForSettingUpBiometricsWithContext:(id)arg1;
- (id)_followUpItemForRecoveryKeyMismatchHealing:(id)arg1;
- (id)_followUpItemForSOSCompatibilityMode:(id)arg1;
- (id)_followUpItemForWalrusCreatePasscodeWithContext:(id)arg1;
- (bool)_isBiometricAuthEnrolled;
- (bool)_isBiometricCapable;
- (bool)_isManateeAvailable;
- (bool)_isManateeAvailableForAltDSID:(id)arg1;
- (bool)_isWalrusEnabled;
- (id)_localizedStringForKey:(id)arg1;
- (id)_offlineSecretChangeFollowUpAction;
- (id)_secureTermsFollowUpAction;
- (bool)_supportsFaceID;
- (id)followUpItemWithContext:(id)arg1;
- (id)identifierForContext:(id)arg1;
- (unsigned long long)secretType;

@end
