
@interface AKCDPFactory : NSObject

+ (id)accountRecoveryControllerWithPresentingViewController:(id)arg1;
+ (bool)cdpAccountIsHSA2EnabledForAltDSID:(id)arg1;
+ (bool)cdpAccountIsICDPEnabledForDSID:(id)arg1;
+ (bool)cdpAccountIsOTEnabledForAltDSID:(id)arg1;
+ (id)cdpErrorDomain;
+ (id)cdpIDMSRecordMIDKey;
+ (id)cdpIDMSRecordPRKKey;
+ (id)cdpStateUIController;
+ (id)cdpUIControllerWithPresentingViewController:(id)arg1;
+ (id)contextForAltDSID:(id)arg1;
+ (id)contextWithAuthResults:(id)arg1;
+ (id)followUpController;
+ (id)followUpRepairContext;
+ (bool)isEligibleToArmDeviceForPCSAuth;
+ (bool)isWalrusEnabled;
+ (bool)isWebAccessEnabled;
+ (id)recoveryControllerWithContext:(id)arg1;
+ (id)stateControllerWithContext:(id)arg1;
+ (unsigned long long)walrusStatus;
+ (id)walrusStatusLiveValue;
+ (id)webAccessChangeControllerForTargetStatus:(unsigned long long)arg1;
+ (unsigned long long)webAccessStatus;
+ (id)webAccessStatusLiveValue;

- (bool)isCDPEnabledForDSID:(id)arg1;
- (bool)isHSA2EnabledForAltDSID:(id)arg1;
- (bool)isManateeAvailable;
- (bool)isUserVisibleKeychainSyncEnabled;

@end
