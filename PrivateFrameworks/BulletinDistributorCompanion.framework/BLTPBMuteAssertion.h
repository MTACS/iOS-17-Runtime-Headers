
@interface BLTPBMuteAssertion : PBCodable <NSCopying> {
    double  _expirationDate;
    struct { 
        unsigned int expirationDate : 1; 
    }  _has;
    NSMutableArray * _sectionBulletinLists;
}

@property (nonatomic) double expirationDate;
@property (nonatomic) bool hasExpirationDate;
@property (nonatomic, retain) NSMutableArray *sectionBulletinLists;

+ (Class)sectionBulletinListType;

- (void).cxx_destruct;
- (void)addSectionBulletinList:(id)arg1;
- (void)clearSectionBulletinLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationDate;
- (bool)hasExpirationDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionBulletinListAtIndex:(unsigned long long)arg1;
- (id)sectionBulletinLists;
- (unsigned long long)sectionBulletinListsCount;
- (void)setExpirationDate:(double)arg1;
- (void)setHasExpirationDate:(bool)arg1;
- (void)setSectionBulletinLists:(id)arg1;
- (void)writeTo:(id)arg1;

@end
