
@interface SADSchemaSADTrialRollout : SISchemaInstrumentationMessage {
    unsigned int  _deployment;
    NSString * _factorPack;
    struct { 
        unsigned int deployment : 1; 
    }  _has;
    bool  _hasFactorPack;
    bool  _hasRolloutId;
    NSString * _rolloutId;
}

@property (nonatomic) unsigned int deployment;
@property (nonatomic, copy) NSString *factorPack;
@property (nonatomic) bool hasDeployment;
@property (nonatomic) bool hasFactorPack;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *rolloutId;

- (void).cxx_destruct;
- (void)deleteDeployment;
- (void)deleteFactorPack;
- (void)deleteRolloutId;
- (unsigned int)deployment;
- (id)dictionaryRepresentation;
- (id)factorPack;
- (bool)hasDeployment;
- (bool)hasFactorPack;
- (bool)hasRolloutId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)rolloutId;
- (void)setDeployment:(unsigned int)arg1;
- (void)setFactorPack:(id)arg1;
- (void)setHasDeployment:(bool)arg1;
- (void)setHasFactorPack:(bool)arg1;
- (void)setHasRolloutId:(bool)arg1;
- (void)setRolloutId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
