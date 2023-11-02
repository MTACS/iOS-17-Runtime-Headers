
@interface IDSQRProtoH3EndToEndChannelRegisterE2EChannelInfo : PBCodable <NSCopying> {
    NSData * _quicClientConnectionId;
    unsigned int  _quicClientLinkId;
    NSData * _quicServerConnectionId;
    unsigned int  _quicServerLinkId;
}

@property (nonatomic, retain) NSData *quicClientConnectionId;
@property (nonatomic) unsigned int quicClientLinkId;
@property (nonatomic, retain) NSData *quicServerConnectionId;
@property (nonatomic) unsigned int quicServerLinkId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)quicClientConnectionId;
- (unsigned int)quicClientLinkId;
- (id)quicServerConnectionId;
- (unsigned int)quicServerLinkId;
- (bool)readFrom:(id)arg1;
- (void)setQuicClientConnectionId:(id)arg1;
- (void)setQuicClientLinkId:(unsigned int)arg1;
- (void)setQuicServerConnectionId:(id)arg1;
- (void)setQuicServerLinkId:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
