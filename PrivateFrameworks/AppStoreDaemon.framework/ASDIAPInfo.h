
@interface ASDIAPInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSNumber * _adamId;
    NSNumber * _appAdamId;
    bool  _autoRenewStatus;
    NSDate * _expirationDate;
    bool  _hasUsedFreeOffer;
    bool  _hasUsedIntroPricingOffer;
    NSDate * _lastModifiedDate;
    NSDate * _purchaseDate;
    NSString * _subscriptionFamilyId;
    unsigned char  _type;
}

@property (nonatomic, retain) NSNumber *adamId;
@property (nonatomic, retain) NSNumber *appAdamId;
@property (nonatomic) bool autoRenewStatus;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, readonly) NSNumber *expirationTimestamp;
@property (nonatomic) bool hasUsedFreeOffer;
@property (nonatomic) bool hasUsedIntroPricingOffer;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSNumber *lastModifiedTimestamp;
@property (nonatomic, retain) NSDate *purchaseDate;
@property (nonatomic, readonly) NSNumber *purchaseTimestamp;
@property (nonatomic, retain) NSString *subscriptionFamilyId;
@property (nonatomic) unsigned char type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adamId;
- (id)appAdamId;
- (bool)autoRenewStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)expirationTimestamp;
- (bool)hasUsedFreeOffer;
- (bool)hasUsedIntroPricingOffer;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastModifiedDate;
- (id)lastModifiedTimestamp;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)purchaseDate;
- (id)purchaseTimestamp;
- (void)setAdamId:(id)arg1;
- (void)setAppAdamId:(id)arg1;
- (void)setAutoRenewStatus:(bool)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHasUsedFreeOffer:(bool)arg1;
- (void)setHasUsedIntroPricingOffer:(bool)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setPurchaseDate:(id)arg1;
- (void)setSubscriptionFamilyId:(id)arg1;
- (void)setType:(unsigned char)arg1;
- (id)subscriptionFamilyId;
- (unsigned char)type;

@end
