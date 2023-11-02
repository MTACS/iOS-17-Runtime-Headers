
@interface CKDPShareAccessBlockedRequesters : PBCodable <NSCopying> {
    NSMutableArray * _blockedRequestingAccessUsers;
}

@property (nonatomic, retain) NSMutableArray *blockedRequestingAccessUsers;

+ (Class)blockedRequestingAccessUsersType;

- (void).cxx_destruct;
- (void)addBlockedRequestingAccessUsers:(id)arg1;
- (id)blockedRequestingAccessUsers;
- (id)blockedRequestingAccessUsersAtIndex:(unsigned long long)arg1;
- (unsigned long long)blockedRequestingAccessUsersCount;
- (void)clearBlockedRequestingAccessUsers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBlockedRequestingAccessUsers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
