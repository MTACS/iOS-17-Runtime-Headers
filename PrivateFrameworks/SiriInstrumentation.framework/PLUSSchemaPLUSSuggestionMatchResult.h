
@interface PLUSSchemaPLUSSuggestionMatchResult : SISchemaInstrumentationMessage {
    PLUSSchemaPLUSSuggestion * _generatedSuggestion;
    bool  _hasGeneratedSuggestion;
    bool  _hasSuggestionId;
    SISchemaUUID * _suggestionId;
}

@property (nonatomic, retain) PLUSSchemaPLUSSuggestion *generatedSuggestion;
@property (nonatomic) bool hasGeneratedSuggestion;
@property (nonatomic) bool hasSuggestionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *suggestionId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteGeneratedSuggestion;
- (void)deleteSuggestionId;
- (id)dictionaryRepresentation;
- (id)generatedSuggestion;
- (bool)hasGeneratedSuggestion;
- (bool)hasSuggestionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setGeneratedSuggestion:(id)arg1;
- (void)setHasGeneratedSuggestion:(bool)arg1;
- (void)setHasSuggestionId:(bool)arg1;
- (void)setSuggestionId:(id)arg1;
- (id)suggestionId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
