
@interface PLUSSchemaPLUSContactSuggestionOutcomeReported : SISchemaInstrumentationMessage {
    int  _contactSuggestionOutcome;
    int  _contactSuggestionRedundancyState;
    struct { 
        unsigned int contactSuggestionOutcome : 1; 
        unsigned int contactSuggestionRedundancyState : 1; 
    }  _has;
    bool  _hasSuggestionId;
    SISchemaUUID * _suggestionId;
}

@property (nonatomic) int contactSuggestionOutcome;
@property (nonatomic) int contactSuggestionRedundancyState;
@property (nonatomic) bool hasContactSuggestionOutcome;
@property (nonatomic) bool hasContactSuggestionRedundancyState;
@property (nonatomic) bool hasSuggestionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *suggestionId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)contactSuggestionOutcome;
- (int)contactSuggestionRedundancyState;
- (void)deleteContactSuggestionOutcome;
- (void)deleteContactSuggestionRedundancyState;
- (void)deleteSuggestionId;
- (id)dictionaryRepresentation;
- (bool)hasContactSuggestionOutcome;
- (bool)hasContactSuggestionRedundancyState;
- (bool)hasSuggestionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContactSuggestionOutcome:(int)arg1;
- (void)setContactSuggestionRedundancyState:(int)arg1;
- (void)setHasContactSuggestionOutcome:(bool)arg1;
- (void)setHasContactSuggestionRedundancyState:(bool)arg1;
- (void)setHasSuggestionId:(bool)arg1;
- (void)setSuggestionId:(id)arg1;
- (id)suggestionId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
