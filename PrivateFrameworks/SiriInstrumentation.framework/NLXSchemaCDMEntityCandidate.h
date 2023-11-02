
@interface NLXSchemaCDMEntityCandidate : SISchemaInstrumentationMessage {
    USOSchemaUSOGraph * _entity;
    struct { 
        unsigned int score : 1; 
    }  _has;
    bool  _hasEntity;
    double  _score;
}

@property (nonatomic, retain) USOSchemaUSOGraph *entity;
@property (nonatomic) bool hasEntity;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEntity;
- (void)deleteScore;
- (id)dictionaryRepresentation;
- (id)entity;
- (bool)hasEntity;
- (bool)hasScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setEntity:(id)arg1;
- (void)setHasEntity:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setScore:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
