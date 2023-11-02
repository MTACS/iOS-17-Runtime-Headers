
@interface EDAMNoncancelableSubscription : FATObject {
    NSString * _amazonPurchaseToken;
    NSString * _amazonUserId;
    NSString * _currency;
    NSString * _itunesOriginalTransactionId;
    NSString * _itunesReceiptData;
    NSNumber * _nextPaymentDue;
    NSString * _premiumCommerceService;
    NSNumber * _premiumLockUntil;
    NSString * _premiumServiceSku;
    NSNumber * _premiumServiceStatus;
    NSNumber * _subscriptionId;
    NSNumber * _unitPrice;
    EDAMUser * _user;
}

@property (nonatomic, retain) NSString *amazonPurchaseToken;
@property (nonatomic, retain) NSString *amazonUserId;
@property (nonatomic, retain) NSString *currency;
@property (nonatomic, retain) NSString *itunesOriginalTransactionId;
@property (nonatomic, retain) NSString *itunesReceiptData;
@property (nonatomic, retain) NSNumber *nextPaymentDue;
@property (nonatomic, retain) NSString *premiumCommerceService;
@property (nonatomic, retain) NSNumber *premiumLockUntil;
@property (nonatomic, retain) NSString *premiumServiceSku;
@property (nonatomic, retain) NSNumber *premiumServiceStatus;
@property (nonatomic, retain) NSNumber *subscriptionId;
@property (nonatomic, retain) NSNumber *unitPrice;
@property (nonatomic, retain) EDAMUser *user;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)amazonPurchaseToken;
- (id)amazonUserId;
- (id)currency;
- (id)itunesOriginalTransactionId;
- (id)itunesReceiptData;
- (id)nextPaymentDue;
- (id)premiumCommerceService;
- (id)premiumLockUntil;
- (id)premiumServiceSku;
- (id)premiumServiceStatus;
- (void)setAmazonPurchaseToken:(id)arg1;
- (void)setAmazonUserId:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setItunesOriginalTransactionId:(id)arg1;
- (void)setItunesReceiptData:(id)arg1;
- (void)setNextPaymentDue:(id)arg1;
- (void)setPremiumCommerceService:(id)arg1;
- (void)setPremiumLockUntil:(id)arg1;
- (void)setPremiumServiceSku:(id)arg1;
- (void)setPremiumServiceStatus:(id)arg1;
- (void)setSubscriptionId:(id)arg1;
- (void)setUnitPrice:(id)arg1;
- (void)setUser:(id)arg1;
- (id)subscriptionId;
- (id)unitPrice;
- (id)user;

@end
