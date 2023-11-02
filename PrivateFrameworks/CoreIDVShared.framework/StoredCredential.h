
@interface StoredCredential : NSManagedObject

@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic, retain) NSSet *cryptoKeys;
@property (nonatomic, retain) StoredCredentialOptions *options;
@property (nonatomic, copy) NSString *partition;
@property (nonatomic, retain) NSSet *payloads;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSDate *updatedAt;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
