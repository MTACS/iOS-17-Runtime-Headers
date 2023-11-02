
@interface VCMetricCheckIn : NSObject {
    NSDate * _currentDate;
    long long  _mode;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly, copy) NSDate *checkInDate;
@property (nonatomic, readonly, copy) NSDate *currentDate;
@property (nonatomic, readonly, copy) NSDate *intervalStartDate;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

+ (id)recentCheckInWithMode:(long long)arg1;

- (void).cxx_destruct;
- (id)calendar;
- (id)checkInDate;
- (id)checkInKey;
- (id)currentDate;
- (id)initWithCurrentDate:(id)arg1 mode:(long long)arg2 defaults:(id)arg3;
- (id)intervalStartDate;
- (bool)isCheckInAllowed;
- (long long)mode;
- (void)updateCheckInToNow;
- (id)userDefaults;

@end
