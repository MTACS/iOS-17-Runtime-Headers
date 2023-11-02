
@interface FHPeerPaymentForecastingSignalOverallSpend : FHPeerPaymentForecastingSignal {
    NSDecimalNumber * _amount;
    long long  _direction;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic) long long direction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)description;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)setDirection:(long long)arg1;

@end
