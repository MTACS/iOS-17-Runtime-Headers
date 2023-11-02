
@interface SPRPINParameter : NSObject <NSSecureCoding> {
    NSData * _digest;
    NSString * _pinToken;
    double  _transactionDataLifetime;
}

@property (nonatomic, readonly, copy) NSData *digest;
@property (nonatomic, readonly, copy) NSString *pinToken;
@property (nonatomic, readonly) double transactionDataLifetime;

+ (double)defaultTransactionDataLifetime;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)digest;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigest:(id)arg1 pinToken:(id)arg2;
- (id)initWithDigest:(id)arg1 pinToken:(id)arg2 transactionDataLifetime:(double)arg3;
- (id)pinToken;
- (double)transactionDataLifetime;

@end
