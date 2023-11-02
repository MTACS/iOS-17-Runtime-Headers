
@interface SUGSchemaSUGSuggestionsGenerated : SISchemaInstrumentationMessage {
    SISchemaUUID * _generationId;
    NSString * _generationTag;
    struct { 
        unsigned int invocationType : 1; 
    }  _has;
    bool  _hasGenerationId;
    bool  _hasGenerationTag;
    int  _invocationType;
    NSArray * _suggestions;
}

@property (nonatomic, retain) SISchemaUUID *generationId;
@property (nonatomic, copy) NSString *generationTag;
@property (nonatomic) bool hasGenerationId;
@property (nonatomic) bool hasGenerationTag;
@property (nonatomic) bool hasInvocationType;
@property (nonatomic) int invocationType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *suggestions;

- (void).cxx_destruct;
- (void)addSuggestions:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearSuggestions;
- (void)deleteGenerationId;
- (void)deleteGenerationTag;
- (void)deleteInvocationType;
- (void)deleteSuggestions;
- (id)dictionaryRepresentation;
- (id)generationId;
- (id)generationTag;
- (bool)hasGenerationId;
- (bool)hasGenerationTag;
- (bool)hasInvocationType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)invocationType;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setGenerationId:(id)arg1;
- (void)setGenerationTag:(id)arg1;
- (void)setHasGenerationId:(bool)arg1;
- (void)setHasGenerationTag:(bool)arg1;
- (void)setHasInvocationType:(bool)arg1;
- (void)setInvocationType:(int)arg1;
- (void)setSuggestions:(id)arg1;
- (id)suggestions;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
