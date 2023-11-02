
@interface SCLPBScheduleTime : PBCodable <NSCopying> {
    struct { 
        unsigned int hour : 1; 
        unsigned int minute : 1; 
    }  _has;
    unsigned int  _hour;
    unsigned int  _minute;
}

@property (nonatomic) bool hasHour;
@property (nonatomic) bool hasMinute;
@property (nonatomic) unsigned int hour;
@property (nonatomic) unsigned int minute;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHour;
- (bool)hasMinute;
- (unsigned long long)hash;
- (unsigned int)hour;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minute;
- (bool)readFrom:(id)arg1;
- (void)setHasHour:(bool)arg1;
- (void)setHasMinute:(bool)arg1;
- (void)setHour:(unsigned int)arg1;
- (void)setMinute:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
