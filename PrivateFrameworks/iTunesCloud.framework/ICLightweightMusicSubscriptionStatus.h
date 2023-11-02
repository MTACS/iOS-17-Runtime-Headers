
@interface ICLightweightMusicSubscriptionStatus : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _eligibleOffers;
    NSDate * _expirationDate;
    long long  _reasonType;
    long long  _statusType;
}

@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly, copy) NSArray *eligibleOffers;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) long long reasonType;
@property (nonatomic, readonly) long long statusType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithExtendedSubscriptionStatus:(id)arg1;
- (unsigned long long)capabilities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)eligibleOffers;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (bool)hasCapability:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)reasonType;
- (long long)statusType;

@end
