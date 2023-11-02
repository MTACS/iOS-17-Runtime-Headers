
@interface FinanceKit.ManagedOrderPaymentTransaction : NSManagedObject {
    void amountKey;
    void currencyCodeKey;
    void statusKey;
    void transactionTypeKey;
}

@property (nonatomic, copy) NSString *applePayTransactionIdentifier;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *paymentMethodDisplayName;
@property (nonatomic) short positionIndex;
@property (nonatomic, retain) NSDecimalNumber *primitiveAmount;
@property (nonatomic, copy) NSString *primitiveCurrencyCode;
@property (nonatomic, retain) NSNumber *primitiveStatus;
@property (nonatomic, retain) NSNumber *primitiveTransactionType;
@property (nonatomic, copy) NSString *receiptName;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
