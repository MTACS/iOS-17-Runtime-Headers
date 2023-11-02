
@interface ATXAnchorModelPredictionScheduler : NSObject {
    NSUserDefaults * _defaults;
    ATXAnchorModelHyperParameters * _hyperParameters;
    unsigned long long  _maxPredictions;
    NSDate * _now;
    <ATXAnchorModelPredictionForwarderProtocol> * _predictionForwarder;
    _PASLock * _schedulerLock;
    <ATXPETEventTracker2Protocol> * _tracker;
}

- (void).cxx_destruct;
- (void)clearPredictionsForAnchor:(id)arg1;
- (id)criteriaForJobOnDate:(id)arg1;
- (bool)dateIsInFuture:(id)arg1 now:(id)arg2;
- (id)dateOfSoonestUpcomingPredictionChange;
- (id)deduplicatedPredictions:(id)arg1;
- (id)deserializePredictionsDataOrInitializeDictionary:(id)arg1;
- (id)earlierDateInFuture:(id)arg1 earliestDateSoFar:(id)arg2 now:(id)arg3;
- (void)forwardPredictionUpdates;
- (void)forwardPredictionUpdatesOnDate:(id)arg1;
- (id)init;
- (id)initWithPredictionForwarder:(id)arg1 hyperParameters:(id)arg2 tracker:(id)arg3 now:(id)arg4 maxPredictions:(unsigned long long)arg5;
- (void)initializeLock;
- (void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)arg1;
- (id)now;
- (void)persistPredictions:(id)arg1 anchor:(id)arg2;
- (id)predictions;
- (id)predictionsAfterFilteringInactiveAnchors:(id)arg1;
- (id)predictionsValidNow;
- (id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
- (id)readPredictionsFromUserDefaults;
- (void)registerXPCActivityForPredictionUpdateWithCriteria:(id)arg1;
- (void)scheduleExistingPredictions;
- (void)scheduleNextPredictionUpdate;
- (void)schedulePredictions:(id)arg1 anchor:(id)arg2;
- (id)serializePredictions:(id)arg1;
- (void)writePredictionsToUserDefaults:(id)arg1;

@end
