
@interface HMDCameraAccessorySettingsConfiguration : HMFObject {
    bool  _inclusionZone;
    bool  _isRecordingCapable;
    bool  _isRecordingEnabled;
    unsigned long long  _numActivityZones;
    bool  _reachabilityNotificationEnabled;
    unsigned long long  _recordingEventTriggers;
    bool  _smartBulletinBoardNotificationEnabled;
}

@property (readonly) bool inclusionZone;
@property (readonly) bool isRecordingCapable;
@property (readonly) bool isRecordingEnabled;
@property (readonly) unsigned long long numActivityZones;
@property (readonly) bool reachabilityNotificationEnabled;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly) bool smartBulletinBoardNotificationEnabled;

- (bool)inclusionZone;
- (id)initWithCameraAccessory:(id)arg1;
- (bool)isRecordingCapable;
- (bool)isRecordingEnabled;
- (unsigned long long)numActivityZones;
- (bool)reachabilityNotificationEnabled;
- (unsigned long long)recordingEventTriggers;
- (bool)smartBulletinBoardNotificationEnabled;

@end
