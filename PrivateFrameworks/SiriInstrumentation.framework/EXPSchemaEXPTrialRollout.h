
@interface EXPSchemaEXPTrialRollout : SISchemaInstrumentationMessage {
    unsigned int  _deploymentId;
    struct { 
        unsigned int deploymentId : 1; 
        unsigned int status : 1; 
    }  _has;
    bool  _hasRampId;
    bool  _hasRolloutId;
    NSArray * _namespaces;
    NSString * _rampId;
    NSString * _rolloutId;
    int  _status;
}

@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasRampId;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *namespaces;
@property (nonatomic, copy) NSString *rampId;
@property (nonatomic, copy) NSString *rolloutId;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (void)addNamespaces:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearNamespaces;
- (void)deleteDeploymentId;
- (void)deleteNamespaces;
- (void)deleteRampId;
- (void)deleteRolloutId;
- (void)deleteStatus;
- (unsigned int)deploymentId;
- (id)dictionaryRepresentation;
- (bool)hasDeploymentId;
- (bool)hasRampId;
- (bool)hasRolloutId;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)namespaces;
- (id)namespacesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namespacesCount;
- (id)rampId;
- (bool)readFrom:(id)arg1;
- (id)rolloutId;
- (void)setDeploymentId:(unsigned int)arg1;
- (void)setHasDeploymentId:(bool)arg1;
- (void)setHasRampId:(bool)arg1;
- (void)setHasRolloutId:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setNamespaces:(id)arg1;
- (void)setRampId:(id)arg1;
- (void)setRolloutId:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
