
@interface ContextualActionPredictionsDataContextFeatures : PBCodable <NSCopying> {
    unsigned int  _dayOfWeek;
    struct { 
        unsigned int dayOfWeek : 1; 
        unsigned int hourOfDay : 1; 
    }  _has;
    unsigned int  _hourOfDay;
}

@property (nonatomic) unsigned int dayOfWeek;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasHourOfDay;
@property (nonatomic) unsigned int hourOfDay;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dayOfWeek;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDayOfWeek;
- (bool)hasHourOfDay;
- (unsigned long long)hash;
- (unsigned int)hourOfDay;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDayOfWeek:(unsigned int)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasHourOfDay:(bool)arg1;
- (void)setHourOfDay:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
