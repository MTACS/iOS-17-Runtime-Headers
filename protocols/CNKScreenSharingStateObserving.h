
@protocol CNKScreenSharingStateObserving

@optional

- (void)screenSharingStateMonitor:(id <CNKScreenSharingStateMonitorProtocol>)arg1 didUpdateScreenSharingBroadcastingState:(bool)arg2;
- (void)screenSharingStateMonitor:(id <CNKScreenSharingStateMonitorProtocol>)arg1 didUpdateScreenSharingState:(bool)arg2;
- (void)screenSharingStateMonitorDidUpdateScreenInfoForParticipant:(id <CNKScreenSharingStateMonitorProtocol>)arg1;

@end
