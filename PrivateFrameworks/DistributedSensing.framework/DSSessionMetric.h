
@interface DSSessionMetric : NSObject {
    unsigned long long  _activeProviderLostCount;
    double  _avgListenerStartInterval;
    int  _deviceRole;
    NSString * _eventName;
    bool  _isSessionStartUnsuccessful;
    int  _linkType;
    unsigned long long  _maxListenerClients;
    unsigned long long  _numHeartbeats;
    unsigned long long  _numMotionStateMessages;
    unsigned long long  _numPotentialProviders;
    unsigned long long  _providerAvailability;
    NSDate * _providerAvailableStartTime;
    double  _sessionDuration;
    NSDate * _sessionStartTime;
    int  _sessionStopReason;
    double  _totalProviderAvailableDuration;
    bool  _unterminatedSession;
}

@property (nonatomic, retain) NSString *eventName;

- (void).cxx_destruct;
- (void)dsFirstListenerSessionSetUnsuccessful;
- (void)dsProviderAvailable;
- (void)dsProviderUnavailable;
- (void)dsSessionCompletedWithStopReason:(int)arg1 numHeartbeats:(unsigned long long)arg2 numMotionStateMessages:(unsigned long long)arg3 activeProviderLostCount:(unsigned long long)arg4 dataLinkType:(int)arg5 maxListenerClients:(unsigned long long)arg6 avgListenerStartInterval:(double)arg7;
- (void)dsSessionStartedWithDeviceRole:(int)arg1 numPotentialProviders:(unsigned long long)arg2 unterminatedSession:(bool)arg3;
- (id)eventName;
- (id)init;
- (id)sessionMetricFinalize;
- (void)setEventName:(id)arg1;

@end
