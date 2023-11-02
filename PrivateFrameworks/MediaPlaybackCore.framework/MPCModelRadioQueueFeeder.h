
@interface MPCModelRadioQueueFeeder : MPQueueFeeder <ICEnvironmentMonitorObserver, MPCQueueControllerBehaviorMusicDataSource, MPRTCReportingItemSessionContaining> {
    unsigned long long  _backgroundTaskIdentifier;
    unsigned long long  _backgroundTasks;
    MPAVItem * _currentItem;
    bool  _hasReachedTracklistEnd;
    bool  _hasSignedOut;
    NSString * _lastCleanPlayedIdentifier;
    NSString * _lastPlayedIdentifier;
    MPCModelRadioPersonalizationResponse * _lastResponse;
    bool  _mayHaveRestrictedContent;
    bool  _needsSectionUpdate;
    ICUserIdentityStore * _observedIdentityStore;
    MPCModelRadioPlaybackContext * _playbackContext;
    MPCModelRadioPlaybackQueue * _playbackQueue;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    long long  _queueGeneration;
    <MPMutableIdentifierListSection> * _section;
    NSString * _siriAssetInfo;
    ICStoreRequestContext * _storeRequestContext;
    bool  _supportsLoadingAdditionalItems;
}

@property (nonatomic, readonly) bool containsLiveStream;
@property (nonatomic, readonly) bool containsRadioContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly) Class superclass;

+ (id)sharedQueue;

- (void).cxx_destruct;
- (void)_allowCellularStreamingDidChangeNotification:(id)arg1;
- (void)_beginBackgroundTaskAssertion;
- (void)_beginObservingIdentityStoreForSignOut;
- (id)_defaultGetTracksRequestWithContext:(id)arg1 radioStation:(id)arg2;
- (void)_detectSignOutForIdentityStore:(id)arg1;
- (void)_detectSignOutForIdentityStoreChangeNotification:(id)arg1;
- (void)_endBackgroundTaskAssertion;
- (void)_endObservingIdentityStoreForSignOut;
- (id)_errorForRequest:(id)arg1 withError:(id)arg2;
- (void)_handleGetTracksResponse:(id)arg1 getTracksError:(id)arg2 fromRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)_handlePersonalizationResponse:(id)arg1 personalizationError:(id)arg2 fromRequest:(id)arg3 completion:(id /* block */)arg4;
- (bool)_isTransientLoadingError:(id)arg1;
- (void)_loadTracksWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_observePersonalizationResponse:(id)arg1;
- (void)_removeAllTracks;
- (void)_removeRestrictedTracks;
- (void)_repersonalizeCurrentTracks;
- (void)_responseDidInvalidate;
- (void)_responseDidInvalidateNotification:(id)arg1;
- (void)_updateAdditionalLoadingSupport;
- (bool)canJumpToItem:(id)arg1 reason:(id*)arg2;
- (bool)canSkipItem:(id)arg1 reason:(id*)arg2;
- (bool)containsLiveStream;
- (bool)containsRadioContent;
- (bool)containsTransportableContentWithReason:(id*)arg1;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)firstModelPlayEvent;
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;
- (id)identifiersForItem:(id)arg1 inSection:(id)arg2;
- (id)init;
- (long long)itemCount;
- (void)itemDidBeginPlayback:(id)arg1;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)loadAdditionalItemsWithCount:(long long)arg1 forSection:(id)arg2 completion:(id /* block */)arg3;
- (void)loadPlaybackContext:(id)arg1 completion:(id /* block */)arg2;
- (id)modelPlayEventForItem:(id)arg1 inSection:(id)arg2;
- (id)placeholderItemForLoadingAdditionalItemsInSection:(id)arg1;
- (long long)prefetchThresholdForSection:(id)arg1;
- (void)reloadSection:(id)arg1 completion:(id /* block */)arg2;
- (id)rtcReportingPlayQueueSourceIdentifier;
- (bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (bool)shouldRequestAdditionalItemsWhenReachingTailOfSection:(id)arg1;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)arg1;
- (bool)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2;
- (id)updatedPlaybackContext;

@end
