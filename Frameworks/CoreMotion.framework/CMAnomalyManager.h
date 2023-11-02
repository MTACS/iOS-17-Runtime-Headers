
@interface CMAnomalyManager : NSObject {
    <CMAnomalyDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * fAppQueue;
    CMAnomalyEvent * fLastDispatchedEvent;
    CMAnomalyEvent * fLastReceivedEvent;
    void * fLocationdConnection;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    bool  fRegisteredForNotification;
}

@property (nonatomic) <CMAnomalyDelegate> *delegate;

+ (long long)getAnomalyFeatureEnablingStrategyForUserAge:(id)arg1;
+ (bool)isAnomalyDetectionAvailable;

- (void)_registerForAnomalyDetection:(bool)arg1;
- (void)_sendRegistrationForAnomalyEvent:(id)arg1;
- (void)ackAnomalyEvent:(id)arg1 withResolution:(long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)resolveAnomalyEvent:(id)arg1 withResolution:(long long)arg2;
- (void)respondToAnomalyEvent:(id)arg1 withResponse:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)startAnomalyDetection;
- (void)stopAnomalyDetection;
- (void)updateAnomalyEventSOSCallState:(id)arg1 withSOSSCallState:(long long)arg2;

@end
