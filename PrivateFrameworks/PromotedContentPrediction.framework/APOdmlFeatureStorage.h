
@interface APOdmlFeatureStorage : APOdmlCoreDataStorage {
    int  _deploymentID;
    NSString * _experimentID;
    NSString * _treatmentID;
    NSString * _trialNamespace;
}

@property (nonatomic) int deploymentID;
@property (nonatomic, retain) NSString *experimentID;
@property (nonatomic, retain) NSString *treatmentID;
@property (nonatomic, retain) NSString *trialNamespace;

- (void).cxx_destruct;
- (void)deleteExpiredFeaturesForName:(id)arg1;
- (int)deploymentID;
- (id)experimentID;
- (id)featureForName:(id)arg1;
- (id)featureForName:(id)arg1 backgroundContext:(id)arg2;
- (id)featuresForName:(id)arg1 fetchLimit:(unsigned long long)arg2 backgroundContext:(id)arg3;
- (id)initWithExperimentID:(id)arg1 treatmentID:(id)arg2 deploymentID:(int)arg3 trialNamespace:(id)arg4;
- (id)saveFeatureFromObject:(id)arg1 withName:(id)arg2;
- (void)setDeploymentID:(int)arg1;
- (void)setExperimentID:(id)arg1;
- (void)setTreatmentID:(id)arg1;
- (void)setTrialNamespace:(id)arg1;
- (id)treatmentID;
- (id)trialNamespace;

@end
