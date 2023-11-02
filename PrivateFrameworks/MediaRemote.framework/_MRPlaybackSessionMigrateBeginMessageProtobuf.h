
@interface _MRPlaybackSessionMigrateBeginMessageProtobuf : PBCodable <NSCopying> {
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    _MRPlaybackSessionRequestProtobuf * _request;
}

@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, retain) _MRPlaybackSessionRequestProtobuf *request;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlayerPath;
- (bool)hasRequest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (id)request;
- (void)setPlayerPath:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
