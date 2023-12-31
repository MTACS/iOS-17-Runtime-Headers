
@interface FCMockPaymentTransactionManager : NSObject <FCPaymentTransactionManager> {
    NSString * _productID;
    NSError * _transactionError;
    unsigned long long  _transactionExpectation;
    long long  _transactionState;
    <FCPaymentTransactionManagerDelegate> * delegate;
}

@property (nonatomic) <FCPaymentTransactionManagerDelegate> *delegate;
@property (nonatomic, copy) NSString *productID;
@property (nonatomic, copy) NSError *transactionError;
@property (nonatomic) unsigned long long transactionExpectation;
@property (nonatomic) long long transactionState;

+ (id)mockPaymentTransactionWithFailForProductID:(id)arg1 transactionState:(long long)arg2 transactionError:(id)arg3;
+ (id)mockPaymentTransactionWithSuccessForProductID:(id)arg1;

- (void).cxx_destruct;
- (bool)canMakePayments;
- (id)delegate;
- (id)productID;
- (void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProductID:(id)arg1;
- (void)setTransactionError:(id)arg1;
- (void)setTransactionExpectation:(unsigned long long)arg1;
- (void)setTransactionState:(long long)arg1;
- (void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 bundleID:(id)arg4 appAdamID:(id)arg5 storeExternalVersion:(id)arg6 price:(id)arg7 webAccessOptIn:(bool)arg8 payment:(id)arg9;
- (id)transactionError;
- (unsigned long long)transactionExpectation;
- (long long)transactionState;

@end
