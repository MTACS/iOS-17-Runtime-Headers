
@protocol ATXAnchorModelTrainingDatasetBuilderProtocol <NSObject>

@required

- (long long)addNewTrainingSamplesToDatabase;
- (unsigned long long)cleanupDatasetForPrivacyPreservation;

@end
