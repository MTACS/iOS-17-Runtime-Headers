
@interface PKPaymentShippingMethodDataItem : PKPaymentDataItem

@property (nonatomic, readonly) PKShippingMethod *shippingMethod;

+ (long long)dataType;

- (long long)context;
- (bool)isValidWithError:(id*)arg1;
- (id)shippingMethod;

@end
