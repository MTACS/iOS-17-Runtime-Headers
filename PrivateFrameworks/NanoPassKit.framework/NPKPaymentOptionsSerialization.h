
@interface NPKPaymentOptionsSerialization : NSObject

+ (id)_billingAddressDictionaryFromEncodedData:(id)arg1;
+ (id)_contactFromEncodedData:(id)arg1;
+ (void)_deleteAllDefaultBillingAddresses:(id)arg1;
+ (void)handleSetTransactionDefaultsRequest:(id)arg1;
+ (id)setTransactionDefaultsRequest;

@end
