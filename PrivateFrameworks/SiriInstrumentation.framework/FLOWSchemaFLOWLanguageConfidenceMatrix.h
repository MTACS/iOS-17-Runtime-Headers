
@interface FLOWSchemaFLOWLanguageConfidenceMatrix : SISchemaInstrumentationMessage {
    NSArray * _languageConfidenceArrays;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *languageConfidenceArrays;

- (void).cxx_destruct;
- (void)addLanguageConfidenceArrays:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearLanguageConfidenceArrays;
- (void)deleteLanguageConfidenceArrays;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)languageConfidenceArrays;
- (id)languageConfidenceArraysAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageConfidenceArraysCount;
- (bool)readFrom:(id)arg1;
- (void)setLanguageConfidenceArrays:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
