
@interface PLSearchFetchUtilities : NSObject

+ (id)_fetchObjectsForEntityName:(id)arg1 predicate:(id)arg2 fetchLimit:(unsigned long long)arg3 photoLibrary:(id)arg4 error:(out id*)arg5;
+ (id)_searchRebuildEligibilityPredicateForEntityName:(id)arg1;
+ (id)fetchObjectsEligibleForSearchRebuildFromPhotoLibrary:(id)arg1 entityName:(id)arg2 fetchLimit:(unsigned long long)arg3;
+ (id)fetchObjectsWithinObjectIDs:(id)arg1 entityName:(id)arg2 fetchLimit:(unsigned long long)arg3 photoLibrary:(id)arg4 error:(out id*)arg5;
+ (id)searchIndexingEligibilityPredicateForEntityName:(id)arg1;

@end
