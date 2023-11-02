
@interface PHACurareShadowEvaluationRunner : NSObject {
    NSString * _datasetPolicy;
    NSDictionary * _filtersByDatasetName;
    NSString * _fingerprintVersion;
    PGManager * _graphManager;
    NSString * _labelPolicy;
    NSString * _lossName;
    NSArray * _modelInfoArray;
    NSString * _modelInputName;
    NSString * _modelOutputName;
    NSString * _negativesDatasetName;
    NSString * _negativesSubsetName;
    PHPhotoLibrary * _photoLibrary;
    NSString * _positivesDatasetName;
    NSString * _positivesSubsetName;
    NSString * _trialDeploymentID;
    NSString * _trialExperimentID;
    NSString * _trialTreatmentID;
}

@property (nonatomic, retain) NSString *datasetPolicy;
@property (nonatomic, retain) NSDictionary *filtersByDatasetName;
@property (nonatomic, retain) NSString *fingerprintVersion;
@property (nonatomic, retain) PGManager *graphManager;
@property (nonatomic, retain) NSString *labelPolicy;
@property (nonatomic, retain) NSString *lossName;
@property (nonatomic, retain) NSArray *modelInfoArray;
@property (nonatomic, retain) NSString *modelInputName;
@property (nonatomic, retain) NSString *modelOutputName;
@property (nonatomic, retain) NSString *negativesDatasetName;
@property (nonatomic, retain) NSString *negativesSubsetName;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSString *positivesDatasetName;
@property (nonatomic, retain) NSString *positivesSubsetName;
@property (nonatomic, retain) NSString *trialDeploymentID;
@property (nonatomic, retain) NSString *trialExperimentID;
@property (nonatomic, retain) NSString *trialTreatmentID;

+ (id)runnerLog;

- (void).cxx_destruct;
- (id)datasetPolicy;
- (id)evaluateModel:(id)arg1 datasetDictionary:(id)arg2 error:(id*)arg3;
- (id)filtersByDatasetName;
- (id)fingerprintVersion;
- (void)generateCAEventForResults:(id)arg1;
- (id)getDatasetWithError:(id*)arg1;
- (id)graphManager;
- (id)initWithModelInfoArray:(id)arg1 modelInputName:(id)arg2 modelOutputName:(id)arg3 lossName:(id)arg4 fingerprintVersion:(id)arg5 datasetPolicy:(id)arg6 labelPolicy:(id)arg7 positivesDatasetName:(id)arg8 positivesSubsetName:(id)arg9 negativesDatasetName:(id)arg10 negativesSubsetName:(id)arg11 photoLibrary:(id)arg12 graphManager:(id)arg13 filtersByDatasetName:(id)arg14 trialDeploymentID:(id)arg15 trialExperimentID:(id)arg16 trialTreatmentID:(id)arg17;
- (id)labelPolicy;
- (id)lossName;
- (id)modelInfoArray;
- (id)modelInputName;
- (id)modelOutputName;
- (id)negativesDatasetName;
- (id)negativesSubsetName;
- (id)photoLibrary;
- (id)positivesDatasetName;
- (id)positivesSubsetName;
- (bool)runWithError:(id*)arg1;
- (void)setDatasetPolicy:(id)arg1;
- (void)setFiltersByDatasetName:(id)arg1;
- (void)setFingerprintVersion:(id)arg1;
- (void)setGraphManager:(id)arg1;
- (void)setLabelPolicy:(id)arg1;
- (void)setLossName:(id)arg1;
- (void)setModelInfoArray:(id)arg1;
- (void)setModelInputName:(id)arg1;
- (void)setModelOutputName:(id)arg1;
- (void)setNegativesDatasetName:(id)arg1;
- (void)setNegativesSubsetName:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPositivesDatasetName:(id)arg1;
- (void)setPositivesSubsetName:(id)arg1;
- (void)setTrialDeploymentID:(id)arg1;
- (void)setTrialExperimentID:(id)arg1;
- (void)setTrialTreatmentID:(id)arg1;
- (id)trialDeploymentID;
- (id)trialExperimentID;
- (id)trialTreatmentID;

@end
