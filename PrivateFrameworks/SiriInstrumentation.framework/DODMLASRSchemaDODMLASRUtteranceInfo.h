
@interface DODMLASRSchemaDODMLASRUtteranceInfo : SISchemaInstrumentationMessage {
    unsigned long long  _endTimeInNs;
    struct { 
        unsigned int startTimeInNs : 1; 
        unsigned int endTimeInNs : 1; 
    }  _has;
    NSArray * _results;
    unsigned long long  _startTimeInNs;
}

@property (nonatomic) unsigned long long endTimeInNs;
@property (nonatomic) bool hasEndTimeInNs;
@property (nonatomic) bool hasStartTimeInNs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *results;
@property (nonatomic) unsigned long long startTimeInNs;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearResults;
- (void)deleteEndTimeInNs;
- (void)deleteResults;
- (void)deleteStartTimeInNs;
- (id)dictionaryRepresentation;
- (unsigned long long)endTimeInNs;
- (bool)hasEndTimeInNs;
- (bool)hasStartTimeInNs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setEndTimeInNs:(unsigned long long)arg1;
- (void)setHasEndTimeInNs:(bool)arg1;
- (void)setHasStartTimeInNs:(bool)arg1;
- (void)setResults:(id)arg1;
- (void)setStartTimeInNs:(unsigned long long)arg1;
- (unsigned long long)startTimeInNs;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
