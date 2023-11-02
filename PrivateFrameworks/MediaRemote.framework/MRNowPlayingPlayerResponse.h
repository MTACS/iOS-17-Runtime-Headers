
@interface MRNowPlayingPlayerResponse : NSObject <NSCopying, NSSecureCoding> {
    MRClient * _clientProperties;
    MRDestination * _destination;
    NSDate * _deviceLastPlayingDate;
    MRPlaybackQueue * _playbackQueue;
    unsigned int  _playbackState;
    NSDate * _playerLastPlayingDate;
    NSArray * _supportedCommands;
}

@property (nonatomic, retain) MRClient *clientProperties;
@property (nonatomic, copy) MRDestination *destination;
@property (nonatomic, readonly) bool deviceHasPlayedRecently;
@property (nonatomic, copy) NSDate *deviceLastPlayingDate;
@property (nonatomic, readonly) bool hasPlayedRecently;
@property (nonatomic, readonly) NSDate *lastPlayingDate;
@property (nonatomic, copy) MRPlaybackQueue *playbackQueue;
@property (nonatomic, readonly) float playbackRate;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic, readonly) bool playerHasPlayedRecently;
@property (nonatomic, copy) NSDate *playerLastPlayingDate;
@property (nonatomic, readonly, copy) MRPlayerPath *playerPath;
@property (nonatomic, readonly, copy) NSArray *proxiableSupportedCommands;
@property (nonatomic, readonly) int repeatMode;
@property (nonatomic, readonly) int shuffleMode;
@property (nonatomic, copy) NSArray *supportedCommands;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDictionaryRepresentation;
- (id)description;
- (id)destination;
- (bool)deviceHasPlayedRecently;
- (id)deviceLastPlayingDate;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPlayedRecently;
- (id)initWithCoder:(id)arg1;
- (id)lastPlayingDate;
- (id)playbackQueue;
- (float)playbackRate;
- (unsigned int)playbackState;
- (bool)playerHasPlayedRecently;
- (id)playerLastPlayingDate;
- (id)playerPath;
- (id)proxiableSupportedCommands;
- (int)repeatMode;
- (void)setClientProperties:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDeviceLastPlayingDate:(id)arg1;
- (void)setPlaybackQueue:(id)arg1;
- (void)setPlaybackState:(unsigned int)arg1;
- (void)setPlayerLastPlayingDate:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (int)shuffleMode;
- (id)supportedCommands;

@end
