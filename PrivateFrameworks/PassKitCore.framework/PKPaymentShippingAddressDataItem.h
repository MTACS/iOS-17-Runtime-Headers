
@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (nonatomic, readonly) NSAttributedString *formattedAddressString;
@property (nonatomic, readonly) bool isShippingEditable;
@property (nonatomic, readonly) CNContact *shippingAddress;
@property (nonatomic, readonly) NSString *shippingType;

+ (long long)dataType;

- (id)_shippingName;
- (long long)context;
- (id)createIncompleteShippingAddressError;
- (id)createRequiredShippingAddressError;
- (id)createShippingAddressErrorFromError:(id)arg1;
- (id)createShippingAddressErrorWithDescription:(id)arg1 failureReason:(id)arg2;
- (id)createUnavailableShippingAddressError;
- (id)errors;
- (id)firstModelError;
- (id)formattedAddressString;
- (bool)hasShippingAddress;
- (id)incompleteShippingAddressErrorDescription;
- (id)incompleteShippingAddressErrorFailureReason;
- (bool)isClientError:(id)arg1;
- (bool)isShippingEditable;
- (bool)isShippingServiceableWithError:(id*)arg1;
- (bool)isValidWithError:(id*)arg1;
- (id)paymentContactFormatErrors;
- (unsigned long long)rawShippingType;
- (id)requiredShippingAddressErrorDescription;
- (id)requiredShippingAddressErrorFailureReason;
- (id)shippingAddress;
- (id)shippingType;
- (id)unavailableShippingAddressErrorDescription;
- (id)unavailableShippingAddressErrorFailureReason;
- (id)validate;

@end
