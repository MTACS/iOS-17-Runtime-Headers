
@interface PLUSSchemaPLUSSuggesterMetadataReported : SISchemaInstrumentationMessage {
    PLUSSchemaPLUSDomainConfiguredState * _domainConfiguredState;
    struct { 
        unsigned int isSuggesterEnabled : 1; 
    }  _has;
    bool  _hasDomainConfiguredState;
    bool  _hasOriginalRequestId;
    bool  _hasSuggestionDomainMetadata;
    bool  _isSuggesterEnabled;
    SISchemaUUID * _originalRequestId;
    PLUSSchemaPLUSSuggestionDomainMetadata * _suggestionDomainMetadata;
}

@property (nonatomic, retain) PLUSSchemaPLUSDomainConfiguredState *domainConfiguredState;
@property (nonatomic) bool hasDomainConfiguredState;
@property (nonatomic) bool hasIsSuggesterEnabled;
@property (nonatomic) bool hasOriginalRequestId;
@property (nonatomic) bool hasSuggestionDomainMetadata;
@property (nonatomic) bool isSuggesterEnabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalRequestId;
@property (nonatomic, retain) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDomainConfiguredState;
- (void)deleteIsSuggesterEnabled;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (id)dictionaryRepresentation;
- (id)domainConfiguredState;
- (bool)hasDomainConfiguredState;
- (bool)hasIsSuggesterEnabled;
- (bool)hasOriginalRequestId;
- (bool)hasSuggestionDomainMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSuggesterEnabled;
- (id)jsonData;
- (id)originalRequestId;
- (bool)readFrom:(id)arg1;
- (void)setDomainConfiguredState:(id)arg1;
- (void)setHasDomainConfiguredState:(bool)arg1;
- (void)setHasIsSuggesterEnabled:(bool)arg1;
- (void)setHasOriginalRequestId:(bool)arg1;
- (void)setHasSuggestionDomainMetadata:(bool)arg1;
- (void)setIsSuggesterEnabled:(bool)arg1;
- (void)setOriginalRequestId:(id)arg1;
- (void)setSuggestionDomainMetadata:(id)arg1;
- (id)suggestionDomainMetadata;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
