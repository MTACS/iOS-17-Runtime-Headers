
@interface DODMLSchemaDODMLClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _dodMlId;
    NSString * _experimentName;
    struct { 
        unsigned int trialDeploymentId : 1; 
    }  _has;
    bool  _hasDodMlId;
    bool  _hasExperimentName;
    bool  _hasTrialExperimentId;
    bool  _hasTrialTreatmentId;
    long long  _trialDeploymentId;
    NSString * _trialExperimentId;
    SISchemaUUID * _trialTreatmentId;
}

@property (nonatomic, retain) SISchemaUUID *dodMlId;
@property (nonatomic, copy) NSString *experimentName;
@property (nonatomic) bool hasDodMlId;
@property (nonatomic) bool hasExperimentName;
@property (nonatomic) bool hasTrialDeploymentId;
@property (nonatomic) bool hasTrialExperimentId;
@property (nonatomic) bool hasTrialTreatmentId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) long long trialDeploymentId;
@property (nonatomic, copy) NSString *trialExperimentId;
@property (nonatomic, retain) SISchemaUUID *trialTreatmentId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDodMlId;
- (void)deleteExperimentName;
- (void)deleteTrialDeploymentId;
- (void)deleteTrialExperimentId;
- (void)deleteTrialTreatmentId;
- (id)dictionaryRepresentation;
- (id)dodMlId;
- (id)experimentName;
- (bool)hasDodMlId;
- (bool)hasExperimentName;
- (bool)hasTrialDeploymentId;
- (bool)hasTrialExperimentId;
- (bool)hasTrialTreatmentId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDodMlId:(id)arg1;
- (void)setExperimentName:(id)arg1;
- (void)setHasDodMlId:(bool)arg1;
- (void)setHasExperimentName:(bool)arg1;
- (void)setHasTrialDeploymentId:(bool)arg1;
- (void)setHasTrialExperimentId:(bool)arg1;
- (void)setHasTrialTreatmentId:(bool)arg1;
- (void)setTrialDeploymentId:(long long)arg1;
- (void)setTrialExperimentId:(id)arg1;
- (void)setTrialTreatmentId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (long long)trialDeploymentId;
- (id)trialExperimentId;
- (id)trialTreatmentId;
- (void)writeTo:(id)arg1;

@end
