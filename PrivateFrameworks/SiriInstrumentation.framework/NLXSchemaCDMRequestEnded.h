
@interface NLXSchemaCDMRequestEnded : SISchemaInstrumentationMessage {
    bool  _hasLanguageVariantClassifierResult;
    NLXSchemaCDMLanguageVariantResult * _languageVariantClassifierResult;
    NSArray * _parses;
}

@property (nonatomic) bool hasLanguageVariantClassifierResult;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaCDMLanguageVariantResult *languageVariantClassifierResult;
@property (nonatomic, copy) NSArray *parses;

- (void).cxx_destruct;
- (void)addParses:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearParses;
- (void)deleteLanguageVariantClassifierResult;
- (void)deleteParses;
- (id)dictionaryRepresentation;
- (bool)hasLanguageVariantClassifierResult;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)languageVariantClassifierResult;
- (id)parses;
- (id)parsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)parsesCount;
- (bool)readFrom:(id)arg1;
- (void)setHasLanguageVariantClassifierResult:(bool)arg1;
- (void)setLanguageVariantClassifierResult:(id)arg1;
- (void)setParses:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
