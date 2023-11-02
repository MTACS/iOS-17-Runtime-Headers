
@interface HMMTROTAApplyUpdateRequestTimer : HMFObject <HMFTimerDelegate> {
    HMMTROTAProviderDelegate * _otaProvider;
    HMMTRAccessoryServer * _server;
    HMFTimer * _updateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMMTROTAProviderDelegate *otaProvider;
@property (nonatomic, readonly) HMMTRAccessoryServer *server;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *updateTimer;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithServer:(id)arg1 otaProvider:(id)arg2 queue:(id)arg3;
- (id)logIdentifier;
- (id)otaProvider;
- (id)server;
- (void)setOtaProvider:(id)arg1;
- (void)setUpdateTimer:(id)arg1;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)arg1;
- (id)updateTimer;

@end
