
@interface IDSQRProtoH3EndToEndChannelUnRegisterRequest : PBRequest <NSCopying> {
    NSData * _e2eChannelUuid;
}

@property (nonatomic, retain) NSData *e2eChannelUuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)e2eChannelUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setE2eChannelUuid:(id)arg1;
- (void)writeTo:(id)arg1;

@end
