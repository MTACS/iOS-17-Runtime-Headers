
@interface PKPaymentSetupRequest : NSObject <NSSecureCoding> {
    PKPaymentSetupConfiguration * _configuration;
    NSArray * _paymentSetupFeatures;
}

@property (nonatomic, retain) PKPaymentSetupConfiguration *configuration;
@property (nonatomic, retain) NSArray *paymentSetupFeatures;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)paymentSetupFeatures;
- (void)setConfiguration:(id)arg1;
- (void)setPaymentSetupFeatures:(id)arg1;

@end
