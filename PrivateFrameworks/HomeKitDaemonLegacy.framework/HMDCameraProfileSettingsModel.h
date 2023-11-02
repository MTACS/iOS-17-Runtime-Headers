
@interface HMDCameraProfileSettingsModel : HMBModel {
    bool  _cameraManuallyDisabled;
    unsigned long long  _currentAccessMode;
}

@property unsigned long long accessModeAtHome;
@property (copy) NSNumber *accessModeAtHomeField;
@property (readonly) bool accessModeChangeNotificationEnabled;
@property (copy) NSNumber *accessModeChangeNotificationEnabledField;
@property bool accessModeIndicatorEnabled;
@property (copy) NSNumber *accessModeIndicatorEnabledField;
@property unsigned long long accessModeNotAtHome;
@property (copy) NSNumber *accessModeNotAtHomeField;
@property (retain) NSSet *activityZones;
@property (copy) NSData *activityZonesField;
@property bool activityZonesIncludedForSignificantEventDetection;
@property (copy) NSNumber *activityZonesIncludedForSignificantEventDetectionField;
@property bool cameraManuallyDisabled;
@property unsigned long long currentAccessMode;
@property (readonly) bool hasAnyNotificationFieldsSet;
@property (readonly) unsigned long long mostPrivateAccessMode;
@property bool nightVisionModeEnabled;
@property (copy) NSNumber *nightVisionModeEnabledField;
@property bool periodicSnapshotsAllowed;
@property (copy) NSNumber *periodicSnapshotsAllowedField;
@property (readonly) bool reachabilityEventNotificationEnabled;
@property (copy) NSNumber *reachabilityEventNotificationEnabledField;
@property bool recordingAudioEnabled;
@property (copy) NSNumber *recordingAudioEnabledField;
@property unsigned long long recordingEventTriggers;
@property (copy) NSNumber *recordingEventTriggersField;
@property (readonly) HMDBulletinBoardNotification *smartBulletinBoardNotification;
@property (copy) NSData *smartBulletinBoardNotificationDataField;
@property bool snapshotsAllowed;
@property (copy) NSNumber *snapshotsAllowedField;
@property long long version;
@property (copy) NSNumber *versionField;

+ (id)hmbProperties;

- (unsigned long long)accessModeAtHome;
- (bool)accessModeChangeNotificationEnabled;
- (bool)accessModeIndicatorEnabled;
- (unsigned long long)accessModeNotAtHome;
- (id)activityZones;
- (bool)activityZonesIncludedForSignificantEventDetection;
- (bool)cameraManuallyDisabled;
- (unsigned long long)currentAccessMode;
- (bool)hasAnyNotificationFieldsSet;
- (unsigned long long)mostPrivateAccessMode;
- (bool)nightVisionModeEnabled;
- (bool)periodicSnapshotsAllowed;
- (bool)reachabilityEventNotificationEnabled;
- (bool)recordingAudioEnabled;
- (unsigned long long)recordingEventTriggers;
- (void)setAccessModeAtHome:(unsigned long long)arg1;
- (void)setAccessModeIndicatorEnabled:(bool)arg1;
- (void)setAccessModeNotAtHome:(unsigned long long)arg1;
- (void)setActivityZones:(id)arg1;
- (void)setActivityZonesIncludedForSignificantEventDetection:(bool)arg1;
- (void)setCameraManuallyDisabled:(bool)arg1;
- (void)setCurrentAccessMode:(unsigned long long)arg1;
- (void)setNightVisionModeEnabled:(bool)arg1;
- (void)setPeriodicSnapshotsAllowed:(bool)arg1;
- (void)setRecordingAudioEnabled:(bool)arg1;
- (void)setRecordingEventTriggers:(unsigned long long)arg1;
- (void)setSnapshotsAllowed:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (id)smartBulletinBoardNotification;
- (bool)snapshotsAllowed;
- (long long)version;

@end
