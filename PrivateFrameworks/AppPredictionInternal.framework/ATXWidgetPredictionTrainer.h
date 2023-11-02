
@interface ATXWidgetPredictionTrainer : NSObject {
    ATXWidgetPredictionTrainingDatasetBuilder * _datasetBuilder;
    NSUserDefaults * _defaults;
    ATXInformationStore * _informationStore;
}

+ (id)compiledModelURLForModelName:(id)arg1;
+ (void)moveOriginalModelToWriteablePath:(id)arg1;
+ (bool)shouldTrainModelOnDeviceWithTimeOfLatestTraining:(id)arg1;

- (void).cxx_destruct;
- (id)_timeOfLatestTraining;
- (void)_updateTimeOfLatestTrainingTo:(id)arg1;
- (id)initWithInformationStore:(id)arg1 distinctScoreCounts:(id)arg2;
- (void)modelPredictionWithSampleDictionaryFeatureProvider:(id)arg1 withMLModel:(id)arg2;
- (void)trainWidgetPredictionModelWithActivity:(id)arg1;
- (void)trainWidgetPredictionModelWithMLArrayBatchProvider:(id)arg1 modelURL:(id)arg2 andSaveToURL:(id)arg3 withActivity:(id)arg4;

@end
