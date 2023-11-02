
@interface SAABTestExperiment : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *deploymentId;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *experimentId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *treatmentId;

- (id)deploymentId;
- (id)encodedClassName;
- (id)experimentId;
- (id)groupIdentifier;
- (void)setDeploymentId:(id)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setTreatmentId:(id)arg1;
- (id)treatmentId;

@end
