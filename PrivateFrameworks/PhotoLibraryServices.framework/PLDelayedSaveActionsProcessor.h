
@interface PLDelayedSaveActionsProcessor : NSObject {
    NSObject<OS_dispatch_queue> * _coreDuetCallback;
    PLLibraryServicesManager * _libraryServicesManager;
}

- (void).cxx_destruct;
- (void)_deleteUUIDs:(id)arg1 fromCoreDuetStreams:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAlbumCountsAndDateRangeUpdates:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAlbumWidgetTimelineReload:(bool)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAssetsForDuetDelete:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAssetsForFileSystemPersistency:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAssetsForWidgetFavoriteAlbumRemoval:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAssetsForWidgetUserAlbumRemoval:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7;
- (void)_processDelayedDupeAnalysisNormalInserts:(id)arg1 cloudInserts:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedFeaturedContentUpdateAndWidgetTimelineReload:(bool)arg1 withPersonUUIDs:(id)arg2 shouldReloadWidgetTimeline:(bool)arg3 library:(id)arg4 transaction:(id)arg5;
- (void)_processDelayedForYouWidgetTimelineReload:(bool)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedImportSessionCountsAndDateRangeUpdates:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedLibraryScopeParticipantsUpdate:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedLibraryScopeRulesUpdate:(bool)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedMemoriesAssetUpdate:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedMemoriesForDuetDelete:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedMomentChangesWithTransaction:(id)arg1;
- (void)_processDelayedSearchIndexUpdates:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedWallpaperSuggestionReload:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (id)initWithLibraryServicesManager:(id)arg1;
- (void)processDelayedDeletionsFromChangeHubEvent:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)processDelayedMomentGeneratorSaveActionsFromDetail:(id)arg1;
- (void)processDelayedSaveActionsDetail:(id)arg1 withPhotoLibrary:(id)arg2 transaction:(id)arg3;

@end
