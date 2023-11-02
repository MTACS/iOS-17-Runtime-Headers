
@interface ICQEngagementReporter : NSObject

+ (id)_createOpportunityBubbleFrom:(id)arg1 bundleID:(id)arg2;
+ (id)_eventNameForEngagementType:(long long)arg1;
+ (id)_placementDictionary;
+ (void)_sendBubbleDisplayedEventFor:(id)arg1;
+ (void)_sendImpressionEventWithName:(id)arg1 bundleID:(id)arg2;
+ (void)_sendSubscriptionChangedEvent;
+ (void)fetchBubbleContentWithBundleID:(id)arg1 completion:(id /* block */)arg2;
+ (void)sendEventFor:(long long)arg1 withBundleID:(id)arg2 link:(id)arg3;
+ (void)shouldShowOpportunityBubbleWithBundleID:(id)arg1 completion:(id /* block */)arg2;

@end
