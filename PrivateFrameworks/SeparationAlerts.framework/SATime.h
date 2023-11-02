
@interface SATime : NSObject <SATimeServiceProtocol> {
    void * _alarmQueue;
    <SATimeEventRequestProtocol> * _externalTimer;
    bool  _isReplay;
    NSDate * _now;
    NSMutableSet * _ongoingAlarms;
}

@property (nonatomic) void*alarmQueue;
@property (nonatomic) <SATimeEventRequestProtocol> *externalTimer;
@property (nonatomic) bool isReplay;
@property (nonatomic, readonly) NSDate *now;
@property (nonatomic, retain) NSMutableSet *ongoingAlarms;

- (void).cxx_destruct;
- (void)addAlarm:(id)arg1;
- (void)advanceTimeWithEvent:(id)arg1;
- (unsigned long long)alarmCount;
- (void)alarmFired:(id)arg1;
- (void*)alarmQueue;
- (void)cancelAlarmWithUUID:(id)arg1;
- (void)dealloc;
- (id)earliestAlarm;
- (id)externalTimer;
- (void)fireAlarmsIfReady;
- (id)getCurrentTime;
- (id)getEarliestAlarmDate;
- (void)ingestTAEvent:(id)arg1;
- (id)initWithExternalTimer:(id)arg1 isReplay:(bool)arg2;
- (bool)isReplay;
- (id)now;
- (id)ongoingAlarms;
- (void)popAlarm;
- (void)setAlarmQueue:(void*)arg1;
- (void)setExternalTimer:(id)arg1;
- (void)setIsReplay:(bool)arg1;
- (void)setOngoingAlarms:(id)arg1;
- (id)setupAlarmFireAt:(id)arg1 forClient:(id)arg2;

@end
