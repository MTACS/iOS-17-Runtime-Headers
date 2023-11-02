
@interface FCCompletedPaymentTransaction : NSObject {
    FCPaymentTransactionAuthorizationResponse * _appleIDAccountDetails;
    NSString * _productID;
    NSString * _receipt;
}

@property (nonatomic, readonly, copy) FCPaymentTransactionAuthorizationResponse *appleIDAccountDetails;
@property (nonatomic, readonly, copy) NSString *productID;
@property (nonatomic, readonly, copy) NSString *receipt;

- (void).cxx_destruct;
- (id)appleIDAccountDetails;
- (id)initWithProductID:(id)arg1 receipt:(id)arg2 appleIDAccountDetails:(id)arg3;
- (id)productID;
- (id)receipt;

@end
