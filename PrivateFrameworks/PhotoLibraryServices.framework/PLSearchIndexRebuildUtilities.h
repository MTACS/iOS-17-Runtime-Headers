
@interface PLSearchIndexRebuildUtilities : NSObject

+ (bool)_deviceLocaleDidChange:(id)arg1;
+ (bool)_featureFlagsDidChange:(id)arg1;
+ (bool)_resetSearchIndexRebuildStateForEntityName:(id)arg1 photoLibrary:(id)arg2;
+ (bool)_sceneTaxonomySHAsDidChange:(id)arg1 searchIndexInfo:(id)arg2;
+ (id)_searchIndexRebuildStateKeyPathForEntityName:(id)arg1;
+ (bool)_searchIndexVersionDidChange:(id)arg1;
+ (bool)_spotlightDidRequestRebuild:(id)arg1;
+ (unsigned long long)searchIndexRebuildReasonsForPhotoLibrary:(id)arg1 sceneTaxonomyDigests:(id)arg2;
+ (unsigned long long)searchIndexRebuildTypeFromRebuildReasons:(unsigned long long)arg1;
+ (bool)setSearchIndexNeedsRebuildForPhotoLibrary:(id)arg1;
+ (void)setSearchIndexRebuildCompleteForManagedObjects:(id)arg1 entityName:(id)arg2;

@end
