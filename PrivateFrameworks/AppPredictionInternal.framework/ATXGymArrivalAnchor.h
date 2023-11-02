
@interface ATXGymArrivalAnchor : ATXAnchor

+ (long long)anchorType;
+ (id)duetEventsPredicates;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (bool)isActive;
+ (id)longDescription;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)arg1 enterSelector:(SEL)arg2 exitSelector:(SEL)arg3;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (bool)shouldPredicateOnStartDate;
+ (bool)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (void)unregisterForNotificationsWithoutUsingContextStoreForObserver:(id)arg1;
+ (bool)usesContextStoreForRealTimeNotifications;

@end
