
@interface HDDemoDataSleepParameters : NSObject {
    double  _bedtime;
    long long  _bedtimeGoalHour;
    double  _wakeUpTime;
    long long  _wakeUpTimeGoalHour;
}

@property (nonatomic) double bedtime;
@property (nonatomic) long long bedtimeGoalHour;
@property (nonatomic) double wakeUpTime;
@property (nonatomic) long long wakeUpTimeGoalHour;

- (double)bedtime;
- (long long)bedtimeGoalHour;
- (void)setBedtime:(double)arg1;
- (void)setBedtimeGoalHour:(long long)arg1;
- (void)setWakeUpTime:(double)arg1;
- (void)setWakeUpTimeGoalHour:(long long)arg1;
- (double)wakeUpTime;
- (long long)wakeUpTimeGoalHour;

@end
