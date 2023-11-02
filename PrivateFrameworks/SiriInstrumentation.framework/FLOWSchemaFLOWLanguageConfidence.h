
@interface FLOWSchemaFLOWLanguageConfidence : SISchemaInstrumentationMessage {
    unsigned long long  _confidenceScore;
    struct { 
        unsigned int languageCode : 1; 
        unsigned int confidenceScore : 1; 
    }  _has;
    int  _languageCode;
}

@property (nonatomic) unsigned long long confidenceScore;
@property (nonatomic) bool hasConfidenceScore;
@property (nonatomic) bool hasLanguageCode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int languageCode;

- (unsigned long long)confidenceScore;
- (void)deleteConfidenceScore;
- (void)deleteLanguageCode;
- (id)dictionaryRepresentation;
- (bool)hasConfidenceScore;
- (bool)hasLanguageCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)languageCode;
- (bool)readFrom:(id)arg1;
- (void)setConfidenceScore:(unsigned long long)arg1;
- (void)setHasConfidenceScore:(bool)arg1;
- (void)setHasLanguageCode:(bool)arg1;
- (void)setLanguageCode:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
