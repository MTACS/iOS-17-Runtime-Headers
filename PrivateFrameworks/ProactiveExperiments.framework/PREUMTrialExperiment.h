
@interface PREUMTrialExperiment : PBCodable <NSCopying> {
    NSString * _experimentId;
    NSString * _treatmentId;
    NSString * _treatmentModelName;
}

@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic, readonly) bool hasExperimentId;
@property (nonatomic, readonly) bool hasTreatmentId;
@property (nonatomic, readonly) bool hasTreatmentModelName;
@property (nonatomic, retain) NSString *treatmentId;
@property (nonatomic, retain) NSString *treatmentModelName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (bool)hasExperimentId;
- (bool)hasTreatmentId;
- (bool)hasTreatmentModelName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setTreatmentModelName:(id)arg1;
- (id)treatmentId;
- (id)treatmentModelName;
- (void)writeTo:(id)arg1;

@end
