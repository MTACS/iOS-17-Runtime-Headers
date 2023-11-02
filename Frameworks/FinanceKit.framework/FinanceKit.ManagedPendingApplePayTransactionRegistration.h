
@interface FinanceKit.ManagedPendingApplePayTransactionRegistration : NSManagedObject {
    void privateKeyKey;
    void transactionIdentifierKey;
    void transactionSourceKey;
}

@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *deviceAccountIdentifier;
@property (nonatomic, copy) NSDate *lastRegistrationAttemptDate;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSData *primitivePrivateKey;
@property (nonatomic, retain) NSNumber *primitiveTransactionSource;
@property (nonatomic) long long registrationAttemptCount;
@property (nonatomic, copy) NSDate *transactionDate;

- (void).cxx_construct;
- (void).cxx_destruct;
- (void)awakeFromInsert;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
