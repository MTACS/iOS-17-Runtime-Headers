
@interface PLUSSchemaPLUSContactSuggesterQueryResponseReceived : SISchemaInstrumentationMessage {
    struct { 
        unsigned int hasMatchingResults : 1; 
    }  _has;
    bool  _hasMatchingResults;
    NSArray * _results;
}

@property (nonatomic) bool hasHasMatchingResults;
@property (nonatomic) bool hasMatchingResults;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *results;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearResults;
- (void)deleteHasMatchingResults;
- (void)deleteResults;
- (id)dictionaryRepresentation;
- (bool)hasHasMatchingResults;
- (bool)hasMatchingResults;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setHasHasMatchingResults:(bool)arg1;
- (void)setHasMatchingResults:(bool)arg1;
- (void)setResults:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
