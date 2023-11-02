
@interface ATXGamePlayKitDecisionTreeAnchorModelCandidateClassifier : ATXNaivePositiveAnchorModelCandidateClassifier <ATXAnchorModelCandidateClassifierProtocol> {
    ATXAnchorModelHyperParameters * _hyperParameters;
    <ATXAnchorModelDataStoreWrapperProtocol> * _storeWrapper;
    ATXGamePlayKitDecisionTree * _tree;
    NSString * _treeDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *treeDescription;

+ (void)configureKeyedArchiver:(id)arg1;
+ (void)configureKeyedUnarchiver:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorFeaturesWithAnchorOccurrence:(id)arg1;
- (id)candidateFeaturesForActionCandidateOnAnchorOccurrenceDate:(id)arg1 cachedLaunchHistory:(id)arg2;
- (id)candidateFeaturesForAppCandidateOnAnchorOccurrenceDate:(id)arg1 cachedLaunchHistory:(id)arg2;
- (id)candidateFeaturesForLinkActionCandidateOnAnchorOccurrenceDate:(id)arg1 cachedLaunchHistory:(id)arg2;
- (id)candidateFeaturesForModeCandidateOnAnchorOccurrenceDate:(id)arg1 cachedLaunchHistory:(id)arg2;
- (id)candidateFeaturesWithAnchorOccurrence:(id)arg1 trainingResult:(id)arg2;
- (bool)checkAndReportDecodingFailureIfNeededForBOOL:(bool)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (long long)classifierType;
- (id)classifyCandidateForAnchorOccurrence:(id)arg1 trainingResult:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)featureNames;
- (id)featureVectorFromFeatureDictionary:(id)arg1;
- (id)indicesToKeepInTrainingAfterRemovingDuplicateFeatureVectorsWithConflictingLabels:(id)arg1 labels:(id)arg2;
- (id)inferenceFeatureDictForAnchorOccurrence:(id)arg1 trainingResult:(id)arg2;
- (id)initWithCandidateId:(id)arg1 candidateType:(id)arg2 anchor:(id)arg3;
- (id)initWithCandidateId:(id)arg1 candidateType:(id)arg2 anchor:(id)arg3 hyperParameters:(id)arg4;
- (id)initWithCandidateId:(id)arg1 candidateType:(id)arg2 anchor:(id)arg3 hyperParameters:(id)arg4 dataStoreWrapper:(id)arg5;
- (id)initWithCandidateId:(id)arg1 candidateType:(id)arg2 anchor:(id)arg3 tree:(id)arg4 hyperParameters:(id)arg5 dataStoreWrapper:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)labelKey;
- (id)predictWhenNoTreeInitialized;
- (void)setRecentAppLaunchCountsFromAppInfoManager:(id)arg1 anchorOccurrenceDate:(id)arg2;
- (void)setTreeDescription:(id)arg1;
- (bool)shouldComputeLaunchHistoryCounts;
- (id)stringFeaturesToReplaceWithUnk;
- (void)train;
- (id)trainDecisionTree;
- (id)trainingData;
- (id)trainingFeatureVectorsFromTrainingData:(id)arg1;
- (id)trainingLabelsFromTrainingData:(id)arg1;
- (id)tree;
- (id)treeDescription;

@end
