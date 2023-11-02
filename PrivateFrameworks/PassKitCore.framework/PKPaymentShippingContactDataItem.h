
@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *phone;

+ (long long)dataType;

- (long long)context;
- (id)email;
- (id)errors;
- (id)errorsForContactFields:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (id)name;
- (id)paymentContactFormatErrors;
- (id)phone;
- (id)requiredContactFields;

@end
