
@interface FHPeerPaymentForecastingSignalPerson : FHPeerPaymentForecastingSignal {
    long long  _direction;
    NSString * _personId;
}

@property (nonatomic) long long direction;
@property (nonatomic, copy) NSString *personId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)personId;
- (void)setDirection:(long long)arg1;
- (void)setPersonId:(id)arg1;

@end
