
@interface HMDAccessoryRetrievalCompletionTuple : HMFObject <HMFTimerDelegate> {
    HMDAccessory * _accessory;
    NSMutableArray * _completions;
    HMDHome * _home;
    long long  _linkType;
    double  _retrievalTimeout;
    HMFTimer * _timer;
}

@property (nonatomic) HMDAccessory *accessory;
@property (nonatomic, retain) NSMutableArray *completions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic) long long linkType;
@property (nonatomic) double retrievalTimeout;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMFTimer *timer;

- (void).cxx_destruct;
- (id)accessory;
- (void)addCompletion:(id /* block */)arg1;
- (id)completions;
- (id)home;
- (id)initWithHome:(id)arg1 accessory:(id)arg2 linkType:(long long)arg3;
- (long long)linkType;
- (double)retrievalTimeout;
- (void)setAccessory:(id)arg1;
- (void)setCompletions:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setLinkType:(long long)arg1;
- (void)setRetrievalTimeout:(double)arg1;
- (void)setTimer:(id)arg1;
- (void)start;
- (void)stop;
- (id)timer;
- (void)timerDidFire:(id)arg1;

@end
