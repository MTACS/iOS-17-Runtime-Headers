
@interface SUGSchemaSUGAggregateCounts : SISchemaInstrumentationMessage {
    struct { 
        unsigned int lastDayCount : 1; 
        unsigned int lastWeekBucket : 1; 
        unsigned int last28DaysBucket : 1; 
    }  _has;
    unsigned int  _last28DaysBucket;
    unsigned int  _lastDayCount;
    unsigned int  _lastWeekBucket;
}

@property (nonatomic) bool hasLast28DaysBucket;
@property (nonatomic) bool hasLastDayCount;
@property (nonatomic) bool hasLastWeekBucket;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int last28DaysBucket;
@property (nonatomic) unsigned int lastDayCount;
@property (nonatomic) unsigned int lastWeekBucket;

- (void)deleteLast28DaysBucket;
- (void)deleteLastDayCount;
- (void)deleteLastWeekBucket;
- (id)dictionaryRepresentation;
- (bool)hasLast28DaysBucket;
- (bool)hasLastDayCount;
- (bool)hasLastWeekBucket;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)last28DaysBucket;
- (unsigned int)lastDayCount;
- (unsigned int)lastWeekBucket;
- (bool)readFrom:(id)arg1;
- (void)setHasLast28DaysBucket:(bool)arg1;
- (void)setHasLastDayCount:(bool)arg1;
- (void)setHasLastWeekBucket:(bool)arg1;
- (void)setLast28DaysBucket:(unsigned int)arg1;
- (void)setLastDayCount:(unsigned int)arg1;
- (void)setLastWeekBucket:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
