
@interface AppleMediaServices.ExpressCheckoutCard : NSObject <NSSecureCoding> {
    void applePayBrandName;
    void fpanSuffix;
    void passSerialNumber;
    void passTypeIdentifier;
    void paymentNetwork;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
