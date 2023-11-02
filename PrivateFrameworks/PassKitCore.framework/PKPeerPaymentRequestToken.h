
@interface PKPeerPaymentRequestToken : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _deviceScoreIdentifier;
    NSDate * _expiryDate;
    NSString * _requestToken;
}

@property (nonatomic, readonly, copy) NSUUID *deviceScoreIdentifier;
@property (nonatomic, readonly, copy) NSDate *expiryDate;
@property (nonatomic, readonly, copy) NSString *requestToken;

+ (id)informalRequestToken;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceScoreIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestToken:(id)arg1 deviceScoreIdentifier:(id)arg2;
- (id)initWithRequestToken:(id)arg1 deviceScoreIdentifier:(id)arg2 expiryDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerPaymentRequestToken:(id)arg1;
- (bool)isInformalRequestToken;
- (id)requestToken;

@end
