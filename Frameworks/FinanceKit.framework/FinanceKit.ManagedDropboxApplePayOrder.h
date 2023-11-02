
@interface FinanceKit.ManagedDropboxApplePayOrder : NSManagedObject {
    void encryptionSchemeKey;
    void ephemeralPublicKeyKey;
}

@property (nonatomic) short ckSchemaVersion;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSUUID *credentialIdentifier;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *primitiveEncryptionScheme;
@property (nonatomic, copy) NSData *primitiveEphemeralPublicKey;
@property (nonatomic, copy) NSData *transactionInfo;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
