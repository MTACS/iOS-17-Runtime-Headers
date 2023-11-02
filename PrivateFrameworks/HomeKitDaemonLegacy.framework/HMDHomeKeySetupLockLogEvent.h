
@interface HMDHomeKeySetupLockLogEvent : HMMLogEvent <HMFTimerDelegate, HMMCoreAnalyticsLogging> {
    NSUUID * _accessoryUUID;
    long long  _completedCount;
    long long  _expectedCount;
    unsigned long long  _keyType;
    bool  _success;
    HMFTimer * _timer;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly, copy) NSUUID *accessoryUUID;
@property long long completedCount;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long expectedCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) unsigned long long keyType;
@property (readonly) bool success;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *timer;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (long long)completedCount;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (long long)expectedCount;
- (bool)incrementCompleted;
- (id)initWithAccessoryUUID:(id)arg1 withKeyType:(unsigned long long)arg2 expectedCount:(long long)arg3 queue:(id)arg4;
- (unsigned long long)keyType;
- (void)setCompletedCount:(long long)arg1;
- (void)setExpectedCount:(long long)arg1;
- (void)setTimer:(id)arg1;
- (void)submitSuccess;
- (bool)success;
- (void)timeout;
- (id)timer;
- (void)timerDidFire:(id)arg1;

@end
