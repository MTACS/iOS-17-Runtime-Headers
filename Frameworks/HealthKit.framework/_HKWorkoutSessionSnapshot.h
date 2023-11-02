
@interface _HKWorkoutSessionSnapshot : NSObject <NSSecureCoding> {
    HKWorkoutActivity * _currentActivity;
    NSDate * _endDate;
    long long  _sessionState;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) HKWorkoutActivity *currentActivity;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly) long long sessionState;
@property (nonatomic, readonly, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSessionState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 currentActivity:(id)arg4;
- (id)currentActivity;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (long long)sessionState;
- (id)startDate;

@end
