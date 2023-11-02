
@interface ACDManagedAccount : NSManagedObject

@property (nonatomic, retain) NSString *accountDescription;
@property (nonatomic, retain) ACDManagedAccountType *accountType;
@property (nonatomic, retain) NSNumber *active;
@property (nonatomic, retain) NSNumber *authenticated;
@property (nonatomic, retain) NSString *authenticationType;
@property (nonatomic, retain) NSSet *childAccounts;
@property (nonatomic, retain) NSString *credentialType;
@property (nonatomic, retain) NSSet *customProperties;
@property (nonatomic, retain) id dataclassProperties;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSSet *enabledDataclasses;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDate *lastCredentialRenewalRejectionDate;
@property (nonatomic, retain) NSString *modificationID;
@property (nonatomic, retain) NSString *owningBundleID;
@property (nonatomic, retain) ACDManagedAccount *parentAccount;
@property (nonatomic, retain) NSSet *provisionedDataclasses;
@property (nonatomic, retain) NSNumber *supportsAuthentication;
@property (nonatomic, retain) NSString *username;
@property (nonatomic, retain) NSNumber *visible;
@property (nonatomic, retain) NSNumber *warmingUp;

- (id)description;

@end
