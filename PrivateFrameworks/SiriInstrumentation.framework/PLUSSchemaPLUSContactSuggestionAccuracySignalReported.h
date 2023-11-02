
@interface PLUSSchemaPLUSContactSuggestionAccuracySignalReported : SISchemaInstrumentationMessage {
    PLUSSchemaPLUSSuggestionAccuracySignal * _accuracySignal;
    bool  _hasAccuracySignal;
    bool  _hasOriginalPlusId;
    bool  _hasSuggestionId;
    SISchemaUUID * _originalPlusId;
    SISchemaUUID * _suggestionId;
}

@property (nonatomic, retain) PLUSSchemaPLUSSuggestionAccuracySignal *accuracySignal;
@property (nonatomic) bool hasAccuracySignal;
@property (nonatomic) bool hasOriginalPlusId;
@property (nonatomic) bool hasSuggestionId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalPlusId;
@property (nonatomic, retain) SISchemaUUID *suggestionId;

- (void).cxx_destruct;
- (id)accuracySignal;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAccuracySignal;
- (void)deleteOriginalPlusId;
- (void)deleteSuggestionId;
- (id)dictionaryRepresentation;
- (bool)hasAccuracySignal;
- (bool)hasOriginalPlusId;
- (bool)hasSuggestionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalPlusId;
- (bool)readFrom:(id)arg1;
- (void)setAccuracySignal:(id)arg1;
- (void)setHasAccuracySignal:(bool)arg1;
- (void)setHasOriginalPlusId:(bool)arg1;
- (void)setHasSuggestionId:(bool)arg1;
- (void)setOriginalPlusId:(id)arg1;
- (void)setSuggestionId:(id)arg1;
- (id)suggestionId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
