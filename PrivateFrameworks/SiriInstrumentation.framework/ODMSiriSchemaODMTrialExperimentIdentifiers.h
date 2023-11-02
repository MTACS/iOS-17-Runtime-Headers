
@interface ODMSiriSchemaODMTrialExperimentIdentifiers : SISchemaInstrumentationMessage {
    long long  _deploymentId;
    NSString * _experimentId;
    struct { 
        unsigned int deploymentId : 1; 
    }  _has;
    bool  _hasExperimentId;
    bool  _hasTreatmentId;
    SISchemaUUID * _treatmentId;
}

@property (nonatomic) long long deploymentId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *treatmentId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDeploymentId;
- (void)deleteExperimentId;
- (void)deleteTreatmentId;
- (long long)deploymentId;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (bool)hasDeploymentId;
- (bool)hasExperimentId;
- (bool)hasTreatmentId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDeploymentId:(long long)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setHasDeploymentId:(bool)arg1;
- (void)setHasExperimentId:(bool)arg1;
- (void)setHasTreatmentId:(bool)arg1;
- (void)setTreatmentId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)treatmentId;
- (void)writeTo:(id)arg1;

@end
