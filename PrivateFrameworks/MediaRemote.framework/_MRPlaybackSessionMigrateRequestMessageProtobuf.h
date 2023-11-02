
@interface _MRPlaybackSessionMigrateRequestMessageProtobuf : PBCodable <NSCopying> {
    _MRPlaybackSessionProtobuf * _playbackSession;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    _MRPlaybackSessionMigrateRequestProtobuf * _request;
}

@property (nonatomic, readonly) bool hasPlaybackSession;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, retain) _MRPlaybackSessionProtobuf *playbackSession;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, retain) _MRPlaybackSessionMigrateRequestProtobuf *request;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaybackSession;
- (bool)hasPlayerPath;
- (bool)hasRequest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playbackSession;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (id)request;
- (void)setPlaybackSession:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
