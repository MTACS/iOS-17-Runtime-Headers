
@interface LIGHTHOUSE_BITACORA_PROTOScheduleStatus : PBCodable <NSCopying> {
    struct { 
        unsigned int scheduled : 1; 
    }  _has;
    bool  _scheduled;
}

@property (nonatomic) bool hasScheduled;
@property (nonatomic) bool scheduled;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasScheduled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)scheduled;
- (void)setHasScheduled:(bool)arg1;
- (void)setScheduled:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
