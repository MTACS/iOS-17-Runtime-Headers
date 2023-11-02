
@interface EXPSchemaEXPTrialExperiment : SISchemaInstrumentationMessage {
    int  _allocationStatus;
    unsigned int  _compatibilityVersion;
    long long  _deploymentId;
    NSString * _experimentId;
    NSString * _experimentNamespace;
    struct { 
        unsigned int deploymentId : 1; 
        unsigned int allocationStatus : 1; 
        unsigned int lastUpdatedAtInMs : 1; 
        unsigned int compatibilityVersion : 1; 
    }  _has;
    bool  _hasExperimentId;
    bool  _hasExperimentNamespace;
    bool  _hasTreatmentId;
    unsigned long long  _lastUpdatedAtInMs;
    SISchemaUUID * _treatmentId;
}

@property (nonatomic) int allocationStatus;
@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) long long deploymentId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic, copy) NSString *experimentNamespace;
@property (nonatomic) bool hasAllocationStatus;
@property (nonatomic) bool hasCompatibilityVersion;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasExperimentNamespace;
@property (nonatomic) bool hasLastUpdatedAtInMs;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long lastUpdatedAtInMs;
@property (nonatomic, retain) SISchemaUUID *treatmentId;

- (void).cxx_destruct;
- (int)allocationStatus;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned int)compatibilityVersion;
- (void)deleteAllocationStatus;
- (void)deleteCompatibilityVersion;
- (void)deleteDeploymentId;
- (void)deleteExperimentId;
- (void)deleteExperimentNamespace;
- (void)deleteLastUpdatedAtInMs;
- (void)deleteTreatmentId;
- (long long)deploymentId;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (id)experimentNamespace;
- (bool)hasAllocationStatus;
- (bool)hasCompatibilityVersion;
- (bool)hasDeploymentId;
- (bool)hasExperimentId;
- (bool)hasExperimentNamespace;
- (bool)hasLastUpdatedAtInMs;
- (bool)hasTreatmentId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)lastUpdatedAtInMs;
- (bool)readFrom:(id)arg1;
- (void)setAllocationStatus:(int)arg1;
- (void)setCompatibilityVersion:(unsigned int)arg1;
- (void)setDeploymentId:(long long)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setExperimentNamespace:(id)arg1;
- (void)setHasAllocationStatus:(bool)arg1;
- (void)setHasCompatibilityVersion:(bool)arg1;
- (void)setHasDeploymentId:(bool)arg1;
- (void)setHasExperimentId:(bool)arg1;
- (void)setHasExperimentNamespace:(bool)arg1;
- (void)setHasLastUpdatedAtInMs:(bool)arg1;
- (void)setHasTreatmentId:(bool)arg1;
- (void)setLastUpdatedAtInMs:(unsigned long long)arg1;
- (void)setTreatmentId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)treatmentId;
- (void)writeTo:(id)arg1;

@end
