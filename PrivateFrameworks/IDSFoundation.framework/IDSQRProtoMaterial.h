
@interface IDSQRProtoMaterial : PBCodable <NSCopying> {
    NSMutableArray * _materialInfos;
    unsigned long long  _ownerParticipantId;
    unsigned long long  _receiverParticipantId;
}

@property (nonatomic, retain) NSMutableArray *materialInfos;
@property (nonatomic) unsigned long long ownerParticipantId;
@property (nonatomic) unsigned long long receiverParticipantId;

+ (Class)materialInfoType;

- (void).cxx_destruct;
- (void)addMaterialInfo:(id)arg1;
- (void)clearMaterialInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)materialInfoAtIndex:(unsigned long long)arg1;
- (id)materialInfos;
- (unsigned long long)materialInfosCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)ownerParticipantId;
- (bool)readFrom:(id)arg1;
- (unsigned long long)receiverParticipantId;
- (void)setMaterialInfos:(id)arg1;
- (void)setOwnerParticipantId:(unsigned long long)arg1;
- (void)setReceiverParticipantId:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
