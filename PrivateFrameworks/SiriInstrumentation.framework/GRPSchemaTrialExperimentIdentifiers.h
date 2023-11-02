
@interface GRPSchemaTrialExperimentIdentifiers : SISchemaInstrumentationMessage {
    NSString * _deploymentId;
    NSString * _experimentId;
    bool  _hasDeploymentId;
    bool  _hasExperimentId;
    bool  _hasTreatmentId;
    NSString * _treatmentId;
}

@property (nonatomic, copy) NSString *deploymentId;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasExperimentId;
@property (nonatomic) bool hasTreatmentId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *treatmentId;

- (void).cxx_destruct;
- (void)deleteDeploymentId;
- (void)deleteExperimentId;
- (void)deleteTreatmentId;
- (id)deploymentId;
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
- (void)setDeploymentId:(id)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setHasDeploymentId:(bool)arg1;
- (void)setHasExperimentId:(bool)arg1;
- (void)setHasTreatmentId:(bool)arg1;
- (void)setTreatmentId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)treatmentId;
- (void)writeTo:(id)arg1;

@end
