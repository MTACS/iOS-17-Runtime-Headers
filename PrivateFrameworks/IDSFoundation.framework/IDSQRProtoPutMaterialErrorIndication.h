
@interface IDSQRProtoPutMaterialErrorIndication : PBCodable <NSCopying> {
    IDSQRProtoMaterialOwner * _materialOwner;
    unsigned long long  _receiverParticipantId;
}

@property (nonatomic, retain) IDSQRProtoMaterialOwner *materialOwner;
@property (nonatomic) unsigned long long receiverParticipantId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)materialOwner;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)receiverParticipantId;
- (void)setMaterialOwner:(id)arg1;
- (void)setReceiverParticipantId:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
