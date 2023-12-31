
@interface AWDCoreRoutineDeletionRecordStats : PBCodable <NSCopying> {
    unsigned int  _ageInDays;
    struct { 
        unsigned int ageInDays : 1; 
    }  _has;
}

@property (nonatomic) unsigned int ageInDays;
@property (nonatomic) bool hasAgeInDays;

- (unsigned int)ageInDays;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAgeInDays;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAgeInDays:(unsigned int)arg1;
- (void)setHasAgeInDays:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
