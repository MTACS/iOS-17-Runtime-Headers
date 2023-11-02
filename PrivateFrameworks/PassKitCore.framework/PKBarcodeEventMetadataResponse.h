
@interface PKBarcodeEventMetadataResponse : NSObject <NSSecureCoding> {
    NSData * _paymentInformation;
}

@property (nonatomic, copy) NSData *paymentInformation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentInformation:(id)arg1;
- (id)paymentInformation;
- (void)setPaymentInformation:(id)arg1;

@end
