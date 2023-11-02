
@interface DSCoreAnalyticsEventHandler : NSObject {
    DSSessionMetric * _sessionMetric;
}

- (void).cxx_destruct;
- (void)dsFirstListenerSessionSetUnsuccessful;
- (void)dsProviderAvailable;
- (void)dsProviderUnavailable;
- (void)dsSessionCompletedWithStopReason:(int)arg1 numHeartbeats:(unsigned long long)arg2 numMotionStateMessages:(unsigned long long)arg3 activeProviderLostCount:(unsigned long long)arg4 dataLinkType:(int)arg5 maxListenerClients:(unsigned long long)arg6 avgListenerStartInterval:(double)arg7;
- (void)dsSessionStartedWithDeviceRole:(int)arg1 numPotentialProviders:(unsigned long long)arg2 unterminatedSession:(bool)arg3;
- (id)init;

@end
