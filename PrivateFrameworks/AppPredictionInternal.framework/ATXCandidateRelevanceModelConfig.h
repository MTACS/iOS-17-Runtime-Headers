
@interface ATXCandidateRelevanceModelConfig : NSObject {
    NSString * _abGroupIdentifier;
    ATXProactiveSuggestionClientModel * _clientModel;
    <ATXCandidateRelevanceModelDataStoreProtocol> * _datastore;
    NSArray * _featurizers;
    NSSet * _installedAppsKnownToSpringBoard;
    NSObject<ATXCandidateRelevanceModelTrainingPlanProtocol> * _modelTrainingPlan;
    NSDictionary * _parameters;
}

@property (nonatomic, readonly) NSString *abGroupIdentifier;
@property (nonatomic, retain) ATXProactiveSuggestionClientModel *clientModel;
@property (nonatomic, retain) <ATXCandidateRelevanceModelDataStoreProtocol> *datastore;
@property (nonatomic, readonly) NSArray *featurizers;
@property (nonatomic, retain) NSSet *installedAppsKnownToSpringBoard;
@property (nonatomic, retain) NSObject<ATXCandidateRelevanceModelTrainingPlanProtocol> *modelTrainingPlan;

- (void).cxx_destruct;
- (id)abGroupIdentifier;
- (bool)candidateIsStillValidToSuggest:(id)arg1;
- (id)candidatePublisherFromStartTime:(double)arg1;
- (id)clientModel;
- (float)dataHarvestingSamplingRate;
- (id)datasetGenerator;
- (id)datastore;
- (id)featurizers;
- (id)featurizersFromConfigPlist;
- (id)heuristicSuggestionsForContext:(id)arg1 currentSuggestionExecutableIds:(id)arg2;
- (id)init;
- (id)initWithAppIconState:(id)arg1;
- (id)installedAppsKnownToSpringBoard;
- (bool)isEnabled;
- (int)maximumNumberOfTrainedCandidates;
- (int)minimumNumberOfDaysWithPositiveSamplesForCandidate;
- (int)minimumNumberOfDaysWithPositiveSamplesOverall;
- (int)minimumNumberOfDaysWithSamplesForCandidate;
- (int)minimumNumberOfPositiveSamplesForCandidate;
- (int)minimumNumberOfPositiveSamplesOverall;
- (int)minimumNumberOfSamplesForCandidate;
- (id)modelTrainingPlan;
- (id)modelTrainingPlanParameters;
- (id)proactiveSuggestionForCandidate:(id)arg1 prediction:(float)arg2;
- (void)setClientModel:(id)arg1;
- (void)setDatastore:(id)arg1;
- (void)setInstalledAppsKnownToSpringBoard:(id)arg1;
- (void)setModelTrainingPlan:(id)arg1;
- (bool)shouldTrainModelWithCandidateDatasetMetadata:(id)arg1;
- (bool)shouldTrainModelWithOverallDatasetMetadata:(id)arg1;
- (bool)shouldTrainModelWithPositiveCandidateDatasetMetadata:(id)arg1;

@end
