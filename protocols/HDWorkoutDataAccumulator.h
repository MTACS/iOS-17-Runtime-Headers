
@protocol HDWorkoutDataAccumulator <NSObject>

@required

- (void)addDataAccumulationObserver:(id <HDWorkoutDataAccumulatorObserver>)arg1;
- (NSArray *)currentEvents;
- (void)removeDataAccumulationObserver:(id <HDWorkoutDataAccumulatorObserver>)arg1;
- (NSDate *)startDate;

@end
