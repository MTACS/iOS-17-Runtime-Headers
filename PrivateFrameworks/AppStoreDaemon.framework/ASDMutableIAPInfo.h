
@interface ASDMutableIAPInfo : ASDIAPInfo

@property (nonatomic, retain) NSNumber *adamId;
@property (nonatomic, retain) NSNumber *appAdamId;
@property (nonatomic) bool autoRenewStatus;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSNumber *expirationTimestamp;
@property (nonatomic) bool hasUsedFreeOffer;
@property (nonatomic) bool hasUsedIntroPricingOffer;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) NSNumber *lastModifiedTimestamp;
@property (nonatomic, retain) NSDate *purchaseDate;
@property (nonatomic, retain) NSNumber *purchaseTimestamp;
@property (nonatomic, retain) NSString *subscriptionFamilyId;
@property (nonatomic) unsigned char type;

- (void)setExpirationTimestamp:(id)arg1;
- (void)setLastModifiedTimestamp:(id)arg1;
- (void)setPurchaseTimestamp:(id)arg1;

@end
