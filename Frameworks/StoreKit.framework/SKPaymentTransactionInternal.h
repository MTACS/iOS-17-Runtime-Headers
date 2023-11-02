
@interface SKPaymentTransactionInternal : NSObject {
    SKPaymentTransactionAuthorizationResponse * _authorizationResponse;
    NSArray * _downloads;
    NSError * _error;
    SKPaymentTransaction * _originalTransaction;
    SKPayment * _payment;
    NSString * _temporaryIdentifier;
    NSDate * _transactionDate;
    NSString * _transactionIdentifier;
    NSData * _transactionReceipt;
    long long  _transactionState;
    NSString * _uuid;
}

- (void).cxx_destruct;
- (id)init;

@end
