
@interface IDSQRProtoH3EndToEndChannelRegisterAckRequest : PBRequest <NSCopying> {
    bool  _accept;
    NSData * _e2eChannelUuid;
}

@property (nonatomic) bool accept;
@property (nonatomic, retain) NSData *e2eChannelUuid;

- (void).cxx_destruct;
- (bool)accept;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)e2eChannelUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccept:(bool)arg1;
- (void)setE2eChannelUuid:(id)arg1;
- (void)writeTo:(id)arg1;

@end
