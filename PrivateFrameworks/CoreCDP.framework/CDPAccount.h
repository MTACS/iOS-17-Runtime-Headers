
@interface CDPAccount : NSObject

@property (nonatomic, retain) NSDate *rpdProbationFirstSeenDate;

+ (id)_authKitAccountWith:(id)arg1;
+ (id)altDSIDForPersonID:(id)arg1;
+ (id)appleAccountForAltDSID:(id)arg1;
+ (bool)checkIfAltDSIDIsBeneficiary:(id)arg1;
+ (id)contextForAccountWithAltDSID:(id)arg1;
+ (bool)isHSA2Enabled:(id)arg1;
+ (bool)isICDPEnabledForDSID:(id)arg1;
+ (bool)isICDPEnabledForDSID:(id)arg1 checkWithServer:(bool)arg2;
+ (id)personIDForAltDSID:(id)arg1;
+ (bool)saveVerifiedAccount:(id)arg1 error:(id*)arg2;
+ (id)sharedInstance;

- (id)_serverFriendlyDateFormatter;
- (id)authToken;
- (id)contextForPrimaryAccount;
- (id)escrowURL;
- (id)iCloudEnv;
- (bool)isOTEnabledForContext:(id)arg1;
- (id)primaryAccountAltDSID;
- (id)primaryAccountDSID;
- (id)primaryAccountFirstName;
- (id)primaryAccountFullName;
- (bool)primaryAccountIsBeneficiary;
- (bool)primaryAccountNeedsEscrowRecordRepair;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)primaryAccountStashedPRK;
- (id)primaryAccountUsername;
- (id)primaryAppleAccount;
- (id)primaryAuthKitAccount;
- (id)rpdProbationFirstSeenDate;
- (bool)rpdProbationIsInEffectForDuration:(double)arg1;
- (void)setRpdProbationFirstSeenDate:(id)arg1;

@end
