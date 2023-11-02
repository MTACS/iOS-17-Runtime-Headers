
@interface PLClusterTimeInfo : NSObject {
    NSCalendar * _calendar;
    double  _endOfSameDayTimestamp;
    NSDate * _latestUTCDate;
    double  _maximumNextDayTimestamp;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) double endOfSameDayTimestamp;
@property (nonatomic, readonly, retain) NSDate *latestUTCDate;
@property (nonatomic, readonly) double maximumNextDayTimestamp;

- (void).cxx_destruct;
- (void)_updateTimestampsWithUTCDate:(id)arg1 localDate:(id)arg2;
- (id)calendar;
- (double)endOfSameDayTimestamp;
- (id)initWithCalendar:(id)arg1;
- (id)latestUTCDate;
- (double)maximumNextDayTimestamp;
- (void)reset;
- (void)updateWithUTCDate:(id)arg1 localDate:(id)arg2;
- (bool)utcDateBelongsInCluster:(id)arg1;

@end
