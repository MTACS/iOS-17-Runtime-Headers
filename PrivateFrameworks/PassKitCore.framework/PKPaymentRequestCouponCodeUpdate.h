
@interface PKPaymentRequestCouponCodeUpdate : PKPaymentRequestUpdate <NSSecureCoding> {
    NSArray * _errors;
}

@property (nonatomic, copy) NSArray *errors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)errors;
- (id)initWithCoder:(id)arg1;
- (id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 shippingMethods:(id)arg3;
- (id)initWithPaymentSummaryItems:(id)arg1;
- (void)setErrors:(id)arg1;

@end
