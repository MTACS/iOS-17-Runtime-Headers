
@interface FCBundleEntitlementsProviderResult : NSObject {
    NSString * _bundlePurchaseID;
    bool  _inTrialPeriod;
    NSNumber * _initialPurchaseTimestamp;
    bool  _isAmplifyUser;
    bool  _isPurchaser;
    NSString * _servicesBundlePurchaseID;
    NSString * _vendorAdHocOfferID;
}

@property (nonatomic, readonly) NSString *bundlePurchaseID;
@property (nonatomic, readonly) bool inTrialPeriod;
@property (nonatomic, readonly) NSNumber *initialPurchaseTimestamp;
@property (nonatomic, readonly) bool isAmplifyUser;
@property (nonatomic, readonly) bool isPurchaser;
@property (nonatomic, readonly) NSString *servicesBundlePurchaseID;
@property (nonatomic, readonly) NSString *vendorAdHocOfferID;

- (void).cxx_destruct;
- (id)bundlePurchaseID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)inTrialPeriod;
- (id)initWithBundlePurchaseID:(id)arg1 inTrialPeriod:(bool)arg2 isPurchaser:(bool)arg3 servicesBundlePurchaseID:(id)arg4 isAmplifyUser:(bool)arg5 initialPurchaseTimestamp:(id)arg6 vendorAdHocOfferID:(id)arg7;
- (id)initialPurchaseTimestamp;
- (bool)isAmplifyUser;
- (bool)isPurchaser;
- (id)servicesBundlePurchaseID;
- (id)vendorAdHocOfferID;

@end
