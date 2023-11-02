
@interface EDAMSubscriptionInfo : FATObject {
    NSString * _currentSku;
    NSNumber * _currentTime;
    NSNumber * _currentlySubscribed;
    NSNumber * _itunesReceiptRequested;
    NSSet * _serviceLevelsEligibleForPurchase;
    NSNumber * _subscriptionCancellationPending;
    NSNumber * _subscriptionExpirationDate;
    NSNumber * _subscriptionPending;
    NSNumber * _subscriptionRecurring;
    NSNumber * _validUntil;
}

@property (nonatomic, retain) NSString *currentSku;
@property (nonatomic, retain) NSNumber *currentTime;
@property (nonatomic, retain) NSNumber *currentlySubscribed;
@property (nonatomic, retain) NSNumber *itunesReceiptRequested;
@property (nonatomic, retain) NSSet *serviceLevelsEligibleForPurchase;
@property (nonatomic, retain) NSNumber *subscriptionCancellationPending;
@property (nonatomic, retain) NSNumber *subscriptionExpirationDate;
@property (nonatomic, retain) NSNumber *subscriptionPending;
@property (nonatomic, retain) NSNumber *subscriptionRecurring;
@property (nonatomic, retain) NSNumber *validUntil;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)currentSku;
- (id)currentTime;
- (id)currentlySubscribed;
- (id)itunesReceiptRequested;
- (id)serviceLevelsEligibleForPurchase;
- (void)setCurrentSku:(id)arg1;
- (void)setCurrentTime:(id)arg1;
- (void)setCurrentlySubscribed:(id)arg1;
- (void)setItunesReceiptRequested:(id)arg1;
- (void)setServiceLevelsEligibleForPurchase:(id)arg1;
- (void)setSubscriptionCancellationPending:(id)arg1;
- (void)setSubscriptionExpirationDate:(id)arg1;
- (void)setSubscriptionPending:(id)arg1;
- (void)setSubscriptionRecurring:(id)arg1;
- (void)setValidUntil:(id)arg1;
- (id)subscriptionCancellationPending;
- (id)subscriptionExpirationDate;
- (id)subscriptionPending;
- (id)subscriptionRecurring;
- (id)validUntil;

@end
