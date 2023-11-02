
@interface NLXSchemaCDMSiriVocabularySpanDataTier1 : SISchemaInstrumentationMessage {
    struct { 
        unsigned int priorOrdinality : 1; 
        unsigned int priorScore : 1; 
    }  _has;
    unsigned int  _priorOrdinality;
    double  _priorScore;
}

@property (nonatomic) bool hasPriorOrdinality;
@property (nonatomic) bool hasPriorScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int priorOrdinality;
@property (nonatomic) double priorScore;

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deletePriorOrdinality;
- (void)deletePriorScore;
- (id)dictionaryRepresentation;
- (bool)hasPriorOrdinality;
- (bool)hasPriorScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)priorOrdinality;
- (double)priorScore;
- (bool)readFrom:(id)arg1;
- (void)setHasPriorOrdinality:(bool)arg1;
- (void)setHasPriorScore:(bool)arg1;
- (void)setPriorOrdinality:(unsigned int)arg1;
- (void)setPriorScore:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
