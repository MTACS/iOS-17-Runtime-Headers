
@interface NPKProtoPhotosForFamilyMembersWithDSIDsRequest : PBRequest <NSCopying> {
    NSMutableArray * _requestDSIDs;
}

@property (nonatomic, retain) NSMutableArray *requestDSIDs;

+ (Class)requestDSIDsType;

- (void).cxx_destruct;
- (void)addRequestDSIDs:(id)arg1;
- (void)clearRequestDSIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestDSIDs;
- (id)requestDSIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestDSIDsCount;
- (void)setRequestDSIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
