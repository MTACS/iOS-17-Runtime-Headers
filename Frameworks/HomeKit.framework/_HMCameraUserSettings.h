
@interface _HMCameraUserSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _UUID;
    unsigned long long  _accessModeAtHome;
    unsigned long long  _accessModeNotAtHome;
    NSSet * _activityZones;
    bool  _activityZonesIncludedForSignificantEventDetection;
    bool  _cameraManuallyDisabled;
    unsigned long long  _currentAccessMode;
    HMCameraUserNotificationSettings * _notificationSettings;
    unsigned long long  _recordingEventTriggers;
    unsigned long long  _supportedFeatures;
}

@property (copy) NSUUID *UUID;
@property unsigned long long accessModeAtHome;
@property unsigned long long accessModeNotAtHome;
@property (copy) NSSet *activityZones;
@property (getter=areActivityZonesIncludedForSignificantEventDetection) bool activityZonesIncludedForSignificantEventDetection;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (getter=isCameraManuallyDisabled) bool cameraManuallyDisabled;
@property unsigned long long currentAccessMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) HMCameraUserNotificationSettings *notificationSettings;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property unsigned long long recordingEventTriggers;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property unsigned long long supportedFeatures;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (unsigned long long)accessModeAtHome;
- (unsigned long long)accessModeNotAtHome;
- (id)activityZones;
- (bool)areActivityZonesIncludedForSignificantEventDetection;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentAccessMode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isCameraManuallyDisabled;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)notificationSettings;
- (id)privateDescription;
- (unsigned long long)recordingEventTriggers;
- (void)setAccessModeAtHome:(unsigned long long)arg1;
- (void)setAccessModeNotAtHome:(unsigned long long)arg1;
- (void)setActivityZones:(id)arg1;
- (void)setActivityZonesIncludedForSignificantEventDetection:(bool)arg1;
- (void)setCameraManuallyDisabled:(bool)arg1;
- (void)setCurrentAccessMode:(unsigned long long)arg1;
- (void)setNotificationSettings:(id)arg1;
- (void)setRecordingEventTriggers:(unsigned long long)arg1;
- (void)setSupportedFeatures:(unsigned long long)arg1;
- (void)setUUID:(id)arg1;
- (id)shortDescription;
- (unsigned long long)supportedFeatures;

@end
