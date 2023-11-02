
@interface PKPayLaterPassPaymentSource : PKPayLaterPaymentSource <NSSecureCoding> {
    PKPaymentApplication * _paymentApplication;
    PKPaymentPass * _paymentPass;
}

@property (nonatomic, readonly) PKPaymentApplication *paymentApplication;
@property (nonatomic, readonly) PKPaymentPass *paymentPass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (id)name;
- (id)paymentApplication;
- (id)paymentPass;
- (unsigned long long)type;

@end
