
@interface HDCDASampleSyncEntity : HDSampleSyncEntity

+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (id)_objectWithCodable:(id)arg1 collection:(id)arg2;
+ (Class)_syncedSampleTypeClass;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (bool)supportsSpeculativeNanoSyncChanges;
+ (id)syncEntityIdentifier;

@end
