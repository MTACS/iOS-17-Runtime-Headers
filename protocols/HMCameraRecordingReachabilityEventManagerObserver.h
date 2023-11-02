
@protocol HMCameraRecordingReachabilityEventManagerObserver <NSObject>

@required

- (void)reachabilityEventManager:(HMCameraRecordingReachabilityEventManager *)arg1 didRemoveReachabilityEventsWithUUIDs:(NSSet *)arg2;
- (void)reachabilityEventManager:(HMCameraRecordingReachabilityEventManager *)arg1 didUpdateReachabilityEvents:(NSSet *)arg2;

@end
