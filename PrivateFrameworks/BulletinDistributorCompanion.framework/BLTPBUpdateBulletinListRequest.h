
@interface BLTPBUpdateBulletinListRequest : PBRequest <NSCopying> {
    BLTPBFullBulletinList * _bulletinList;
}

@property (nonatomic, retain) BLTPBFullBulletinList *bulletinList;
@property (nonatomic, readonly) bool hasBulletinList;

- (void).cxx_destruct;
- (id)bulletinList;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBulletinList;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBulletinList:(id)arg1;
- (void)writeTo:(id)arg1;

@end
