
@interface PLSearchIndexStatusManager : NSObject

+ (bool)_saveSearchIndexingRebuildInfo:(id)arg1 library:(id)arg2;
+ (id)_searchIndexStatusFilePathForPhotoLibrary:(id)arg1;
+ (id)_searchIndexingStatusPlistForLibrary:(id)arg1;
+ (bool)_writeSearchIndexingStatusPlistToDisk:(id)arg1 library:(id)arg2;
+ (unsigned long long)currentSearchIndexVersion;
+ (id)currentSearchIndexingSyncTokenForLibrary:(id)arg1;
+ (bool)isSearchIndexingStateInSyncWithSpotlightClientState:(id)arg1;
+ (id)lastSearchIndexingSyncTokenForLibrary:(id)arg1;
+ (bool)saveCurrentSearchIndexInfoForPhotoLibrary:(id)arg1 sceneTaxonomyDigests:(id)arg2;
+ (bool)saveSearchIndexIsRebuilding:(bool)arg1 library:(id)arg2;
+ (bool)saveSearchIndexingSyncToken:(id)arg1 library:(id)arg2;
+ (bool)saveSpotlightRequestedRebuildForPhotoLibrary:(id)arg1;
+ (bool)searchIndexIsRebuildingForLibrary:(id)arg1;
+ (id)searchIndexingRebuildInfoForLibrary:(id)arg1;

@end
