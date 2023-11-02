
@interface _MRUpdatePlayerMessageProtobuf : PBCodable <NSCopying> {
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
}

@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlayerPath;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
