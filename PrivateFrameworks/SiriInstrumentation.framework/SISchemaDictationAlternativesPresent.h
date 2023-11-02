
@interface SISchemaDictationAlternativesPresent : SISchemaInstrumentationMessage {
    SISchemaLocaleIdentifier * _alternativesLocale;
    int  _countOfWordsUnderlined;
    struct { 
        unsigned int numberOfUnderlines : 1; 
        unsigned int countOfWordsUnderlined : 1; 
        unsigned int multilingualIsLowConfidence : 1; 
    }  _has;
    bool  _hasAlternativesLocale;
    bool  _multilingualIsLowConfidence;
    int  _numberOfUnderlines;
}

@property (nonatomic, retain) SISchemaLocaleIdentifier *alternativesLocale;
@property (nonatomic) int countOfWordsUnderlined;
@property (nonatomic) bool hasAlternativesLocale;
@property (nonatomic) bool hasCountOfWordsUnderlined;
@property (nonatomic) bool hasMultilingualIsLowConfidence;
@property (nonatomic) bool hasNumberOfUnderlines;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool multilingualIsLowConfidence;
@property (nonatomic) int numberOfUnderlines;

- (void).cxx_destruct;
- (id)alternativesLocale;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)countOfWordsUnderlined;
- (void)deleteAlternativesLocale;
- (void)deleteCountOfWordsUnderlined;
- (void)deleteMultilingualIsLowConfidence;
- (void)deleteNumberOfUnderlines;
- (id)dictionaryRepresentation;
- (bool)hasAlternativesLocale;
- (bool)hasCountOfWordsUnderlined;
- (bool)hasMultilingualIsLowConfidence;
- (bool)hasNumberOfUnderlines;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)multilingualIsLowConfidence;
- (int)numberOfUnderlines;
- (bool)readFrom:(id)arg1;
- (void)setAlternativesLocale:(id)arg1;
- (void)setCountOfWordsUnderlined:(int)arg1;
- (void)setHasAlternativesLocale:(bool)arg1;
- (void)setHasCountOfWordsUnderlined:(bool)arg1;
- (void)setHasMultilingualIsLowConfidence:(bool)arg1;
- (void)setHasNumberOfUnderlines:(bool)arg1;
- (void)setMultilingualIsLowConfidence:(bool)arg1;
- (void)setNumberOfUnderlines:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
