
@interface AAProvisioningResponse : AAAuthenticationResponse {
    NSDictionary * _icloud;
}

@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) NSArray *appleIDAliases;
@property (getter=isCloudDocsMigrated, nonatomic, readonly) bool cloudDocsMigrated;
@property (nonatomic, readonly) NSDictionary *dataclassProperties;
@property (getter=isFamilyEligible, nonatomic, readonly) bool familyEligible;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *fmipAppToken;
@property (nonatomic, readonly) NSString *fmipAuthToken;
@property (nonatomic, readonly) NSString *fmipSiriToken;
@property (nonatomic, readonly) NSString *iCloudAuthToken;
@property (nonatomic, readonly) NSString *keyTransparencyToken;
@property (nonatomic, readonly) NSString *lastName;
@property (getter=isManagedAppleID, nonatomic, readonly) bool managedAppleID;
@property (getter=isNotesMigrated, nonatomic, readonly) bool notesMigrated;
@property (getter=hasOptionalTerms, nonatomic, readonly) bool optionalTerms;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) NSNumber *primaryEmailVerified;
@property (nonatomic, readonly) NSArray *provisionedDataclasses;
@property (nonatomic, readonly) NSDictionary *regionInfo;
@property (getter=isRemindersAutoMigratableToCK, nonatomic, readonly) bool remindersAutoMigratableToCK;
@property (getter=isRemindersMigrated, nonatomic, readonly) bool remindersMigrated;
@property (getter=isSandboxAccount, nonatomic, readonly) bool sandboxAccount;
@property (nonatomic, readonly) NSString *searchPartyToken;

- (void).cxx_destruct;
- (id)appleID;
- (id)appleIDAliases;
- (id)dataclassProperties;
- (id)firstName;
- (id)fmipAppToken;
- (id)fmipAuthToken;
- (id)fmipSiriToken;
- (bool)hasOptionalTerms;
- (id)iCloudAuthToken;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (bool)isCloudDocsMigrated;
- (bool)isFamilyEligible;
- (bool)isManagedAppleID;
- (bool)isNotesMigrated;
- (bool)isRemindersAutoMigratableToCK;
- (bool)isRemindersMigrated;
- (bool)isSandboxAccount;
- (id)keyTransparencyToken;
- (id)lastName;
- (id)primaryEmail;
- (id)primaryEmailVerified;
- (id)provisionedDataclasses;
- (id)regionInfo;
- (id)searchPartyToken;

@end
