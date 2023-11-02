
@interface _ATXAppHistoricalAverageDose : NSObject {
    NSDate * _currentDay;
    double  _currentDuration;
    int  _dayCount;
    _ATXMovingAverage * _movingAverage;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) _ATXMovingAverage *movingAverage;

- (void).cxx_destruct;
- (void)_finishCurrentDay;
- (void)_updateMovingAverageForOneDay:(double)arg1;
- (void)addDuration:(id)arg1 endDate:(id)arg2;
- (id)initWith:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 alpha:(double)arg4;
- (id)movingAverage;
- (void)skipTo:(id)arg1;

@end
