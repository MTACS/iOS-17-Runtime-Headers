
@interface SADSchemaSADTrialNamespaceStatus : SISchemaInstrumentationMessage {
    NSArray * _assets;
    struct { 
        unsigned int trialNamespace : 1; 
    }  _has;
    bool  _hasNamespaceCompatabilityVersion;
    bool  _hasRollout;
    SISchemaVersion * _namespaceCompatabilityVersion;
    SADSchemaSADTrialRollout * _rollout;
    int  _trialNamespace;
}

@property (nonatomic, copy) NSArray *assets;
@property (nonatomic) bool hasNamespaceCompatabilityVersion;
@property (nonatomic) bool hasRollout;
@property (nonatomic) bool hasTrialNamespace;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaVersion *namespaceCompatabilityVersion;
@property (nonatomic, retain) SADSchemaSADTrialRollout *rollout;
@property (nonatomic) int trialNamespace;

- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)assets;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (void)clearAssets;
- (void)deleteAssets;
- (void)deleteNamespaceCompatabilityVersion;
- (void)deleteRollout;
- (void)deleteTrialNamespace;
- (id)dictionaryRepresentation;
- (bool)hasNamespaceCompatabilityVersion;
- (bool)hasRollout;
- (bool)hasTrialNamespace;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)namespaceCompatabilityVersion;
- (bool)readFrom:(id)arg1;
- (id)rollout;
- (void)setAssets:(id)arg1;
- (void)setHasNamespaceCompatabilityVersion:(bool)arg1;
- (void)setHasRollout:(bool)arg1;
- (void)setHasTrialNamespace:(bool)arg1;
- (void)setNamespaceCompatabilityVersion:(id)arg1;
- (void)setRollout:(id)arg1;
- (void)setTrialNamespace:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)trialNamespace;
- (void)writeTo:(id)arg1;

@end
