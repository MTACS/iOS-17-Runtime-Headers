
@interface FinanceKit.ManagedApplePayDocumentCredential : NSManagedObject {
    void symmetricKeyKey;
}

@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSUUID *credentialIdentifier;
@property (nonatomic, copy) NSString *deviceAccountIdentifier;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSData *primitiveSymmetricKey;

- (void).cxx_construct;
- (void).cxx_destruct;
- (void)awakeFromInsert;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
