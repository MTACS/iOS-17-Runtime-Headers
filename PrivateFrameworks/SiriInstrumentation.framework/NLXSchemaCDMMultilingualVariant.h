
@interface NLXSchemaCDMMultilingualVariant : SISchemaInstrumentationMessage {
    struct { 
        unsigned int languageVariantConfidenceScore : 1; 
    }  _has;
    bool  _hasLanguageVariantName;
    double  _languageVariantConfidenceScore;
    NSString * _languageVariantName;
}

@property (nonatomic) bool hasLanguageVariantConfidenceScore;
@property (nonatomic) bool hasLanguageVariantName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double languageVariantConfidenceScore;
@property (nonatomic, copy) NSString *languageVariantName;

- (void).cxx_destruct;
- (void)deleteLanguageVariantConfidenceScore;
- (void)deleteLanguageVariantName;
- (id)dictionaryRepresentation;
- (bool)hasLanguageVariantConfidenceScore;
- (bool)hasLanguageVariantName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)languageVariantConfidenceScore;
- (id)languageVariantName;
- (bool)readFrom:(id)arg1;
- (void)setHasLanguageVariantConfidenceScore:(bool)arg1;
- (void)setHasLanguageVariantName:(bool)arg1;
- (void)setLanguageVariantConfidenceScore:(double)arg1;
- (void)setLanguageVariantName:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
