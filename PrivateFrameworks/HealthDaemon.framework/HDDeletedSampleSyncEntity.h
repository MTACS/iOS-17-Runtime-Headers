
@interface HDDeletedSampleSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2;
+ (bool)_insertObjectsFromCodableObjectCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)_predicateForSyncSession:(id)arg1;
+ (Class)_syncedSampleTypeClass;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;

@end
