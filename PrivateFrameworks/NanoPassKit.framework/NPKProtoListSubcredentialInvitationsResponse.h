
@interface NPKProtoListSubcredentialInvitationsResponse : PBCodable <NSCopying> {
    NSMutableArray * _subcredentialInvitationsDatas;
}

@property (nonatomic, retain) NSMutableArray *subcredentialInvitationsDatas;

+ (Class)subcredentialInvitationsDataType;

- (void).cxx_destruct;
- (void)addSubcredentialInvitationsData:(id)arg1;
- (void)clearSubcredentialInvitationsDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSubcredentialInvitationsDatas:(id)arg1;
- (id)subcredentialInvitationsDataAtIndex:(unsigned long long)arg1;
- (id)subcredentialInvitationsDatas;
- (unsigned long long)subcredentialInvitationsDatasCount;
- (void)writeTo:(id)arg1;

@end
