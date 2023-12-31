
@interface BLTPBAddBulletinSummaryRequest : PBRequest <NSCopying> {
    BLTPBBulletinSummary * _bulletin;
}

@property (nonatomic, retain) BLTPBBulletinSummary *bulletin;
@property (nonatomic, readonly) bool hasBulletin;

- (void).cxx_destruct;
- (id)bulletin;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBulletin;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBulletin:(id)arg1;
- (void)writeTo:(id)arg1;

@end
