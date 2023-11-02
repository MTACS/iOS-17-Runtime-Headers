
@interface RRSchemaRREntityPoolResolveEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int outcome : 1; 
    }  _has;
    int  _outcome;
    NSArray * _queryResults;
}

@property (nonatomic) bool hasOutcome;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int outcome;
@property (nonatomic, copy) NSArray *queryResults;

- (void).cxx_destruct;
- (void)addQueryResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearQueryResults;
- (void)deleteOutcome;
- (void)deleteQueryResults;
- (id)dictionaryRepresentation;
- (bool)hasOutcome;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)outcome;
- (id)queryResults;
- (id)queryResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)queryResultsCount;
- (bool)readFrom:(id)arg1;
- (void)setHasOutcome:(bool)arg1;
- (void)setOutcome:(int)arg1;
- (void)setQueryResults:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
