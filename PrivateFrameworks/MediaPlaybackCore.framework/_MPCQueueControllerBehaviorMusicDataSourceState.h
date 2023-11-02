
@interface _MPCQueueControllerBehaviorMusicDataSourceState : NSObject <MPShuffleableSectionedIdentifierListDataSource, NSSecureCoding> {
    <MPCQueueControllerBehaviorMusicDataSource><MPCQueueControllerDataSourceStateRestoring> * _dataSource;
    MPCPlaybackEngineEventStream * _eventStream;
    bool  _frozen;
    MPPlaybackContext * _originalPlaybackContext;
    MPPlaybackContext * _playbackContext;
    NSString * _playerID;
    NSString * _preferredStartItemIdentifier;
    NSString * _sectionIdentifier;
    long long  _state;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    MPPlaybackContext * _supplementalPlaybackContext;
    long long  _supplementalPlaybackContextBehavior;
    struct { 
        unsigned int dataSourcePlaceholderItemForLoadingAdditionalItemsInSection : 1; 
        unsigned int dataSourceSupplementalPlaybackContextWithReason : 1; 
        unsigned int dataSourceSupplementalPlaybackContextBehavior : 1; 
        unsigned int dataSourceCanJumpToItem : 1; 
        unsigned int dataSourceCanSkipItem : 1; 
        unsigned int dataSourceFirstItemIntersectingIdentifierSet : 1; 
        unsigned int dataSourceItemDidBeginPlayback : 1; 
        unsigned int dataSourceShouldRequestAdditionalItemsWhenReachingTailOfSection : 1; 
        unsigned int dataSourcePrefetchThresholdForSection : 1; 
        unsigned int dataSourceShouldUsePlaceholderForItemInSection : 1; 
        unsigned int dataSourceSectionShouldShuffleExcludeItem : 1; 
        unsigned int dataSourceUpdatedPlaybackContext : 1; 
        unsigned int dataSourceContainsRadioContent : 1; 
    }  _supportedMethods;
    MPPlaceholderAVItem * _tailPlaceholderItem;
}

@property (nonatomic, readonly) bool containsLiveStream;
@property (nonatomic, readonly) <MPCQueueControllerBehaviorMusicDataSource><MPCQueueControllerDataSourceStateRestoring> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPPlaybackContext *originalPlaybackContext;
@property (nonatomic, readonly) MPPlaybackContext *playbackContext;
@property (nonatomic, copy) NSString *playerID;
@property (nonatomic, readonly) NSString *preferredStartItemIdentifier;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (nonatomic, readonly) bool shouldAddOriginalPlaybackContextAfterReplacement;
@property (nonatomic) long long state;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } stateLock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MPPlaybackContext *supplementalPlaybackContext;
@property (nonatomic, readonly) long long supplementalPlaybackContextBehavior;
@property (nonatomic, readonly) MPPlaceholderAVItem *tailPlaceholderItem;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_buildPlaceholder;
- (void)_inLock_buildPlaceholder;
- (id)_rtcSourceServiceName;
- (void)_updateRadioStationPlaybackAuthorizationTokenIfNeeded;
- (bool)canJumpToItem:(id)arg1 reason:(id*)arg2;
- (bool)canSkipItem:(id)arg1 reason:(id*)arg2;
- (bool)containsLiveStream;
- (id)dataSource;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventStream;
- (id)firstItemIntersectingIdentifierSet:(id)arg1;
- (id)getTailPlaceholderItemAndState:(long long*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaybackContext:(id)arg1;
- (bool)isFrozen;
- (bool)isRadioDataSource;
- (void)itemDidBeginPlayback:(id)arg1;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)loadAdditionalItemsIfNeededWithCount:(long long)arg1 completion:(id /* block */)arg2;
- (id)originalPlaybackContext;
- (id)playbackContext;
- (id)playerID;
- (id)preferredStartItemIdentifier;
- (long long)prefetchThreshold;
- (void)reloadSection:(id)arg1 completion:(id /* block */)arg2;
- (bool)section:(id)arg1 shouldShuffleExcludeItem:(id)arg2;
- (bool)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (id)sectionIdentifier;
- (void)setEventStream:(id)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setState:(long long)arg1;
- (bool)shouldAddOriginalPlaybackContextAfterReplacement;
- (bool)shouldRequestAdditionalItemsAtTail;
- (bool)shouldUsePlaceholderForItem:(id)arg1 inSection:(id)arg2;
- (long long)state;
- (struct os_unfair_lock_s { unsigned int x1; })stateLock;
- (id)supplementalPlaybackContext;
- (long long)supplementalPlaybackContextBehavior;
- (id)tailPlaceholderItem;
- (void)updatePlaybackContext;

@end
