
@interface TRITrialExperimentFields : PBCodable <NSCopying> {
    NSString * _clientExperimentId;
    NSString * _clientTreatmentId;
}

@property (nonatomic, retain) NSString *clientExperimentId;
@property (nonatomic, retain) NSString *clientTreatmentId;
@property (nonatomic, readonly) bool hasClientExperimentId;
@property (nonatomic, readonly) bool hasClientTreatmentId;

- (void).cxx_destruct;
- (id)clientExperimentId;
- (id)clientTreatmentId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientExperimentId;
- (bool)hasClientTreatmentId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientExperimentId:(id)arg1;
- (void)setClientTreatmentId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
