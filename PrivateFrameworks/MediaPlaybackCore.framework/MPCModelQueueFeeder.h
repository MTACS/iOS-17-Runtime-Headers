
@interface MPCModelQueueFeeder : MPQueueFeeder <MPCQueueControllerBehaviorMusicDataSource, MPRTCReportingItemSessionContaining, MPRequestResponseControllerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSHashTable * _activeModelGenericAVItems;
    NSDictionary * _assetStoreFronts;
    unsigned long long  _backgroundTaskIdentifier;
    unsigned long long  _backgroundTasks;
    NSLock * _diffLock;
    NSObject<OS_dispatch_queue> * _diffQueue;
    NSDictionary * _endTimeModifications;
    MPModelGenericObject * _fallbackSectionRepresentation;
    MPCModelGenericAVItemUserIdentityPropertySet * _identityPropertySet;
    bool  _isSiriInitiated;
    id /* block */  _loadingCompletionHandler;
    MPCModelPlaybackContext * _playbackContext;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    MPPropertySet * _representativeMetadataPropertySet;
    MPModelRequest<MPCModelPlaybackRequest> * _request;
    MPRequestResponseController * _requestController;
    MPModelResponse<MPCModelPlaybackResponse> * _response;
    NSString * _rtcReportingPlayQueueSourceIdentifier;
    <MPMutableIdentifierListSection> * _section;
    MPIdentifierSet * _startItemIdentifiers;
    NSDictionary * _startTimeModifications;
}

@property (nonatomic, readonly) bool containsLiveStream;
@property (nonatomic, readonly) bool containsRadioContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPModelResponse<MPCModelPlaybackResponse> *response;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginBackgroundTaskAssertion;
- (void)_endBackgroundTaskAssertion;
- (id)_equivalencySourceAdamIDForIdentifierSet:(id)arg1;
- (id)_sectionedModelObjectsRepresentationForSectionedCollection:(id)arg1;
- (id)_supplementalLibraryRequestWithError:(id*)arg1;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (bool)canJumpToItem:(id)arg1 reason:(id*)arg2;
- (bool)containsLiveStream;
- (bool)containsTransportableContentWithReason:(id*)arg1;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (bool)controller:(id)arg1 shouldRetryFailedRequestWithError:(id)arg2;
- (void)dealloc;
- (void)didFinishLoadingRequestForController:(id)arg1;
- (id)fallbackSectionRepresentation;
- (id)firstItemIntersectingIdentifierSet:(id)arg1;
- (id)firstModelPlayEvent;
- (void)getRepresentativeMetadataForPlaybackContext:(id)arg1 properties:(id)arg2 completion:(id /* block */)arg3;
- (id)identifiersForItem:(id)arg1 inSection:(id)arg2;
- (id)init;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)loadPlaybackContext:(id)arg1 completion:(id /* block */)arg2;
- (id)modelPlayEventForItem:(id)arg1 inSection:(id)arg2;
- (id)playbackInfoForItem:(id)arg1;
- (void)reloadSection:(id)arg1 completion:(id /* block */)arg2;
- (id)response;
- (id)rtcReportingPlayQueueSourceIdentifier;
- (bool)section:(id)arg1 shouldShuffleExcludeItem:(id)arg2;
- (bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (void)setFallbackSectionRepresentation:(id)arg1;
- (bool)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)arg1;
- (bool)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2;
- (id)uniqueIdentifier;
- (id)updatedPlaybackContext;
- (void)willBeginLoadingRequestForController:(id)arg1;

@end
