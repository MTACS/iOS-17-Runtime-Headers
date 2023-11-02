
@interface HMPredicateUtilities : NSObject

+ (bool)areOnlyHourAndMinuteSet:(id)arg1;
+ (id)audioAnalysisNotificationOptionsInPredicate:(id)arg1;
+ (id)bitwiseAndValueWithKeyPath:(id)arg1 inComparisonPredicate:(id)arg2 validValues:(long long)arg3;
+ (id)bitwiseAndValueWithKeyPath:(id)arg1 inPredicate:(id)arg2 validValues:(long long)arg3;
+ (bool)containsPresenceEvents:(id)arg1;
+ (id)personFamiliarityOptionsInComparisonPredicate:(id)arg1;
+ (id)rewritePredicateForClient:(id)arg1 home:(id)arg2;
+ (id)rewritePredicateForDaemon:(id)arg1;
+ (id)rewritePredicateForDaemon:(id)arg1 characteristicIsInvalid:(bool*)arg2;
+ (id)significantEventTypesInComparisonPredicate:(id)arg1;
+ (bool)validatePredicate:(id)arg1;

@end
