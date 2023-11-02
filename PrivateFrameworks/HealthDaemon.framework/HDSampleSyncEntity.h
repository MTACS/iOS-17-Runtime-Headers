
@interface HDSampleSyncEntity : HDDataSyncEntity

+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (id)_predicateForSampleAgeInSyncSession:(id)arg1 sampleTypeClass:(Class)arg2;
+ (id)_predicateForSyncSession:(id)arg1;
+ (Class)_syncedSampleTypeClass;
+ (bool)supportsSpeculativeNanoSyncChanges;

@end
