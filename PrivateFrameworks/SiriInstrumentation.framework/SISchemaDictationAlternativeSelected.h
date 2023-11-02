
@interface SISchemaDictationAlternativeSelected : SISchemaInstrumentationMessage {
    int  _alternativeListPosition;
    SISchemaLocaleIdentifier * _alternativesLocale;
    int  _countOfAlternativesAvailable;
    int  _countOfWordsReplaced;
    struct { 
        unsigned int countOfWordsReplaced : 1; 
        unsigned int countOfAlternativesAvailable : 1; 
        unsigned int alternativeListPosition : 1; 
    }  _has;
    bool  _hasAlternativesLocale;
}

@property (nonatomic) int alternativeListPosition;
@property (nonatomic, retain) SISchemaLocaleIdentifier *alternativesLocale;
@property (nonatomic) int countOfAlternativesAvailable;
@property (nonatomic) int countOfWordsReplaced;
@property (nonatomic) bool hasAlternativeListPosition;
@property (nonatomic) bool hasAlternativesLocale;
@property (nonatomic) bool hasCountOfAlternativesAvailable;
@property (nonatomic) bool hasCountOfWordsReplaced;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (int)alternativeListPosition;
- (id)alternativesLocale;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)countOfAlternativesAvailable;
- (int)countOfWordsReplaced;
- (void)deleteAlternativeListPosition;
- (void)deleteAlternativesLocale;
- (void)deleteCountOfAlternativesAvailable;
- (void)deleteCountOfWordsReplaced;
- (id)dictionaryRepresentation;
- (bool)hasAlternativeListPosition;
- (bool)hasAlternativesLocale;
- (bool)hasCountOfAlternativesAvailable;
- (bool)hasCountOfWordsReplaced;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAlternativeListPosition:(int)arg1;
- (void)setAlternativesLocale:(id)arg1;
- (void)setCountOfAlternativesAvailable:(int)arg1;
- (void)setCountOfWordsReplaced:(int)arg1;
- (void)setHasAlternativeListPosition:(bool)arg1;
- (void)setHasAlternativesLocale:(bool)arg1;
- (void)setHasCountOfAlternativesAvailable:(bool)arg1;
- (void)setHasCountOfWordsReplaced:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
