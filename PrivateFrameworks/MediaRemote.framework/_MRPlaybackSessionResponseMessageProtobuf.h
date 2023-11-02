
@interface _MRPlaybackSessionResponseMessageProtobuf : PBCodable <NSCopying> {
    _MRPlaybackSessionProtobuf * _playbackSession;
}

@property (nonatomic, readonly) bool hasPlaybackSession;
@property (nonatomic, retain) _MRPlaybackSessionProtobuf *playbackSession;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaybackSession;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)playbackSession;
- (bool)readFrom:(id)arg1;
- (void)setPlaybackSession:(id)arg1;
- (void)writeTo:(id)arg1;

@end
