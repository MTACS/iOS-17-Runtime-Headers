
@interface SISchemaDictationAlternativesViewed : SISchemaInstrumentationMessage {
    SISchemaLocaleIdentifier * _alternativesLocale;
    int  _countOfAlternativesAvailable;
    int  _countOfWordsUnderlined;
    struct { 
        unsigned int countOfWordsUnderlined : 1; 
        unsigned int countOfAlternativesAvailable : 1; 
    }  _has;
    bool  _hasAlternativesLocale;
}

@property (nonatomic, retain) SISchemaLocaleIdentifier *alternativesLocale;
@property (nonatomic) int countOfAlternativesAvailable;
@property (nonatomic) int countOfWordsUnderlined;
@property (nonatomic) bool hasAlternativesLocale;
@property (nonatomic) bool hasCountOfAlternativesAvailable;
@property (nonatomic) bool hasCountOfWordsUnderlined;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)alternativesLocale;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)countOfAlternativesAvailable;
- (int)countOfWordsUnderlined;
- (void)deleteAlternativesLocale;
- (void)deleteCountOfAlternativesAvailable;
- (void)deleteCountOfWordsUnderlined;
- (id)dictionaryRepresentation;
- (bool)hasAlternativesLocale;
- (bool)hasCountOfAlternativesAvailable;
- (bool)hasCountOfWordsUnderlined;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAlternativesLocale:(id)arg1;
- (void)setCountOfAlternativesAvailable:(int)arg1;
- (void)setCountOfWordsUnderlined:(int)arg1;
- (void)setHasAlternativesLocale:(bool)arg1;
- (void)setHasCountOfAlternativesAvailable:(bool)arg1;
- (void)setHasCountOfWordsUnderlined:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
