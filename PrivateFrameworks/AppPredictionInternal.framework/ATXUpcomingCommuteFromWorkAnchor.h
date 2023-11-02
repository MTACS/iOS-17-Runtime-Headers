
@interface ATXUpcomingCommuteFromWorkAnchor : ATXAnchor

+ (id)anchorOccurenceDateFromDuetEvent:(id)arg1;
+ (long long)anchorType;
+ (id)candidateQueryStartDateFromDuetEvent:(id)arg1;
+ (id)duetEventsPredicates;
+ (id)fetchAnchorOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (id)invalidationPredicateForContextStoreRegistration;
+ (bool)isActive;
+ (id)keyPathForContextStore;
+ (id)longDescription;
+ (id)predicateForContextStoreRegistration;
+ (id)sampleEvent;
+ (double)secondsOfInfluence;
+ (bool)shouldPredicateOnStartDate;
+ (bool)shouldProcessContextStoreNotification;
+ (Class)supportedDuetDataProviderClass;
+ (bool)usesContextStoreForRealTimeNotifications;

@end
