
@protocol HMCameraRecordingEventManagerObserver

@required

- (void)recordingEventManager:(HMCameraRecordingEventManager *)arg1 didRemoveRecordingEventsWithUUIDs:(NSSet *)arg2;
- (void)recordingEventManager:(HMCameraRecordingEventManager *)arg1 didUpdateRecordingEvents:(NSSet *)arg2;

@end
