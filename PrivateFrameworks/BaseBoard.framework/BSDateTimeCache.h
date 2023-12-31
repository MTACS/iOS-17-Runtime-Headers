
@interface BSDateTimeCache : NSObject {
    double  _2daysFromNow;
    double  _6daysAgo;
    bool  _isResetting;
    double  _lastAttemptedResetTime;
    double  _lastSuccessfulResetTime;
    double  _nextWeek;
    double  _prevWeek;
    double  _today;
    double  _tomorrow;
    double  _yesterday;
}

+ (id)sharedInstance;

- (void)_resetAndConfigure;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isToday:(double)arg1;
- (bool)isTomorrow:(double)arg1;
- (bool)isWithinNextWeek:(double)arg1;
- (bool)isWithinPrevWeek:(double)arg1;
- (bool)isWithinPrevWeek:(double)arg1 includeToday:(bool)arg2;
- (bool)isYesterday:(double)arg1;
- (double)nextWeek;
- (double)prevWeek;
- (double)today;
- (double)tomorrow;
- (double)yesterday;

@end
