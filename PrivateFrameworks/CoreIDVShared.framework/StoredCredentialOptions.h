
@interface StoredCredentialOptions : NSManagedObject

@property (nonatomic, retain) StoredCredential *credential;
@property (nonatomic) long long deleteInactiveKeysAfterDays;
@property (nonatomic) long long deleteIncompleteCredentialAfterDays;
@property (nonatomic) long long payloadProtectionPolicy;
@property (nonatomic) long long presentmentAuthPolicy;
@property (nonatomic) long long readerAuthenticationPolicy;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
