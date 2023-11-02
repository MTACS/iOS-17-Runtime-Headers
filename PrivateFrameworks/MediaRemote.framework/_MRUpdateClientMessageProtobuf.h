
@interface _MRUpdateClientMessageProtobuf : PBCodable <NSCopying> {
    _MRNowPlayingClientProtobuf * _client;
}

@property (nonatomic, retain) _MRNowPlayingClientProtobuf *client;
@property (nonatomic, readonly) bool hasClient;

- (void).cxx_destruct;
- (id)client;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClient;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClient:(id)arg1;
- (void)writeTo:(id)arg1;

@end
