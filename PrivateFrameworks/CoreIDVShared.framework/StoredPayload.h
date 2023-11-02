
@interface StoredPayload : NSManagedObject

@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, retain) StoredCredential *credential;
@property (nonatomic, copy) NSString *docType;
@property (nonatomic, copy) NSData *elementIdentifiersByNamespace;
@property (nonatomic) long long format;
@property (nonatomic, copy) NSData *ingestionHash;
@property (nonatomic, copy) NSData *payloadData;
@property (nonatomic, retain) StoredCryptoKey *payloadProtectionKey;
@property (nonatomic, retain) StoredCryptoKey *presentmentKey;
@property (nonatomic) long long protectionType;
@property (nonatomic, copy) NSDate *updatedAt;
@property (nonatomic, copy) NSDate *validFrom;
@property (nonatomic, copy) NSDate *validUntil;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
