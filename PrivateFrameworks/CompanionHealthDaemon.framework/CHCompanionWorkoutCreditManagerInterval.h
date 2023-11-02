
@interface CHCompanionWorkoutCreditManagerInterval : NSObject {
    long long  _activityMoveMode;
    NSDateInterval * _dateInterval;
}

@property (nonatomic, readonly) long long activityMoveMode;
@property (nonatomic, readonly) NSDateInterval *dateInterval;

- (void).cxx_destruct;
- (long long)activityMoveMode;
- (id)dateInterval;
- (id)initWithDateInterval:(id)arg1 activityMoveMode:(long long)arg2;

@end
