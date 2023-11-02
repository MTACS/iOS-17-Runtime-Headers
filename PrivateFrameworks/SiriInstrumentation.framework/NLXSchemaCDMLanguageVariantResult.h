
@interface NLXSchemaCDMLanguageVariantResult : SISchemaInstrumentationMessage {
    NLXSchemaCDMParser * _cdmParser;
    bool  _hasCdmParser;
    NSArray * _multilingualVariants;
}

@property (nonatomic, retain) NLXSchemaCDMParser *cdmParser;
@property (nonatomic) bool hasCdmParser;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *multilingualVariants;

- (void).cxx_destruct;
- (void)addMultilingualVariants:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)cdmParser;
- (void)clearMultilingualVariants;
- (void)deleteCdmParser;
- (void)deleteMultilingualVariants;
- (id)dictionaryRepresentation;
- (bool)hasCdmParser;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)multilingualVariants;
- (id)multilingualVariantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)multilingualVariantsCount;
- (bool)readFrom:(id)arg1;
- (void)setCdmParser:(id)arg1;
- (void)setHasCdmParser:(bool)arg1;
- (void)setMultilingualVariants:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
