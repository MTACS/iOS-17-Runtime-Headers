
@interface HDBinarySampleSyncEntity : HDSampleSyncEntity

+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (bool)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)_objectWithCodable:(id)arg1 collection:(id)arg2;
+ (Class)_syncedSampleTypeClass;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;

@end
