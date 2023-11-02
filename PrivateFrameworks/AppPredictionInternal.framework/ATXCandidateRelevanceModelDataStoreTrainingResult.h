
@interface ATXCandidateRelevanceModelDataStoreTrainingResult : NSObject {
    ATXCandidate * _candidate;
    NSString * _clientModelName;
    ATXCandidateRelevanceModelDataStoreDatasetMetadata * _datasetMetadata;
    ATXCandidateRelevanceModelFeaturizationManager * _featurizationManager;
    bool  _isVerified;
    ATXCandidateRelevanceModel * _model;
    NSUUID * _modelUUID;
    NSDate * _trainDate;
}

@property (nonatomic, readonly) ATXCandidate *candidate;
@property (nonatomic, readonly) NSString *clientModelName;
@property (nonatomic, readonly) ATXCandidateRelevanceModelDataStoreDatasetMetadata *datasetMetadata;
@property (nonatomic, readonly) ATXCandidateRelevanceModelFeaturizationManager *featurizationManager;
@property (nonatomic, readonly) bool isVerified;
@property (nonatomic, readonly) ATXCandidateRelevanceModel *model;
@property (nonatomic, readonly) NSUUID *modelUUID;
@property (nonatomic, readonly) NSDate *trainDate;

- (void).cxx_destruct;
- (id)candidate;
- (id)clientModelName;
- (id)datasetMetadata;
- (id)description;
- (id)featurizationManager;
- (id)initWithModel:(id)arg1 candidate:(id)arg2 featurizationManager:(id)arg3 modelUUID:(id)arg4 datasetMetadata:(id)arg5 clientModelName:(id)arg6 trainDate:(id)arg7 isVerified:(bool)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXCandidateRelevanceModelDataStoreTrainingResult:(id)arg1;
- (bool)isVerified;
- (id)model;
- (id)modelUUID;
- (id)trainDate;

@end
