
@interface FinanceKit.ManagedOrderPayment : NSManagedObject {
    void statusValueKey;
}

@property (nonatomic, retain) NSSet *applePayTransactionIdentifierObjects;
@property (nonatomic, copy) NSArray *paymentMethods;
@property (nonatomic, retain) NSNumber *primitiveStatusValue;
@property (nonatomic, retain) NSSet *summaryItemObjects;
@property (nonatomic, retain) NSDecimalNumber *totalAmount;
@property (nonatomic, copy) NSString *totalCurrencyCode;
@property (nonatomic, retain) NSSet *transactionObjects;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
