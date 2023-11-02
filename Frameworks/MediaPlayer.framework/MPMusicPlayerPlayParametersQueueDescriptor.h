
@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor {
    MPMusicPlayerPlayParameters * _containerPlayParameters;
    NSArray * _playParametersQueue;
    MPMusicPlayerPlayParameters * _startItemPlayParameters;
}

@property (nonatomic, copy) NSArray *playParametersQueue;
@property (nonatomic, retain) MPMusicPlayerPlayParameters *startItemPlayParameters;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerPlayParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlayParametersQueue:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)playParametersQueue;
- (void)setContainerPlayParameters:(id)arg1;
- (void)setEndTime:(double)arg1 forItemWithPlayParameters:(id)arg2;
- (void)setPlayParametersQueue:(id)arg1;
- (void)setStartItemPlayParameters:(id)arg1;
- (void)setStartTime:(double)arg1 forItemWithPlayParameters:(id)arg2;
- (id)startItemPlayParameters;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)_classicalMusicAppPlaybackContextForPlayParametersQueue:(id)arg1;
- (void)_configureiTunesLibraryRequest:(id)arg1 forLibraryItems:(id)arg2;
- (id)_libraryItemsForPlayParameters:(id)arg1;
- (id)_playbackContextForStorePlayParameters:(id)arg1 libraryItems:(id)arg2 radioPlaybackContext:(id)arg3 containsStartItem:(bool)arg4;
- (bool)matchesStartItem:(id)arg1;
- (id)playbackContexts;

@end
