
@interface _MRPlayerClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int lastPlayingTimestamp : 1; 
    }  _has;
    double  _lastPlayingTimestamp;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
}

@property (nonatomic) bool hasLastPlayingTimestamp;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic) double lastPlayingTimestamp;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastPlayingTimestamp;
- (bool)hasPlayerPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)lastPlayingTimestamp;
- (void)mergeFrom:(id)arg1;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (void)setHasLastPlayingTimestamp:(bool)arg1;
- (void)setLastPlayingTimestamp:(double)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
