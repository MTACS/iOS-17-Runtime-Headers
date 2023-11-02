
@interface PLUSSchemaPLUSSuggesterSuggestionRedundancyReported : SISchemaInstrumentationMessage {
    struct { 
        unsigned int suggestionRedundancyState : 1; 
    }  _has;
    bool  _hasOriginalRequestId;
    bool  _hasSuggestionDomainMetadata;
    bool  _hasSuggestionLinkId;
    SISchemaUUID * _originalRequestId;
    PLUSSchemaPLUSSuggestionDomainMetadata * _suggestionDomainMetadata;
    SISchemaUUID * _suggestionLinkId;
    int  _suggestionRedundancyState;
}

@property (nonatomic) bool hasOriginalRequestId;
@property (nonatomic) bool hasSuggestionDomainMetadata;
@property (nonatomic) bool hasSuggestionLinkId;
@property (nonatomic) bool hasSuggestionRedundancyState;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalRequestId;
@property (nonatomic, retain) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic, retain) SISchemaUUID *suggestionLinkId;
@property (nonatomic) int suggestionRedundancyState;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (void)deleteSuggestionLinkId;
- (void)deleteSuggestionRedundancyState;
- (id)dictionaryRepresentation;
- (bool)hasOriginalRequestId;
- (bool)hasSuggestionDomainMetadata;
- (bool)hasSuggestionLinkId;
- (bool)hasSuggestionRedundancyState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalRequestId;
- (bool)readFrom:(id)arg1;
- (void)setHasOriginalRequestId:(bool)arg1;
- (void)setHasSuggestionDomainMetadata:(bool)arg1;
- (void)setHasSuggestionLinkId:(bool)arg1;
- (void)setHasSuggestionRedundancyState:(bool)arg1;
- (void)setOriginalRequestId:(id)arg1;
- (void)setSuggestionDomainMetadata:(id)arg1;
- (void)setSuggestionLinkId:(id)arg1;
- (void)setSuggestionRedundancyState:(int)arg1;
- (id)suggestionDomainMetadata;
- (id)suggestionLinkId;
- (int)suggestionRedundancyState;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
