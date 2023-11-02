
@interface HMMTROTAApplyUpdateTimer : HMFObject <HMFTimerDelegate> {
    NSNumber * _expectedVersion;
    HMMTROTAProviderDelegate * _otaProvider;
    long long  _retryCount;
    HMMTRAccessoryServer * _server;
    HMFTimer * _updateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *expectedVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMMTROTAProviderDelegate *otaProvider;
@property (nonatomic) long long retryCount;
@property (nonatomic, readonly) HMMTRAccessoryServer *server;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *updateTimer;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)expectedVersion;
- (id)initWithServer:(id)arg1 otaProvider:(id)arg2 newVersion:(id)arg3 delay:(id)arg4 queue:(id)arg5;
- (id)logIdentifier;
- (id)otaProvider;
- (long long)retryCount;
- (id)server;
- (void)setExpectedVersion:(id)arg1;
- (void)setOtaProvider:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setUpdateTimer:(id)arg1;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)arg1;
- (id)updateTimer;

@end
