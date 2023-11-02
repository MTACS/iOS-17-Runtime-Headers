
@protocol REDailyRoutinePredictorDelegate <NSObject>

@optional

- (void)dailyRoutinePredictorDidBeginEveningRoutine:(REDailyRoutinePredictor *)arg1;
- (void)dailyRoutinePredictorDidBeginMorningRoutine:(REDailyRoutinePredictor *)arg1;
- (void)dailyRoutinePredictorDidEndEveningRoutine:(REDailyRoutinePredictor *)arg1;
- (void)dailyRoutinePredictorDidEndMorningRoutine:(REDailyRoutinePredictor *)arg1;
- (void)dailyRoutinePredictorDidUpdatedPredictedRoutines:(REDailyRoutinePredictor *)arg1;

@end
