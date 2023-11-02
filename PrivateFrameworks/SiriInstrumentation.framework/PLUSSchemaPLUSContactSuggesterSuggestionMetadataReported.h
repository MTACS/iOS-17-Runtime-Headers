
@interface PLUSSchemaPLUSContactSuggesterSuggestionMetadataReported : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isDuplicateSuggestion : 1; 
        unsigned int isSuggestionPresentInModelOutput : 1; 
    }  _has;
    bool  _hasSuggestionId;
    bool  _isDuplicateSuggestion;
    bool  _isSuggestionPresentInModelOutput;
    SISchemaUUID * _suggestionId;
}

@property (nonatomic) bool hasIsDuplicateSuggestion;
@property (nonatomic) bool hasIsSuggestionPresentInModelOutput;
@property (nonatomic) bool hasSuggestionId;
@property (nonatomic) bool isDuplicateSuggestion;
@property (nonatomic) bool isSuggestionPresentInModelOutput;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *suggestionId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIsDuplicateSuggestion;
- (void)deleteIsSuggestionPresentInModelOutput;
- (void)deleteSuggestionId;
- (id)dictionaryRepresentation;
- (bool)hasIsDuplicateSuggestion;
- (bool)hasIsSuggestionPresentInModelOutput;
- (bool)hasSuggestionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDuplicateSuggestion;
- (bool)isEqual:(id)arg1;
- (bool)isSuggestionPresentInModelOutput;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDuplicateSuggestion:(bool)arg1;
- (void)setHasIsSuggestionPresentInModelOutput:(bool)arg1;
- (void)setHasSuggestionId:(bool)arg1;
- (void)setIsDuplicateSuggestion:(bool)arg1;
- (void)setIsSuggestionPresentInModelOutput:(bool)arg1;
- (void)setSuggestionId:(id)arg1;
- (id)suggestionId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
