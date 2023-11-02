
@interface MPMusicPlayerServerStateUpdateRecord : NSObject <NSSecureCoding> {
    bool  _audioFormatDidChange;
    NSArray * _contentItemIDs;
    bool  _hasContentItemIDs;
    bool  _hasNowPlaying;
    bool  _hasQueueDescriptor;
    bool  _hasRepeatMode;
    bool  _hasShuffleMode;
    bool  _hasTimeSnapshot;
    bool  _itemDidEnd;
    MPMusicPlayerControllerNowPlaying * _nowPlaying;
    MPMusicPlayerQueueDescriptor * _queueDescriptor;
    bool  _queueDidChange;
    bool  _queueDidEnd;
    long long  _repeatMode;
    long long  _shuffleMode;
    MPMusicPlayerControllerNowPlayingTimeSnapshot * _timeSnapshot;
}

@property (nonatomic) bool audioFormatDidChange;
@property (nonatomic, copy) NSArray *contentItemIDs;
@property (nonatomic) bool hasContentItemIDs;
@property (nonatomic) bool hasNowPlaying;
@property (nonatomic) bool hasQueueDescriptor;
@property (nonatomic) bool hasRepeatMode;
@property (nonatomic) bool hasShuffleMode;
@property (nonatomic) bool hasTimeSnapshot;
@property (nonatomic) bool itemDidEnd;
@property (nonatomic, retain) MPMusicPlayerControllerNowPlaying *nowPlaying;
@property (nonatomic, retain) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property (nonatomic) bool queueDidChange;
@property (nonatomic) bool queueDidEnd;
@property (nonatomic) long long repeatMode;
@property (nonatomic) long long shuffleMode;
@property (nonatomic, retain) MPMusicPlayerControllerNowPlayingTimeSnapshot *timeSnapshot;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)audioFormatDidChange;
- (id)contentItemIDs;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasContentItemIDs;
- (bool)hasNowPlaying;
- (bool)hasQueueDescriptor;
- (bool)hasRepeatMode;
- (bool)hasShuffleMode;
- (bool)hasTimeSnapshot;
- (id)initWithCoder:(id)arg1;
- (bool)itemDidEnd;
- (id)nowPlaying;
- (id)queueDescriptor;
- (bool)queueDidChange;
- (bool)queueDidEnd;
- (long long)repeatMode;
- (void)setAudioFormatDidChange:(bool)arg1;
- (void)setContentItemIDs:(id)arg1;
- (void)setHasContentItemIDs:(bool)arg1;
- (void)setHasNowPlaying:(bool)arg1;
- (void)setHasQueueDescriptor:(bool)arg1;
- (void)setHasRepeatMode:(bool)arg1;
- (void)setHasShuffleMode:(bool)arg1;
- (void)setHasTimeSnapshot:(bool)arg1;
- (void)setItemDidEnd:(bool)arg1;
- (void)setNowPlaying:(id)arg1;
- (void)setQueueDescriptor:(id)arg1;
- (void)setQueueDidChange:(bool)arg1;
- (void)setQueueDidEnd:(bool)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setShuffleMode:(long long)arg1;
- (void)setTimeSnapshot:(id)arg1;
- (long long)shuffleMode;
- (id)timeSnapshot;

@end
