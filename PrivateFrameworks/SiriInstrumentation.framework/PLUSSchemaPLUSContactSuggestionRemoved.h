
@interface PLUSSchemaPLUSContactSuggestionRemoved : SISchemaInstrumentationMessage {
    struct { 
        unsigned int reason : 1; 
    }  _has;
    bool  _hasRemovedSuggestion;
    bool  _hasUsageSummary;
    int  _reason;
    PLUSSchemaPLUSContactSuggestion * _removedSuggestion;
    PLUSSchemaPLUSContactSuggestionUsageSummary * _usageSummary;
}

@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasRemovedSuggestion;
@property (nonatomic) bool hasUsageSummary;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int reason;
@property (nonatomic, retain) PLUSSchemaPLUSContactSuggestion *removedSuggestion;
@property (nonatomic, retain) PLUSSchemaPLUSContactSuggestionUsageSummary *usageSummary;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteReason;
- (void)deleteRemovedSuggestion;
- (void)deleteUsageSummary;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (bool)hasRemovedSuggestion;
- (bool)hasUsageSummary;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)removedSuggestion;
- (void)setHasReason:(bool)arg1;
- (void)setHasRemovedSuggestion:(bool)arg1;
- (void)setHasUsageSummary:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setRemovedSuggestion:(id)arg1;
- (void)setUsageSummary:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)usageSummary;
- (void)writeTo:(id)arg1;

@end
