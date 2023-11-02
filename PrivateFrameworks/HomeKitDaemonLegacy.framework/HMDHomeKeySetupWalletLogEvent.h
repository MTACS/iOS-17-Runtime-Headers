
@interface HMDHomeKeySetupWalletLogEvent : HMMLogEvent <HMFTimerDelegate, HMMCoreAnalyticsLogging> {
    bool  _success;
    HMFTimer * _timer;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool success;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *timer;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)submitSuccess;
- (bool)success;
- (void)timeout;
- (id)timer;
- (void)timerDidFire:(id)arg1;

@end
