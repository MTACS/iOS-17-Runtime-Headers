
@interface ATXAnchorModelAnchorEventHandler : NSObject {
    ATXAnchor * _anchor;
    ATXDuetEvent * _anchorEvent;
    NSDate * _baseDate;
    <ATXAnchorModelDataStoreWrapperProtocol> * _dataStoreWrapper;
    ATXAnchorModelHyperParameters * _hyperParameters;
    <ATXPETEventTracker2Protocol> * _tracker;
}

@property (nonatomic, readonly) ATXAnchor *anchor;
@property (nonatomic, readonly) ATXDuetEvent *anchorEvent;

- (void).cxx_destruct;
- (void)_logPhaseFilteredMetricFromTrainingResults:(id)arg1 anchorModelPredictions:(id)arg2;
- (id)anchor;
- (id)anchorEvent;
- (id)anchorModelPredictionFromTrainingResult:(id)arg1 classificationResult:(id)arg2;
- (id)dateIntervalFromTrainingResult:(id)arg1;
- (id)initWithAnchor:(id)arg1 anchorEvent:(id)arg2;
- (id)initWithAnchor:(id)arg1 anchorEvent:(id)arg2 dataStoreWrapper:(id)arg3 hyperParameters:(id)arg4 tracker:(id)arg5;
- (id)predictionForCandidateFromTrainingResult:(id)arg1;
- (bool)predictionIsHighConfidence:(id)arg1;
- (bool)predictionIsMediumConfidence:(id)arg1;
- (double)predictionScoreFromTrainingResult:(id)arg1;
- (id)predictionsForAnchorEvent;

@end
