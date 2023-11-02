
@interface _MRClientUpdatesConfigurationProtobuf : PBCodable <NSCopying> {
    bool  _artworkUpdates;
    struct { 
        unsigned int artworkUpdates : 1; 
        unsigned int keyboardUpdates : 1; 
        unsigned int nowPlayingUpdates : 1; 
        unsigned int outputDeviceUpdates : 1; 
        unsigned int systemEndpointUpdates : 1; 
        unsigned int volumeUpdates : 1; 
    }  _has;
    bool  _keyboardUpdates;
    bool  _nowPlayingUpdates;
    bool  _outputDeviceUpdates;
    NSMutableArray * _subscribedPlayerPaths;
    bool  _systemEndpointUpdates;
    bool  _volumeUpdates;
}

@property (nonatomic) bool artworkUpdates;
@property (nonatomic) bool hasArtworkUpdates;
@property (nonatomic) bool hasKeyboardUpdates;
@property (nonatomic) bool hasNowPlayingUpdates;
@property (nonatomic) bool hasOutputDeviceUpdates;
@property (nonatomic) bool hasSystemEndpointUpdates;
@property (nonatomic) bool hasVolumeUpdates;
@property (nonatomic) bool keyboardUpdates;
@property (nonatomic) bool nowPlayingUpdates;
@property (nonatomic) bool outputDeviceUpdates;
@property (nonatomic, retain) NSMutableArray *subscribedPlayerPaths;
@property (nonatomic) bool systemEndpointUpdates;
@property (nonatomic) bool volumeUpdates;

+ (Class)subscribedPlayerPathsType;

- (void).cxx_destruct;
- (void)addSubscribedPlayerPaths:(id)arg1;
- (bool)artworkUpdates;
- (void)clearSubscribedPlayerPaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtworkUpdates;
- (bool)hasKeyboardUpdates;
- (bool)hasNowPlayingUpdates;
- (bool)hasOutputDeviceUpdates;
- (bool)hasSystemEndpointUpdates;
- (bool)hasVolumeUpdates;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)keyboardUpdates;
- (void)mergeFrom:(id)arg1;
- (bool)nowPlayingUpdates;
- (bool)outputDeviceUpdates;
- (bool)readFrom:(id)arg1;
- (void)setArtworkUpdates:(bool)arg1;
- (void)setHasArtworkUpdates:(bool)arg1;
- (void)setHasKeyboardUpdates:(bool)arg1;
- (void)setHasNowPlayingUpdates:(bool)arg1;
- (void)setHasOutputDeviceUpdates:(bool)arg1;
- (void)setHasSystemEndpointUpdates:(bool)arg1;
- (void)setHasVolumeUpdates:(bool)arg1;
- (void)setKeyboardUpdates:(bool)arg1;
- (void)setNowPlayingUpdates:(bool)arg1;
- (void)setOutputDeviceUpdates:(bool)arg1;
- (void)setSubscribedPlayerPaths:(id)arg1;
- (void)setSystemEndpointUpdates:(bool)arg1;
- (void)setVolumeUpdates:(bool)arg1;
- (id)subscribedPlayerPaths;
- (id)subscribedPlayerPathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subscribedPlayerPathsCount;
- (bool)systemEndpointUpdates;
- (bool)volumeUpdates;
- (void)writeTo:(id)arg1;

@end
