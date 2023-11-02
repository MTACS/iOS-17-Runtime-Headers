
@interface IDSQRProtoH3EndToEndChannelRegisterResponse : PBCodable <NSCopying> {
    NSData * _virtualQuicServerConnectionId;
}

@property (nonatomic, retain) NSData *virtualQuicServerConnectionId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVirtualQuicServerConnectionId:(id)arg1;
- (id)virtualQuicServerConnectionId;
- (void)writeTo:(id)arg1;

@end
