
@interface PGMemoryFeatureBlocking : NSObject

+ (id)_bestAddressNodeAsCollectionInMomentNodeAsCollection:(id)arg1;
+ (id)_blockableDateFeatureForFeatureNodes:(id)arg1 momentNodes:(id)arg2;
+ (id)_blockableDateIntervalFeatureForFeatureNodes:(id)arg1 momentNodes:(id)arg2 memoryCategory:(unsigned long long)arg3;
+ (id)_blockableHolidayFeatureForFeatureNodes:(id)arg1 momentNodes:(id)arg2;
+ (id)_blockableLocationFeatureForFeatureNodes:(id)arg1;
+ (id)_blockableLocationFeatureForFeatureNodes:(id)arg1 momentNodes:(id)arg2;
+ (id)_blockableLocationFeatureForMomentNodes:(id)arg1;
+ (id)_blockablePersonFeatureForFeatureNodes:(id)arg1 momentNodes:(id)arg2;
+ (id)_blockablePetFeatureForFeatureNodes:(id)arg1 momentNodes:(id)arg2;
+ (id)_momentNodesWithBlockedFeatureInGraph:(id)arg1 areaNamesWithNegativeFeedback:(id)arg2 holidayNamesWithNegativeFeedback:(id)arg3 datesWithNegativeFeedback:(id)arg4 personUUIDsWithNegativeFeedback:(id)arg5 locationsWithNegativeFeedback:(id)arg6 loggingConnection:(id)arg7 progressReporter:(id)arg8;
+ (id)_prominentPersonNodeAsCollectionInMomentNodeAsCollection:(id)arg1 withPersonNodes:(id)arg2 maximumNumberOfPersonsAllowed:(unsigned long long)arg3 minimumPresenceThreshold:(double)arg4 maximumOthersPresenceThreshold:(double)arg5;
+ (id)blockableFeaturesForFeatureNodes:(id)arg1 momentNodes:(id)arg2 memoryCategory:(unsigned long long)arg3;
+ (id)momentNodesWithBlockedFeatureInGraph:(id)arg1 userFeedbackCalculator:(id)arg2 loggingConnection:(id)arg3 progressReporter:(id)arg4;

@end
