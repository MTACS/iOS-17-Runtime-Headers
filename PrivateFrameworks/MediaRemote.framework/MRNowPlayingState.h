
@interface MRNowPlayingState : NSObject <NSCopying> {
    NSString * _displayID;
    NSString * _displayName;
    bool  _hasPlaybackState;
    bool  _hasPlaybackStateTimestamp;
    MRPlaybackQueue * _playbackQueue;
    unsigned long long  _playbackQueueCapabilities;
    unsigned int  _playbackState;
    double  _playbackStateTimestamp;
    MRPlayerPath * _playerPath;
    MRPlaybackQueueRequest * _request;
    NSArray * _supportedCommands;
}

@property (nonatomic, readonly) bool containsArtwork;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, copy) NSString *displayID;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool hasPlaybackState;
@property (nonatomic) bool hasPlaybackStateTimestamp;
@property (nonatomic, copy) NSDictionary *nowPlayingInfo;
@property (nonatomic, copy) MRPlaybackQueue *playbackQueue;
@property (nonatomic) unsigned long long playbackQueueCapabilities;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic) double playbackStateTimestamp;
@property (nonatomic, copy) MRPlayerPath *playerPath;
@property (nonatomic, copy) MRPlaybackQueueRequest *request;
@property (nonatomic, copy) NSArray *supportedCommands;

- (void).cxx_destruct;
- (bool)containsArtwork;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutArtwork;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayID;
- (id)displayName;
- (bool)hasPlaybackState;
- (bool)hasPlaybackStateTimestamp;
- (id)initWithData:(id)arg1;
- (id)initWithPlayerPath:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)nowPlayingInfo;
- (id)playbackQueue;
- (unsigned long long)playbackQueueCapabilities;
- (unsigned int)playbackState;
- (double)playbackStateTimestamp;
- (id)playerPath;
- (id)protobufWithEncoding:(long long)arg1;
- (id)request;
- (void)setDisplayID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasPlaybackState:(bool)arg1;
- (void)setHasPlaybackStateTimestamp:(bool)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setPlaybackQueue:(id)arg1;
- (void)setPlaybackQueueCapabilities:(unsigned long long)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setPlaybackStateTimestamp:(double)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (id)supportedCommands;

@end
