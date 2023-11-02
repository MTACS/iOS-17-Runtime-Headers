
@protocol _CPExperimentInfo <NSObject>

@required

- (int)deploymentId;
- (NSString *)experimentId;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)namespaceId;
- (void)setDeploymentId:(int)arg1;
- (void)setExperimentId:(NSString *)arg1;
- (void)setNamespaceId:(NSString *)arg1;
- (void)setTreatmentId:(NSString *)arg1;
- (void)setVersion:(int)arg1;
- (NSString *)treatmentId;
- (int)version;

@end
