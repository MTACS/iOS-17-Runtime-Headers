
@interface PLUSSchemaPLUSSuggestion : SISchemaInstrumentationMessage {
    bool  _hasSuggestionMetadata;
    bool  _hasSuggestionValue;
    PLUSSchemaPLUSSuggestionMetadata * _suggestionMetadata;
    PLUSSchemaPLUSSuggestionValue * _suggestionValue;
}

@property (nonatomic) bool hasSuggestionMetadata;
@property (nonatomic) bool hasSuggestionValue;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PLUSSchemaPLUSSuggestionMetadata *suggestionMetadata;
@property (nonatomic, retain) PLUSSchemaPLUSSuggestionValue *suggestionValue;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSuggestionMetadata;
- (void)deleteSuggestionValue;
- (id)dictionaryRepresentation;
- (bool)hasSuggestionMetadata;
- (bool)hasSuggestionValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSuggestionMetadata:(bool)arg1;
- (void)setHasSuggestionValue:(bool)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setSuggestionValue:(id)arg1;
- (id)suggestionMetadata;
- (id)suggestionValue;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
