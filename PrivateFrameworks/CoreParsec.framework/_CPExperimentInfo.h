
@interface _CPExperimentInfo : PBCodable <NSSecureCoding, _CPExperimentInfo> {
    int  _deploymentId;
    NSString * _experimentId;
    NSString * _namespaceId;
    NSString * _treatmentId;
    int  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int deploymentId;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *experimentId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *namespaceId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *treatmentId;
@property (nonatomic) int version;

- (void).cxx_destruct;
- (int)deploymentId;
- (id)experimentId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)namespaceId;
- (bool)readFrom:(id)arg1;
- (void)setDeploymentId:(int)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setNamespaceId:(id)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setVersion:(int)arg1;
- (id)treatmentId;
- (int)version;
- (void)writeTo:(id)arg1;

@end
