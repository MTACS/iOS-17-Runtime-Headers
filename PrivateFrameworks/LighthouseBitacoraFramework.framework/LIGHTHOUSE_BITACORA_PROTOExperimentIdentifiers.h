
@interface LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers : PBCodable <NSCopying> {
    NSString * _trialDeploymentID;
    NSString * _trialExperimentID;
    NSString * _trialTreatmentID;
}

@property (nonatomic, readonly) bool hasTrialDeploymentID;
@property (nonatomic, readonly) bool hasTrialExperimentID;
@property (nonatomic, readonly) bool hasTrialTreatmentID;
@property (nonatomic, retain) NSString *trialDeploymentID;
@property (nonatomic, retain) NSString *trialExperimentID;
@property (nonatomic, retain) NSString *trialTreatmentID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTrialDeploymentID;
- (bool)hasTrialExperimentID;
- (bool)hasTrialTreatmentID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTrialDeploymentID:(id)arg1;
- (void)setTrialExperimentID:(id)arg1;
- (void)setTrialTreatmentID:(id)arg1;
- (id)trialDeploymentID;
- (id)trialExperimentID;
- (id)trialTreatmentID;
- (void)writeTo:(id)arg1;

@end
