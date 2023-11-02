
@interface HDECGSampleSyncEntity : HDSampleSyncEntity

+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (id)_objectWithCodable:(id)arg1 collection:(id)arg2;
+ (id)_predicateForSyncSession:(id)arg1;
+ (Class)_syncedSampleTypeClass;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;
+ (id)syncEntityIdentifier;

@end
