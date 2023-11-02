
@interface HDDataSyncUtilities : NSObject

+ (Class)deletedSampleEntityClass;
+ (Class)deletedSampleSyncEntityClass;
+ (id)generateCodableObjectCollectionsForEntityClass:(Class)arg1 predicate:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)insertDeletedObjectsFromCodableObjectCollection:(id)arg1 syncEntityClass:(Class)arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (bool)insertObjectsFromCodableObjectCollection:(id)arg1 syncEntityClass:(Class)arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (Class)medicationDoseEventSyncEntityClass;
+ (id)provenanceFromCollection:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;

@end
