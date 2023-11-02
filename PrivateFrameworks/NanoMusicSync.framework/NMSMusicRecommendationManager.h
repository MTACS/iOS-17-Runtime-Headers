
@interface NMSMusicRecommendationManager : NSObject {
    unsigned long long  _artworkRetryAttempt;
    NSSet * _artworkRetryPlaylists;
    NSObject<OS_dispatch_source> * _artworkRetryTimer;
    bool  _hasFetchedInitialRecommendations;
    NMSInitialCloudLibraryImportObserver * _initialCloudLibraryImportObserver;
    NSObject<OS_dispatch_group> * _initialRecommendationsFetchGroup;
    NSObject<OS_dispatch_source> * _libraryRecommendationExpirationTimer;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _recommendations;
    bool  _wantsContentsUpdate;
}

@property (nonatomic) bool wantsContentsUpdate;

+ (bool)_shouldComputeLibraryRecommendations;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_deleteCachedArtworksWithTokens:(id)arg1;
- (id)_expirationDateForUpdateDate:(id)arg1 withOffsetDays:(long long)arg2;
- (id)_fetchAddedDateForContainer:(id)arg1;
- (void)_finishLoadingContentsWithResponse:(id)arg1;
- (void)_handleActiveAccountDidChangeNotification:(id)arg1;
- (void)_handleArtworksDidUpdateNotification:(id)arg1;
- (void)_handleMediaLibraryDidChangeNotification:(id)arg1;
- (void)_handleMediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg1;
- (void)_handleMusicLibraryContentsDidChangeNotification:(id)arg1;
- (void)_handlePairedDeviceDidBecomeActiveNotification:(id)arg1;
- (void)_handlePairingFinishedNotification:(id)arg1;
- (void)_handleRecommendationSelectionsDidChangeNotification:(id)arg1;
- (void)_handleRecommendationStoreContentsDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_importArtworkForPlaylists:(id)arg1;
- (void)_importArtworkIfNecessaryForObjectsIgnorePreviousCache:(bool)arg1;
- (void)_invalidateArtworkRetryTimer;
- (void)_invalidateLibraryRecommendationExpirationTimer;
- (bool)_isLibraryRecommendationExpired;
- (void)_notifyMusicRecommendationsDidUpdateNotification;
- (void)_persistUpdatedRecommendationsWithResponse:(id)arg1;
- (id)_recommendations;
- (void)_registerForPairingFinishedNotification;
- (void)_reloadLibraryRecommendations;
- (void)_reloadRecommendationContentsIfNecessary;
- (void)_reloadRecommendationsFromDefaultsWithCompletion:(id /* block */)arg1;
- (void)_removeLegacyRecommendationsDefaultsIfNecessary;
- (void)_removePreviousCachedRecommendationsResponses;
- (void)_removePreviousRecommendationDefaults;
- (void)_retryFailedArtworkImportsIfNecessary;
- (void)_scheduleNextLibraryRecommendationReloadIfNecessary;
- (void)_setArtworkImageCache:(id)arg1 withToken:(id)arg2;
- (id)_sortedContainersBasedOnRecency;
- (void)_startArtworkRetryTimer;
- (void)_unregisterForPairingFinishedNotification;
- (bool)_updateRecommendationsSelections;
- (bool)_updateWithRecommendations:(id)arg1;
- (void)dealloc;
- (void)fetchRecommendationsWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasSelectedRecommendationWithIdentifier:(id)arg1;
- (id)init;
- (void)nms_deselectRecommendationIfNecessaryForModelObject:(id)arg1;
- (void)nms_fetchRecentMusicRecommendationWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)nms_fetchSelectedRecommendationSectionTypesForModelObject:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)persistRecommendationsSelections:(id)arg1;
- (void)setWantsContentsUpdate:(bool)arg1;
- (bool)wantsContentsUpdate;

@end
