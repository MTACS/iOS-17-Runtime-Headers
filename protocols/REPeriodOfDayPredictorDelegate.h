
@protocol REPeriodOfDayPredictorDelegate <REPredictorObserver>

@optional

- (void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(REPeriodOfDayPredictor *)arg1;
- (void)periodOfDayPredictorDidUpdatePredictedIntervals:(REPeriodOfDayPredictor *)arg1;

@end
