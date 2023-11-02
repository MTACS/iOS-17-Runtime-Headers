
@interface PLUSSchemaPLUSSuggesterSuggestionMetadataReported : SISchemaInstrumentationMessage {
    PLUSSchemaPLUSSuggesterDomainSuggestionMetadata * _domainSuggestionMetadata;
    struct { 
        unsigned int suggestionSurfaced : 1; 
        unsigned int suggestionNoveltyState : 1; 
    }  _has;
    bool  _hasDomainSuggestionMetadata;
    bool  _hasOriginalRequestId;
    bool  _hasSuggestionDomainMetadata;
    bool  _hasSuggestionLinkId;
    SISchemaUUID * _originalRequestId;
    PLUSSchemaPLUSSuggestionDomainMetadata * _suggestionDomainMetadata;
    SISchemaUUID * _suggestionLinkId;
    int  _suggestionNoveltyState;
    int  _suggestionSurfaced;
}

@property (nonatomic, retain) PLUSSchemaPLUSSuggesterDomainSuggestionMetadata *domainSuggestionMetadata;
@property (nonatomic) bool hasDomainSuggestionMetadata;
@property (nonatomic) bool hasOriginalRequestId;
@property (nonatomic) bool hasSuggestionDomainMetadata;
@property (nonatomic) bool hasSuggestionLinkId;
@property (nonatomic) bool hasSuggestionNoveltyState;
@property (nonatomic) bool hasSuggestionSurfaced;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalRequestId;
@property (nonatomic, retain) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;
@property (nonatomic, retain) SISchemaUUID *suggestionLinkId;
@property (nonatomic) int suggestionNoveltyState;
@property (nonatomic) int suggestionSurfaced;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDomainSuggestionMetadata;
- (void)deleteOriginalRequestId;
- (void)deleteSuggestionDomainMetadata;
- (void)deleteSuggestionLinkId;
- (void)deleteSuggestionNoveltyState;
- (void)deleteSuggestionSurfaced;
- (id)dictionaryRepresentation;
- (id)domainSuggestionMetadata;
- (bool)hasDomainSuggestionMetadata;
- (bool)hasOriginalRequestId;
- (bool)hasSuggestionDomainMetadata;
- (bool)hasSuggestionLinkId;
- (bool)hasSuggestionNoveltyState;
- (bool)hasSuggestionSurfaced;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalRequestId;
- (bool)readFrom:(id)arg1;
- (void)setDomainSuggestionMetadata:(id)arg1;
- (void)setHasDomainSuggestionMetadata:(bool)arg1;
- (void)setHasOriginalRequestId:(bool)arg1;
- (void)setHasSuggestionDomainMetadata:(bool)arg1;
- (void)setHasSuggestionLinkId:(bool)arg1;
- (void)setHasSuggestionNoveltyState:(bool)arg1;
- (void)setHasSuggestionSurfaced:(bool)arg1;
- (void)setOriginalRequestId:(id)arg1;
- (void)setSuggestionDomainMetadata:(id)arg1;
- (void)setSuggestionLinkId:(id)arg1;
- (void)setSuggestionNoveltyState:(int)arg1;
- (void)setSuggestionSurfaced:(int)arg1;
- (id)suggestionDomainMetadata;
- (id)suggestionLinkId;
- (int)suggestionNoveltyState;
- (int)suggestionSurfaced;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
