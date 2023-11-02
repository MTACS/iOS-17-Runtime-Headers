
@protocol CNKScreenSharingStateMonitorProtocol <NSObject>

@required

- (void)addObserver:(id <CNKScreenSharingStateObserving>)arg1;
- (TUCall *)call;
- (struct CGSize { double x1; double x2; })currentlySharingParticipantContentsSize;
- (bool)isBroadcastingScreenSharing;
- (void)removeObserver:(id <CNKScreenSharingStateObserving>)arg1;
- (void)setCall:(TUCall *)arg1;
- (void)setIsBroadcastingScreenSharing:(bool)arg1;

@end
