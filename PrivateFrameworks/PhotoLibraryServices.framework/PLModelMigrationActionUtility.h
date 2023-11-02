
@interface PLModelMigrationActionUtility : NSObject

+ (long long)processAssetWithAction:(id)arg1 managedObjectContext:(id)arg2 fetchRequest:(id)arg3 useObjectIDResumeMarker:(bool)arg4 error:(id*)arg5 processingBlock:(id /* block */)arg6;
+ (long long)removeFromDuplicatesWithAction:(id)arg1 managedObjectContext:(id)arg2 fetchRequest:(id)arg3 requiresTokenReset:(bool)arg4 error:(id*)arg5;
+ (long long)removeOrphanedObjectsWithAction:(id)arg1 managedObjectContext:(id)arg2 fetchRequest:(id)arg3 error:(id*)arg4;
+ (long long)resetDuplicateProcessingWithAction:(id)arg1 managedObjectContext:(id)arg2 error:(id*)arg3;
+ (long long)updateExtendedAttributesWithAction:(id)arg1 managedObjectContext:(id)arg2 fetchRequest:(id)arg3 useObjectIDResumeMarker:(bool)arg4 error:(id*)arg5;

@end
