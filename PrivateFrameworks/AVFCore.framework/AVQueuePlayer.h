
@interface AVQueuePlayer : AVPlayer <MFExternalPlaybackConfigurable, MFStateDumpable> {
    AVQueuePlayerInternal * _queuePlayer;
}

@property (nonatomic, readonly) long long playbackType;
@property (nonatomic, readonly) NSDictionary *stateDictionary;
@property (getter=supportsAdvanceTimeForOverlappedPlayback, setter=setSupportsAdvanceTimeForOverlappedPlayback:, nonatomic) bool supportsAdvanceTimeForOverlappedPlayback;
@property (nonatomic, retain) AVPlayerMediaSelectionCriteria *tvp_cachedAudioSelectionCriteria;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (void)initialize;
+ (id)queuePlayerWithItems:(id)arg1;

- (long long)_defaultActionAtItemEnd;
- (void)advanceToNextItem;
- (bool)canInsertItem:(id)arg1 afterItem:(id)arg2;
- (bool)canOverlapPlaybackFromPlayerItem:(id)arg1 toPlayerItem:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithItems:(id)arg1;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (id)items;
- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (void)setActionAtItemEnd:(long long)arg1;
- (void)setSupportsAdvanceTimeForOverlappedPlayback:(bool)arg1;
- (bool)supportsAdvanceTimeForOverlappedPlayback;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (void)mpc_setSupportsAdvanceTimeForOverlappedPlayback:(bool)arg1;
- (long long)playbackType;
- (id)stateDictionary;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

- (void)setTvp_cachedAudioSelectionCriteria:(id)arg1;
- (id)tvp_cachedAudioSelectionCriteria;

@end
