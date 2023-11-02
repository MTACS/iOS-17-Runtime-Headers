
@interface BMMLSEShareSheetFeedbackTrialIdentifier : BMEventBase <BMStoreData> {
    NSString * _trialDeploymentId;
    NSString * _trialExperimentId;
    NSString * _trialTreatmentId;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *trialDeploymentId;
@property (nonatomic, readonly) NSString *trialExperimentId;
@property (nonatomic, readonly) NSString *trialTreatmentId;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTrialExperimentId:(id)arg1 trialTreatmentId:(id)arg2 trialDeploymentId:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)trialDeploymentId;
- (id)trialExperimentId;
- (id)trialTreatmentId;
- (void)writeTo:(id)arg1;

@end
