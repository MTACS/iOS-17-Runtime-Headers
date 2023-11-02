
@interface HMDCameraRecordingClipNotificationEvent : HMDCameraRecordingLogEvent {
    unsigned long long  _recordingEventTriggers;
}

@property (readonly) unsigned long long recordingEventTriggers;

- (id)attributeDescriptions;
- (id)initWithSessionID:(id)arg1 cameraID:(id)arg2 sequenceNumber:(unsigned long long)arg3 recordingEventTriggers:(unsigned long long)arg4;
- (unsigned long long)recordingEventTriggers;

@end
