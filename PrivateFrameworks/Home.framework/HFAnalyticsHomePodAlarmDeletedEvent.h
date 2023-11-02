
@interface HFAnalyticsHomePodAlarmDeletedEvent : HFAnalyticsEvent {
    bool  _alarmDeletedSuccessfully;
    float  _customVolumeLevel;
    bool  _hasCustomVolume;
    NSString * _homePodAlarmID;
    bool  _isMusicAlarm;
    NSString * _processName;
}

@property (nonatomic) bool alarmDeletedSuccessfully;
@property (nonatomic) float customVolumeLevel;
@property (nonatomic) bool hasCustomVolume;
@property (nonatomic, retain) NSString *homePodAlarmID;
@property (nonatomic) bool isMusicAlarm;
@property (nonatomic, retain) NSString *processName;

- (void).cxx_destruct;
- (bool)alarmDeletedSuccessfully;
- (float)customVolumeLevel;
- (bool)hasCustomVolume;
- (id)homePodAlarmID;
- (id)initWithData:(id)arg1;
- (bool)isMusicAlarm;
- (id)payload;
- (id)processName;
- (void)setAlarmDeletedSuccessfully:(bool)arg1;
- (void)setCustomVolumeLevel:(float)arg1;
- (void)setHasCustomVolume:(bool)arg1;
- (void)setHomePodAlarmID:(id)arg1;
- (void)setIsMusicAlarm:(bool)arg1;
- (void)setProcessName:(id)arg1;

@end
