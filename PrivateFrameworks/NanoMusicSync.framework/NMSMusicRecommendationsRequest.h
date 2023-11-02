
@interface NMSMusicRecommendationsRequest : NSObject {
    NSData * _cachedData;
    NSDictionary * _unarchivedCombinedResponsesDictionary;
    bool  _useCachedDataOnly;
}

@property (nonatomic, retain) NSData *cachedData;
@property (nonatomic, retain) NSDictionary *unarchivedCombinedResponsesDictionary;
@property (nonatomic) bool useCachedDataOnly;

+ (id)_recentMusicDirectory;

- (void).cxx_destruct;
- (void)_continueToHeavyRotationRequestWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToLegacyEditorialRequestWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToLegacyForYouRequestWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToLegacyLibraryImportWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToLegacyLookupWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToLibraryImportWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToLibraryRecentMusicRecommedationsWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToProcessResultsWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToStarterPackMultiplexRequestWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_continueToStarterPackRoomRequestWithURL:(id)arg1 context:(id)arg2 queue:(id)arg3 responseHandler:(id /* block */)arg4;
- (void)_finishWithContext:(id)arg1 queue:(id)arg2 responseHandler:(id /* block */)arg3;
- (id)_heavyRotationCacheURL;
- (void)_performEditorialBrowseRequestWithCompletion:(id /* block */)arg1;
- (void)_performForYouRequestWithCompletion:(id /* block */)arg1;
- (void)_performHeavyRotationRequestWithCompletion:(id /* block */)arg1;
- (void)_performLegacyLibraryImportChangeRequestWithModelObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)_performLegacyLookupRequestWithModelObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)_performLibraryImportChangeRequestWithModelObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)_performLibraryRecentMusicRequestWithCompletion:(id /* block */)arg1;
- (void)_performStarterPackMultiplexRequestWithCompletion:(id /* block */)arg1;
- (void)_performStarterPackRoomRequestWithURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_starterPackMultiplexCacheURL;
- (id)_starterPackRoomCacheURL;
- (id)_unarchivedCombinedResponsesDictionary;
- (void)_writeData:(id)arg1 toURL:(id)arg2;
- (id)cachedData;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (void)setCachedData:(id)arg1;
- (void)setUnarchivedCombinedResponsesDictionary:(id)arg1;
- (void)setUseCachedDataOnly:(bool)arg1;
- (id)unarchivedCombinedResponsesDictionary;
- (bool)useCachedDataOnly;

@end
