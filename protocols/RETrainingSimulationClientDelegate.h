
@protocol RETrainingSimulationClientDelegate <NSObject>

@optional

- (void)availableRelevanceEnginesDidChangeForTrainingSimulationClient:(RETrainingSimulationClient *)arg1;
- (void)trainingSimulationClientWasInterrupted:(RETrainingSimulationClient *)arg1;
- (void)trainingSimulationClientWasInvalidated:(RETrainingSimulationClient *)arg1;

@end
