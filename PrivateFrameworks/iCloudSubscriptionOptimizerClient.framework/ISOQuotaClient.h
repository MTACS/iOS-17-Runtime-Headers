
@interface ISOQuotaClient : NSObject

+ (id)shared;

- (void)clearNotificationState:(id /* block */)arg1;
- (id)failsafeDelayedOfferJsonContext;
- (void)isNotificationPending:(id /* block */)arg1;
- (void)logFailsafeEvent:(id)arg1;
- (void)newOffer:(id)arg1 andCallback:(id /* block */)arg2;
- (id)parseDelayedOffer:(id)arg1;
- (id)parseDelayedOfferFromJson:(id)arg1;
- (id)parseNotification:(id)arg1;

@end
