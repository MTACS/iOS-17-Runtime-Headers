
@interface SUGSchemaSUGInteraction : SISchemaInstrumentationMessage {
    struct { 
        unsigned int relatedSuggestionEventSequenceNum : 1; 
        unsigned int relatedSuggestionsShownCount : 1; 
        unsigned int hasOccurredWithinHour : 1; 
        unsigned int triggerType : 1; 
    }  _has;
    bool  _hasOccurredWithinHour;
    bool  _hasRelatedSuggestionId;
    unsigned int  _relatedSuggestionEventSequenceNum;
    NSString * _relatedSuggestionId;
    unsigned int  _relatedSuggestionsShownCount;
    int  _triggerType;
}

@property (nonatomic) bool hasHasOccurredWithinHour;
@property (nonatomic) bool hasOccurredWithinHour;
@property (nonatomic) bool hasRelatedSuggestionEventSequenceNum;
@property (nonatomic) bool hasRelatedSuggestionId;
@property (nonatomic) bool hasRelatedSuggestionsShownCount;
@property (nonatomic) bool hasTriggerType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int relatedSuggestionEventSequenceNum;
@property (nonatomic, copy) NSString *relatedSuggestionId;
@property (nonatomic) unsigned int relatedSuggestionsShownCount;
@property (nonatomic) int triggerType;

- (void).cxx_destruct;
- (void)deleteHasOccurredWithinHour;
- (void)deleteRelatedSuggestionEventSequenceNum;
- (void)deleteRelatedSuggestionId;
- (void)deleteRelatedSuggestionsShownCount;
- (void)deleteTriggerType;
- (id)dictionaryRepresentation;
- (bool)hasHasOccurredWithinHour;
- (bool)hasOccurredWithinHour;
- (bool)hasRelatedSuggestionEventSequenceNum;
- (bool)hasRelatedSuggestionId;
- (bool)hasRelatedSuggestionsShownCount;
- (bool)hasTriggerType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned int)relatedSuggestionEventSequenceNum;
- (id)relatedSuggestionId;
- (unsigned int)relatedSuggestionsShownCount;
- (void)setHasHasOccurredWithinHour:(bool)arg1;
- (void)setHasOccurredWithinHour:(bool)arg1;
- (void)setHasRelatedSuggestionEventSequenceNum:(bool)arg1;
- (void)setHasRelatedSuggestionId:(bool)arg1;
- (void)setHasRelatedSuggestionsShownCount:(bool)arg1;
- (void)setHasTriggerType:(bool)arg1;
- (void)setRelatedSuggestionEventSequenceNum:(unsigned int)arg1;
- (void)setRelatedSuggestionId:(id)arg1;
- (void)setRelatedSuggestionsShownCount:(unsigned int)arg1;
- (void)setTriggerType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)triggerType;
- (void)writeTo:(id)arg1;

@end
