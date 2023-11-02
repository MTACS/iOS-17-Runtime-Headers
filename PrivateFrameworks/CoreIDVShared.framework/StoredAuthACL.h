
@interface StoredAuthACL : NSManagedObject

@property (nonatomic) long long aclType;
@property (nonatomic, copy) NSData *credentialUUIDs;
@property (nonatomic, copy) NSData *encryptedACL;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) StoredCryptoKey *progenitorKey;
@property (nonatomic) short version;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
