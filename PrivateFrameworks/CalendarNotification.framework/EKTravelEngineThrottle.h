
@interface EKTravelEngineThrottle : NSObject {
    id /* block */  _cancelHypothesisRequestRefreshBlock;
    id /* block */  _emissionBlock;
    NSString * _eventExternalURL;
    NSDate * _nextEmissionDate;
    id /* block */  _requestHypothesisRefreshBlock;
    bool  _running;
    NSObject<OS_dispatch_queue> * _throttleQueue;
}

@property (nonatomic, copy) id /* block */ cancelHypothesisRequestRefreshBlock;
@property (nonatomic, copy) id /* block */ emissionBlock;
@property (retain) NSString *eventExternalURL;
@property (nonatomic, retain) NSDate *nextEmissionDate;
@property (nonatomic, copy) id /* block */ requestHypothesisRefreshBlock;
@property (nonatomic) bool running;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *throttleQueue;

+ (double)_requestHypothesisRefreshInterval;
+ (double)emissionThresholdTimeInterval;

- (void).cxx_destruct;
- (void)_createEmissionTimerWithDate:(id)arg1;
- (void)_emissionTimerFired;
- (void)_fireEmissionBlock;
- (void)_registerForNotificationObservation;
- (void)_significantTimeChangeNotificationReceived;
- (void)_uninstallEmissionTimer;
- (void)_updateEmissionDate:(id)arg1;
- (id)alarmName;
- (id /* block */)cancelHypothesisRequestRefreshBlock;
- (void)dealloc;
- (id)description;
- (id /* block */)emissionBlock;
- (id)eventExternalURL;
- (id)init;
- (id)nextEmissionDate;
- (bool)receivedAlarmNamed:(id)arg1;
- (id /* block */)requestHypothesisRefreshBlock;
- (bool)running;
- (void)setCancelHypothesisRequestRefreshBlock:(id /* block */)arg1;
- (void)setEmissionBlock:(id /* block */)arg1;
- (void)setEventExternalURL:(id)arg1;
- (void)setNextEmissionDate:(id)arg1;
- (void)setRequestHypothesisRefreshBlock:(id /* block */)arg1;
- (void)setRunning:(bool)arg1;
- (void)setThrottleQueue:(id)arg1;
- (void)tearDown;
- (id)throttleQueue;
- (void)updatePredictedDepartureDate:(id)arg1;

@end
