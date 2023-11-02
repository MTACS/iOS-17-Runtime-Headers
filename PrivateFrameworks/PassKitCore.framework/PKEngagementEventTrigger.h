
@interface PKEngagementEventTrigger : NSObject

+ (id)eventWithType:(id)arg1;
+ (void)fireAccountAddedEvent;
+ (void)fireAccountRemovedEvent;
+ (void)fireAccountUpdatedEvent;
+ (void)fireApplePayContextChangedEvent;
+ (void)fireCurrentLocaleChangedEvent;
+ (void)fireDCINotificationForMarketAddedEvent;
+ (void)fireDayChangedEvent;
+ (bool)fireEngagementEventNamed:(id)arg1;
+ (void)fireExpressPassInfoChangedEvent;
+ (void)fireFamilyCircleChangedEvent;
+ (void)fireFeatureApplicationAddedEvent;
+ (void)fireFeatureApplicationRemovedEvent;
+ (void)fireFeatureApplicationUpdatedEvent;
+ (void)fireLocationChangedEvent;
+ (void)fireOpenLoopUpgradeNotificationForMarketAddedEvent;
+ (void)firePassAddedEvent;
+ (void)firePassRemovedEvent;
+ (void)firePeerPaymentAccountUpdatedEvent;
+ (void)fireRenotifyNotificationForMarketAddedEvent;
+ (void)fireTransactionsUpdatedEvent;
+ (id)metrics;

@end
