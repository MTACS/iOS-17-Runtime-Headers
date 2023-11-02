
@interface PLUSSchemaPLUSSuggestionGenerated : SISchemaInstrumentationMessage {
    PLUSSchemaPLUSSuggestion * _generatedSuggestion;
    bool  _hasGeneratedSuggestion;
    bool  _hasSuggestionChangeDataCaptureMetadata;
    bool  _hasSuggestionDomainMetadata;
    PLUSSchemaPLUSChangeDataCaptureMetadata * _suggestionChangeDataCaptureMetadata;
    PLUSSchemaPLUSSuggestionDomainMetadata * _suggestionDomainMetadata;
}

@property (nonatomic, retain) PLUSSchemaPLUSSuggestion *generatedSuggestion;
@property (nonatomic) bool hasGeneratedSuggestion;
@property (nonatomic) bool hasSuggestionChangeDataCaptureMetadata;
@property (nonatomic) bool hasSuggestionDomainMetadata;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PLUSSchemaPLUSChangeDataCaptureMetadata *suggestionChangeDataCaptureMetadata;
@property (nonatomic, retain) PLUSSchemaPLUSSuggestionDomainMetadata *suggestionDomainMetadata;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteGeneratedSuggestion;
- (void)deleteSuggestionChangeDataCaptureMetadata;
- (void)deleteSuggestionDomainMetadata;
- (id)dictionaryRepresentation;
- (id)generatedSuggestion;
- (bool)hasGeneratedSuggestion;
- (bool)hasSuggestionChangeDataCaptureMetadata;
- (bool)hasSuggestionDomainMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setGeneratedSuggestion:(id)arg1;
- (void)setHasGeneratedSuggestion:(bool)arg1;
- (void)setHasSuggestionChangeDataCaptureMetadata:(bool)arg1;
- (void)setHasSuggestionDomainMetadata:(bool)arg1;
- (void)setSuggestionChangeDataCaptureMetadata:(id)arg1;
- (void)setSuggestionDomainMetadata:(id)arg1;
- (id)suggestionChangeDataCaptureMetadata;
- (id)suggestionDomainMetadata;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
