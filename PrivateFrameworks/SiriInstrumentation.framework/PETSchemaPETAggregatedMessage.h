
@interface PETSchemaPETAggregatedMessage : SISchemaInstrumentationMessage {
    unsigned int  _count;
    PETSchemaPETDistribution * _distribution;
    struct { 
        unsigned int count : 1; 
    }  _has;
    bool  _hasDistribution;
    bool  _hasKey;
    PETSchemaPETAggregationKey * _key;
}

@property (nonatomic) unsigned int count;
@property (nonatomic, retain) PETSchemaPETDistribution *distribution;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasDistribution;
@property (nonatomic) bool hasKey;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PETSchemaPETAggregationKey *key;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned int)count;
- (void)deleteCount;
- (void)deleteDistribution;
- (void)deleteKey;
- (id)dictionaryRepresentation;
- (id)distribution;
- (bool)hasCount;
- (bool)hasDistribution;
- (bool)hasKey;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)key;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setDistribution:(id)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasDistribution:(bool)arg1;
- (void)setHasKey:(bool)arg1;
- (void)setKey:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
