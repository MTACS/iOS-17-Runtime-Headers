
@interface AMSExpressCheckoutModel : NSObject <NSSecureCoding> {
    void mode;
    void paymentChoices;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1 paymentChoices:(id)arg2;

@end
