
@interface FHPeerPaymentForecastingSignalPersonWithAmount : FHPeerPaymentForecastingSignalPerson {
    NSDecimalNumber * _amount;
}

@property (nonatomic, copy) NSDecimalNumber *amount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAmount:(id)arg1;

@end
