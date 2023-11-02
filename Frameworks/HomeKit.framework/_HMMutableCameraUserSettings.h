
@interface _HMMutableCameraUserSettings : _HMCameraUserSettings

@property (copy) NSUUID *UUID;
@property unsigned long long accessModeAtHome;
@property unsigned long long accessModeNotAtHome;
@property (copy) NSSet *activityZones;
@property (getter=areActivityZonesIncludedForSignificantEventDetection) bool activityZonesIncludedForSignificantEventDetection;
@property (getter=isCameraManuallyDisabled) bool cameraManuallyDisabled;
@property unsigned long long currentAccessMode;
@property (copy) HMCameraUserNotificationSettings *notificationSettings;
@property unsigned long long recordingEventTriggers;
@property unsigned long long supportedFeatures;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
