
@interface PLUSSchemaPLUSContactSuggestionHeartbeatReported : SISchemaInstrumentationMessage {
    NSArray * _suggestionSummaries;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *suggestionSummaries;

- (void).cxx_destruct;
- (void)addSuggestionSummaries:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearSuggestionSummaries;
- (void)deleteSuggestionSummaries;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setSuggestionSummaries:(id)arg1;
- (id)suggestionSummaries;
- (id)suggestionSummariesAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionSummariesCount;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
