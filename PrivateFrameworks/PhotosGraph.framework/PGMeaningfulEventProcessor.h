
@interface PGMeaningfulEventProcessor : NSObject

+ (id)_legacyMeaningResultForResult:(id)arg1 requiredCriteriaByIdentifier:(id)arg2;
+ (id)_postProcessBirthdaysWithResults:(id)arg1 forMoment:(id)arg2;
+ (id)_postProcessResults:(id)arg1 forMoment:(id)arg2;
+ (id)processRequiredCriteria:(id)arg1 forMoment:(id)arg2 meaningfulEventProcessorCache:(id)arg3;

@end
