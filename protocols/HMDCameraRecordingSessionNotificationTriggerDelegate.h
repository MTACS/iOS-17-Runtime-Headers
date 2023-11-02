
@protocol HMDCameraRecordingSessionNotificationTriggerDelegate <NSObject>

@required

- (void)notificationTrigger:(HMDCameraRecordingSessionNotificationTrigger *)arg1 didObserveTriggerType:(unsigned long long)arg2 changeToActive:(bool)arg3;

@end
