
@interface HDAudioAnalyticsExposureCalculator : NSObject {
    long long  _audioExposureType;
    HDProfile * _profile;
    NSDate * _targetDate;
}

@property (nonatomic) long long audioExposureType;
@property (nonatomic, retain) HDProfile *profile;
@property (nonatomic, retain) NSDate *targetDate;

- (void).cxx_destruct;
- (id)audioExposureResultWithError:(id*)arg1;
- (long long)audioExposureType;
- (id)initWithTargetDate:(id)arg1 exposureType:(long long)arg2 profile:(id)arg3;
- (id)notificationCountForRollingDays:(long long)arg1 error:(id*)arg2;
- (id)profile;
- (void)setAudioExposureType:(long long)arg1;
- (void)setProfile:(id)arg1;
- (void)setTargetDate:(id)arg1;
- (id)sevenDayDoseForMostRecentNotificationWithError:(id*)arg1;
- (id)targetDate;

@end
