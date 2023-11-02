
@interface ATXIdleTimeEndAnchor : ATXAnchor

+ (long long)anchorType;
+ (id)duetEventsPredicates;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (bool)isActive;
+ (id)keyPathForContextStore;
+ (id)longDescription;
+ (double)minimumSecondsForBeingIdle;
+ (id)predicateForContextStoreRegistration;
+ (void)registerForNotificationsWithoutUsingContextStoreForObserver:(id)arg1 enterSelector:(SEL)arg2 exitSelector:(SEL)arg3;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (bool)shouldPredicateOnStartDate;
+ (bool)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (bool)usesContextStoreForRealTimeNotifications;

@end
