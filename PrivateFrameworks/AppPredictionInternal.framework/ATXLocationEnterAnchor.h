
@interface ATXLocationEnterAnchor : ATXAnchor

+ (long long)anchorType;
+ (id)duetEventsPredicates;
+ (bool)isActive;
+ (id)keyPathForContextStore;
+ (id)longDescription;
+ (id)predicateForContextStoreRegistration;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)arg1 enterSelector:(SEL)arg2 exitSelector:(SEL)arg3;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (bool)shouldPredicateOnStartDate;
+ (bool)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)arg1;
+ (bool)usesContextStoreForRealTimeNotifications;

@end
