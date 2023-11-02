
@interface AALoginResponseAppleAccountInfo : NSObject {
    NSString * _altDSID;
    NSString * _appleID;
    NSArray * _appleIDAliases;
    NSNumber * _cloudDocsMigrated;
    bool  _familyEligible;
    NSString * _firstName;
    NSString * _lastName;
    bool  _managedAppleID;
    NSNumber * _notesMigrated;
    bool  _optionalTerms;
    NSString * _personID;
    NSString * _primaryEmail;
    NSNumber * _primaryEmailVerified;
    NSNumber * _remindersAutoMigratableToCK;
    NSNumber * _remindersMigrated;
    bool  _sandboxAccount;
}

@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) NSArray *appleIDAliases;
@property (nonatomic, readonly) NSNumber *cloudDocsMigrated;
@property (getter=isFamilyEligible, nonatomic, readonly) bool familyEligible;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (getter=isManagedAppleID, nonatomic, readonly) bool managedAppleID;
@property (nonatomic, readonly) NSNumber *notesMigrated;
@property (getter=hasOptionalTerms, nonatomic, readonly) bool optionalTerms;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) NSNumber *primaryEmailVerified;
@property (nonatomic, readonly) NSNumber *remindersAutoMigratableToCK;
@property (nonatomic, readonly) NSNumber *remindersMigrated;
@property (getter=isSandboxAccount, nonatomic, readonly) bool sandboxAccount;

- (void).cxx_destruct;
- (id)altDSID;
- (id)appleID;
- (id)appleIDAliases;
- (id)cloudDocsMigrated;
- (id)firstName;
- (bool)hasOptionalTerms;
- (id)initWithDictionary:(id)arg1;
- (bool)isFamilyEligible;
- (bool)isManagedAppleID;
- (bool)isSandboxAccount;
- (id)lastName;
- (id)notesMigrated;
- (id)personID;
- (id)primaryEmail;
- (id)primaryEmailVerified;
- (id)remindersAutoMigratableToCK;
- (id)remindersMigrated;

@end
