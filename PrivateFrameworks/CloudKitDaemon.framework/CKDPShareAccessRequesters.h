
@interface CKDPShareAccessRequesters : PBCodable <NSCopying> {
    NSMutableArray * _requestingAccessUsers;
}

@property (nonatomic, retain) NSMutableArray *requestingAccessUsers;

+ (Class)requestingAccessUsersType;

- (void).cxx_destruct;
- (void)addRequestingAccessUsers:(id)arg1;
- (void)clearRequestingAccessUsers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestingAccessUsers;
- (id)requestingAccessUsersAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestingAccessUsersCount;
- (void)setRequestingAccessUsers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
