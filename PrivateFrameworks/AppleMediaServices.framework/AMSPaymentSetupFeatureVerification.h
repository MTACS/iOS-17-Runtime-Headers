
@interface AMSPaymentSetupFeatureVerification : NSObject {
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isPaymentSetupFeatureSupportedWithError:(id*)arg1;
- (id)performPaymentSetupFeatureLookup;
- (void)setIdentifier:(id)arg1;

@end
