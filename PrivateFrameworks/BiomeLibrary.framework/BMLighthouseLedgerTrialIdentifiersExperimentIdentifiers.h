
@interface BMLighthouseLedgerTrialIdentifiersExperimentIdentifiers : BMEventBase <BMStoreData> {
    NSString * _trialDeploymentID;
    NSString * _trialExperimentID;
    NSString * _trialTreatmentID;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *trialDeploymentID;
@property (nonatomic, readonly) NSString *trialExperimentID;
@property (nonatomic, readonly) NSString *trialTreatmentID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTrialExperimentID:(id)arg1 trialDeploymentID:(id)arg2 trialTreatmentID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)trialDeploymentID;
- (id)trialExperimentID;
- (id)trialTreatmentID;
- (void)writeTo:(id)arg1;

@end
