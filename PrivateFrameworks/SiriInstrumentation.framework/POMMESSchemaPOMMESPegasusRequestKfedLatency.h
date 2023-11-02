
@interface POMMESSchemaPOMMESPegasusRequestKfedLatency : SISchemaInstrumentationMessage {
    unsigned int  _banyanLatencyInMs;
    struct { 
        unsigned int overallLatencyInMs : 1; 
        unsigned int banyanLatencyInMs : 1; 
    }  _has;
    unsigned int  _overallLatencyInMs;
}

@property (nonatomic) unsigned int banyanLatencyInMs;
@property (nonatomic) bool hasBanyanLatencyInMs;
@property (nonatomic) bool hasOverallLatencyInMs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int overallLatencyInMs;

- (unsigned int)banyanLatencyInMs;
- (void)deleteBanyanLatencyInMs;
- (void)deleteOverallLatencyInMs;
- (id)dictionaryRepresentation;
- (bool)hasBanyanLatencyInMs;
- (bool)hasOverallLatencyInMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)overallLatencyInMs;
- (bool)readFrom:(id)arg1;
- (void)setBanyanLatencyInMs:(unsigned int)arg1;
- (void)setHasBanyanLatencyInMs:(bool)arg1;
- (void)setHasOverallLatencyInMs:(bool)arg1;
- (void)setOverallLatencyInMs:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
