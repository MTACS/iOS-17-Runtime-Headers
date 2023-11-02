
@interface PLUSSchemaPLUSSuggestionDomainMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int suggestionGenerationDomain : 1; 
    }  _has;
    int  _suggestionGenerationDomain;
}

@property (nonatomic) bool hasSuggestionGenerationDomain;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int suggestionGenerationDomain;

- (void)deleteSuggestionGenerationDomain;
- (id)dictionaryRepresentation;
- (bool)hasSuggestionGenerationDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSuggestionGenerationDomain:(bool)arg1;
- (void)setSuggestionGenerationDomain:(int)arg1;
- (int)suggestionGenerationDomain;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
