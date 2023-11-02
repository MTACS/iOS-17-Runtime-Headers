
@interface SGMIMetricsTrialMetadata : PBCodable <NSCopying> {
    int  _deploymentId;
    NSString * _experimentId;
    struct { 
        unsigned int deploymentId : 1; 
    }  _has;
    NSString * _treatmentId;
}

@property (nonatomic) int deploymentId;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic, readonly) bool hasExperimentId;
@property (nonatomic, readonly) bool hasTreatmentId;
@property (nonatomic, retain) NSString *treatmentId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (bool)hasDeploymentId;
- (bool)hasExperimentId;
- (bool)hasTreatmentId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeploymentId:(int)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setHasDeploymentId:(bool)arg1;
- (void)setTreatmentId:(id)arg1;
- (id)treatmentId;
- (void)writeTo:(id)arg1;

@end
