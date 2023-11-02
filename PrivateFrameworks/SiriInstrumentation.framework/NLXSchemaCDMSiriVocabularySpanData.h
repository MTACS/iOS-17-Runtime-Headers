
@interface NLXSchemaCDMSiriVocabularySpanData : SISchemaInstrumentationMessage {
    struct { 
        unsigned int matchScore : 1; 
    }  _has;
    double  _matchScore;
}

@property (nonatomic) bool hasMatchScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double matchScore;

- (void)deleteMatchScore;
- (id)dictionaryRepresentation;
- (bool)hasMatchScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)matchScore;
- (bool)readFrom:(id)arg1;
- (void)setHasMatchScore:(bool)arg1;
- (void)setMatchScore:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
