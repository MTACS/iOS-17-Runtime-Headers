
@interface VSPersistentUserAccount : NSManagedObject

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) long long accountType;
@property (nonatomic, copy) NSString *authenticationData;
@property (nonatomic, copy) NSDate *billingCycleEndDate;
@property (nonatomic, copy) NSString *billingIdentifier;
@property (nonatomic, copy) NSDate *created;
@property (nonatomic) bool developer;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic) long long deviceType;
@property (nonatomic) long long keychainItemHash;
@property (nonatomic, copy) NSDate *modified;
@property (nonatomic, copy) NSString *providerID;
@property (nonatomic) bool requiresSystemTrust;
@property (nonatomic) bool signedOut;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (nonatomic) long long sourceType;
@property (nonatomic, retain) NSObject *tierIdentifiers;
@property (nonatomic, copy) NSURL *updateURL;
@property (nonatomic) short version;

+ (id)fetchRequest;

@end
