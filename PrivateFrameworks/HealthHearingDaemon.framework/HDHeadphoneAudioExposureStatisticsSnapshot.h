
@interface HDHeadphoneAudioExposureStatisticsSnapshot : NSObject {
    bool  _includesPrunableData;
    NSDate * _previousNotificationDate;
    HKStatistics * _statistics;
}

@property (nonatomic, readonly) bool includesPrunableData;
@property (nonatomic, readonly) NSDate *previousNotificationDate;
@property (nonatomic, readonly) HKStatistics *statistics;

- (void).cxx_destruct;
- (bool)includesPrunableData;
- (id)initWithStatistics:(id)arg1 includesPrunableData:(bool)arg2 previousNotificationDate:(id)arg3;
- (id)previousNotificationDate;
- (id)statistics;
- (id)unitTesting_hearingSevenDayDoseCategorySampleWithNow:(id)arg1 error:(id*)arg2;

@end
