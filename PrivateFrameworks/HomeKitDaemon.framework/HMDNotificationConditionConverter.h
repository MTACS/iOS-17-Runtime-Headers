
@interface HMDNotificationConditionConverter : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isTimePredicate:(id)arg1;
+ (id)_presencePredicatesFromPredicate:(id)arg1;
+ (id)_sunriseSunsetTimePeriodElementFromComparisonPredicate:(id)arg1;
+ (id)_timeOfDayTimePeriodElementFromComparisonPredicate:(id)arg1;
+ (id)_timePredicatesFromPredicate:(id)arg1;
+ (id)conditionsFromPredicate:(id)arg1;
+ (id)logCategory;
+ (id)negateOffsetDateComponents:(id)arg1;
+ (id)predicateFromPresenceCondition:(id)arg1;
+ (id)predicateFromTimePeriodCondition:(id)arg1;
+ (id)predicatesFromConditions:(id)arg1;
+ (id)presenceNotificationConditionFromPredicate:(id)arg1;
+ (id)timePeriodNotificationConditionFromPredicate:(id)arg1;

@end
