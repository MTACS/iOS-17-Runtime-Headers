
@interface FCSubscriptionEntitlement : NSObject {
    NSNumber * _appAdamID;
    NSString * _chargeCurrencyCode;
    NSDate * _expiryDate;
    NSNumber * _inAppAdamID;
    NSNumber * _initialPurchaseTimestamp;
    bool  _isAmplifyUser;
    bool  _isPurchaser;
    bool  _isTrialPeriod;
    bool  _newsAppPurchase;
    NSNumber * _serviceBeginsTimestamp;
    NSString * _servicesBundleAdamID;
    NSDate * _startDate;
    NSString * _vendorAdHocOfferID;
}

@property (nonatomic, readonly) NSNumber *appAdamID;
@property (nonatomic, readonly) NSString *chargeCurrencyCode;
@property (nonatomic, readonly) NSDate *expiryDate;
@property (nonatomic, readonly) NSNumber *inAppAdamID;
@property (nonatomic, readonly) NSNumber *initialPurchaseTimestamp;
@property (nonatomic, readonly) bool isAmplifyUser;
@property (nonatomic, readonly) bool isPurchaser;
@property (nonatomic, readonly) bool isTrialPeriod;
@property (getter=isNewsAppPurchase, nonatomic, readonly) bool newsAppPurchase;
@property (nonatomic, readonly) NSNumber *serviceBeginsTimestamp;
@property (nonatomic, readonly) NSString *servicesBundleAdamID;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *vendorAdHocOfferID;

- (void).cxx_destruct;
- (id)appAdamID;
- (id)chargeCurrencyCode;
- (id)description;
- (id)expiryDate;
- (id)inAppAdamID;
- (id)initWithASDEntitlement:(id)arg1;
- (id)initWithAppAdamID:(id)arg1 inAppAdamID:(id)arg2 chargeCurrencyCode:(id)arg3 newsAppPurchase:(bool)arg4 isTrialPeriod:(bool)arg5 isPurchaser:(bool)arg6 servicesBundleAdamID:(id)arg7 isAmplifyUser:(bool)arg8 startDate:(id)arg9 expiryDate:(id)arg10 initialPurchaseTimestamp:(id)arg11 serviceBeginsTimestamp:(id)arg12 vendorAdHocOfferID:(id)arg13;
- (id)initialPurchaseTimestamp;
- (bool)isAmplifyUser;
- (bool)isNewsAppPurchase;
- (bool)isPurchaser;
- (bool)isTrialPeriod;
- (id)serviceBeginsTimestamp;
- (id)servicesBundleAdamID;
- (id)startDate;
- (id)vendorAdHocOfferID;

@end
