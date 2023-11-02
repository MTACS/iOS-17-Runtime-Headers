
@interface HDSPWakeUpResultsNotificationBuilder : NSObject {
    NSArray * _daySummaries;
    struct { 
        long long start; 
        long long duration; 
    }  _morningIndexRange;
    NSString * _userFirstName;
}

@property (nonatomic, readonly) NSArray *daySummaries;
@property (nonatomic, readonly) struct { long long x1; long long x2; } morningIndexRange;
@property (nonatomic, readonly) NSString *userFirstName;

- (void).cxx_destruct;
- (bool)_didMeetSleepDurationGoalLastNight;
- (id)_notificationForCategory:(unsigned long long)arg1 morningIndexRange:(struct { long long x1; long long x2; })arg2 goalAchieved:(id)arg3;
- (long long)_randomNotificationVariantForCategory:(unsigned long long)arg1;
- (id)_sleepDurationGoalAchievedLastNightNotification;
- (id)_sleepDurationGoalAchievedShortWeekNotification;
- (id)_sleepDurationGoalAchievedTwoWeekNotification;
- (id)buildNotification;
- (id)daySummaries;
- (id)initWithDaySummaries:(id)arg1 morningIndexRange:(struct { long long x1; long long x2; })arg2 userFirstName:(id)arg3;
- (struct { long long x1; long long x2; })morningIndexRange;
- (id)userFirstName;

@end
