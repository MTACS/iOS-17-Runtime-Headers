
@interface FLOWSchemaFLOWLanguageConfidenceArray : SISchemaInstrumentationMessage {
    NSArray * _languageConfidences;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *languageConfidences;

- (void).cxx_destruct;
- (void)addLanguageConfidences:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearLanguageConfidences;
- (void)deleteLanguageConfidences;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)languageConfidences;
- (id)languageConfidencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageConfidencesCount;
- (bool)readFrom:(id)arg1;
- (void)setLanguageConfidences:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
