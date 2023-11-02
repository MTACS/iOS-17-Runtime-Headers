
@interface PLUSSchemaPLUSSuggestionOutcomeReported : SISchemaInstrumentationMessage {
    PLUSSchemaPLUSSuggestionDomainOutcome * _domainOutcome;
    struct { 
        unsigned int suggestionOutcome : 1; 
    }  _has;
    bool  _hasDomainOutcome;
    bool  _hasOriginalRequestId;
    bool  _hasSuggestionDomainMetadata;
    bool  _hasSuggestionLinkId;
    SISchemaUUID * _originalRequestId;
    PLUSSchemaPLUSSuggestionDomainMetadata * _suggestionDomainMetadata;
    SISchemaUUID * _suggestionLinkId;
    int  _suggestionOutcome;
}

@property (nonatomic, retain) PLUSSchemaPLUSSuggestionDomainOutcome *domainOutcome;
@property (nonatomic) bool hasDomainOutcome;
@property (nonatomic) bool hasOriginalRequestId;
@property (nonatomic) bool hasSuggestionDomainMetadata;
@property (nonatomic) bool hasSuggestionLinkId;
@property (nonatomic) bool hasSuggestionOutcome;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalRequestId;
@property (nonatomic, retain) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic, retain) SISchemaUUID *suggestionLinkId;
@property (nonatomic) int suggestionOutcome;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDomainOutcome;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (void)deleteSuggestionLinkId;
- (void)deleteSuggestionOutcome;
- (id)dictionaryRepresentation;
- (id)domainOutcome;
- (bool)hasDomainOutcome;
- (bool)hasOriginalRequestId;
- (bool)hasSuggestionDomainMetadata;
- (bool)hasSuggestionLinkId;
- (bool)hasSuggestionOutcome;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalRequestId;
- (bool)readFrom:(id)arg1;
- (void)setDomainOutcome:(id)arg1;
- (void)setHasDomainOutcome:(bool)arg1;
- (void)setHasOriginalRequestId:(bool)arg1;
- (void)setHasSuggestionDomainMetadata:(bool)arg1;
- (void)setHasSuggestionLinkId:(bool)arg1;
- (void)setHasSuggestionOutcome:(bool)arg1;
- (void)setOriginalRequestId:(id)arg1;
- (void)setSuggestionDomainMetadata:(id)arg1;
- (void)setSuggestionLinkId:(id)arg1;
- (void)setSuggestionOutcome:(int)arg1;
- (id)suggestionDomainMetadata;
- (id)suggestionLinkId;
- (int)suggestionOutcome;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
