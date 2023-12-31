
@interface MPMusicPlayerMediaItemQueueDescriptor : MPMusicPlayerQueueDescriptor {
    MPMediaItemCollection * _itemCollection;
    MPMediaQuery * _query;
    MPMediaItem * _startItem;
}

@property (nonatomic, readonly) MPMediaItemCollection *itemCollection;
@property (nonatomic, readonly, copy) MPMediaQuery *query;
@property (nonatomic, retain) MPMediaItem *startItem;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemCollection:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)itemCollection;
- (id)query;
- (void)setEndTime:(double)arg1 forItem:(id)arg2;
- (void)setStartItem:(id)arg1;
- (void)setStartTime:(double)arg1 forItem:(id)arg2;
- (id)startItem;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (bool)matchesStartItem:(id)arg1;
- (id)playbackContexts;

@end
