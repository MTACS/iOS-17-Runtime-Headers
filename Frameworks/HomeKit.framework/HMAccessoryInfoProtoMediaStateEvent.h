
@interface HMAccessoryInfoProtoMediaStateEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int playbackState : 1; 
        unsigned int repeatState : 1; 
        unsigned int shuffleState : 1; 
        unsigned int volume : 1; 
    }  _has;
    NSString * _mediaIdentifier;
    long long  _playbackState;
    long long  _repeatState;
    long long  _shuffleState;
    double  _volume;
}

@property (nonatomic, readonly) bool hasMediaIdentifier;
@property (nonatomic) bool hasPlaybackState;
@property (nonatomic) bool hasRepeatState;
@property (nonatomic) bool hasShuffleState;
@property (nonatomic) bool hasVolume;
@property (nonatomic, retain) NSString *mediaIdentifier;
@property (nonatomic) long long playbackState;
@property (nonatomic) long long repeatState;
@property (nonatomic) long long shuffleState;
@property (nonatomic) double volume;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMediaIdentifier;
- (bool)hasPlaybackState;
- (bool)hasRepeatState;
- (bool)hasShuffleState;
- (bool)hasVolume;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mediaIdentifier;
- (void)mergeFrom:(id)arg1;
- (long long)playbackState;
- (bool)readFrom:(id)arg1;
- (long long)repeatState;
- (void)setHasPlaybackState:(bool)arg1;
- (void)setHasRepeatState:(bool)arg1;
- (void)setHasShuffleState:(bool)arg1;
- (void)setHasVolume:(bool)arg1;
- (void)setMediaIdentifier:(id)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)setRepeatState:(long long)arg1;
- (void)setShuffleState:(long long)arg1;
- (void)setVolume:(double)arg1;
- (long long)shuffleState;
- (double)volume;
- (void)writeTo:(id)arg1;

@end
