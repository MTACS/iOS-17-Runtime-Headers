
@interface PLUSSchemaPLUSSuggesterQueried : SISchemaInstrumentationMessage {
    struct { 
        unsigned int matchedResultsPopulated : 1; 
    }  _has;
    bool  _hasOriginalRequestId;
    bool  _hasSuggestionDomainMetadata;
    NSArray * _matchedResults;
    bool  _matchedResultsPopulated;
    SISchemaUUID * _originalRequestId;
    PLUSSchemaPLUSSuggestionDomainMetadata * _suggestionDomainMetadata;
}

@property (nonatomic) bool hasMatchedResultsPopulated;
@property (nonatomic) bool hasOriginalRequestId;
@property (nonatomic) bool hasSuggestionDomainMetadata;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *matchedResults;
@property (nonatomic) bool matchedResultsPopulated;
@property (nonatomic, retain) SISchemaUUID *originalRequestId;
@property (nonatomic, retain) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;

- (void).cxx_destruct;
- (void)addMatchedResults:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearMatchedResults;
- (void)deleteMatchedResults;
- (void)deleteMatchedResultsPopulated;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (id)dictionaryRepresentation;
- (bool)hasMatchedResultsPopulated;
- (bool)hasOriginalRequestId;
- (bool)hasSuggestionDomainMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)matchedResults;
- (id)matchedResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedResultsCount;
- (bool)matchedResultsPopulated;
- (id)originalRequestId;
- (bool)readFrom:(id)arg1;
- (void)setHasMatchedResultsPopulated:(bool)arg1;
- (void)setHasOriginalRequestId:(bool)arg1;
- (void)setHasSuggestionDomainMetadata:(bool)arg1;
- (void)setMatchedResults:(id)arg1;
- (void)setMatchedResultsPopulated:(bool)arg1;
- (void)setOriginalRequestId:(id)arg1;
- (void)setSuggestionDomainMetadata:(id)arg1;
- (id)suggestionDomainMetadata;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
