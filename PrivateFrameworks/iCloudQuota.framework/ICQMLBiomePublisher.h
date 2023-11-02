
@interface ICQMLBiomePublisher : NSObject

+ (id)_createEventWithMlServerScore:(id)arg1 totalQuota:(id)arg2 totalUsed:(id)arg3 totalAvailable:(id)arg4 bundleQuotaInBytes:(id)arg5 commerceQuotaInBytes:(id)arg6 iCloudSubscriptionEventType:(int)arg7 displayEntry:(int)arg8;
+ (id)_createEventWithQuotaInfoFrom:(id)arg1 withType:(int)arg2;
+ (void)_publishEvent:(id)arg1;
+ (void)publishEventWithFetchOffersResponse:(id)arg1;
+ (void)publishEventWithPushNotification:(id)arg1;
+ (void)publishEventWithRefreshOfferDetailsResponse:(id)arg1;
+ (void)publishOfferBuyActionEvent;
+ (void)publishOfferDisplayActionEvent;
+ (void)publishOfferDisplayActionEventWithBundleId:(id)arg1;

@end
