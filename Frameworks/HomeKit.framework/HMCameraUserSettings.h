
@interface HMCameraUserSettings : NSObject <HMFLogging, HMFMessageReceiver, HMFObject> {
    bool  _accessModeIndicatorEnabled;
    HMAccessory * _accessory;
    _HMCameraUserSettings * _cameraUserSettings;
    _HMContext * _context;
    <HMCameraUserSettingsDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _nightVisionModeEnabled;
    bool  _recordingAudioEnabled;
    HMCameraBulletinBoardSmartNotification * _smartNotificationBulletin;
    bool  _snapshotsAllowed;
}

@property (getter=isAccessModeChangeNotificationEnabled, readonly) bool accessModeChangeNotificationEnabled;
@property (getter=isAccessModeIndicatorEnabled, readonly) bool accessModeIndicatorEnabled;
@property (readonly) HMCharacteristic *accessModeIndicatorEnabledCharacteristic;
@property (nonatomic) HMAccessory *accessory;
@property (getter=activityZones, readonly) NSSet *activityZones;
@property (getter=areActivityZonesIncludedForSignificantEventDetection, readonly) bool activityZonesIncludedForSignificantEventDetection;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (getter=isCameraManuallyDisabled, readonly) bool cameraManuallyDisabled;
@property (copy) _HMCameraUserSettings *cameraUserSettings;
@property (nonatomic, retain) _HMContext *context;
@property (readonly) unsigned long long currentAccessMode;
@property (readonly, copy) NSString *debugDescription;
@property <HMCameraUserSettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isNightVisionModeEnabled, readonly) bool nightVisionModeEnabled;
@property (readonly) HMCharacteristic *nightVisionModeEnabledCharacteristic;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (getter=isReachabilityEventNotificationEnabled, readonly) bool reachabilityEventNotificationEnabled;
@property (getter=isRecordingAudioEnabled, readonly) bool recordingAudioEnabled;
@property (readonly) HMCharacteristic *recordingAudioEnabledCharacteristic;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly, copy) NSString *shortDescription;
@property (retain) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin;
@property (getter=areSnapshotsAllowed, readonly) bool snapshotsAllowed;
@property (readonly) HMCharacteristic *snapshotsAllowedCharacteristic;
@property (readonly) Class superclass;
@property (readonly) unsigned long long supportedFeatures;
@property (readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)_characteristicWithType:(id)arg1 serviceType:(id)arg2;
- (void)_mergeNewSettings:(id)arg1;
- (void)_sendSettingsUpdateMessage:(id)arg1 completion:(id /* block */)arg2 successHandler:(id /* block */)arg3;
- (void)_updateSettings:(id)arg1 shouldNotifyDelegate:(bool)arg2;
- (unsigned long long)accessModeAtHome;
- (unsigned long long)accessModeForPresenceType:(unsigned long long)arg1;
- (id)accessModeIndicatorEnabledCharacteristic;
- (unsigned long long)accessModeNotAtHome;
- (id)accessory;
- (id)activityZones;
- (bool)areActivityZonesIncludedForSignificantEventDetection;
- (bool)areSnapshotsAllowed;
- (id)attributeDescriptions;
- (id)cameraUserSettings;
- (void)configureWithAccessory:(id)arg1 context:(id)arg2;
- (id)context;
- (unsigned long long)currentAccessMode;
- (id)delegate;
- (id)description;
- (void)handleSettingsDidUpdateMessage:(id)arg1;
- (id)initWithCameraUserSettings:(id)arg1;
- (bool)isAccessModeChangeNotificationEnabled;
- (bool)isAccessModeIndicatorEnabled;
- (bool)isCameraManuallyDisabled;
- (bool)isNightVisionModeEnabled;
- (bool)isReachabilityEventNotificationEnabled;
- (bool)isRecordingAudioEnabled;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)nightVisionModeEnabledCharacteristic;
- (id)privateDescription;
- (id)recordingAudioEnabledCharacteristic;
- (unsigned long long)recordingEventTriggers;
- (void)setAccessory:(id)arg1;
- (void)setCameraUserSettings:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSmartNotificationBulletin:(id)arg1;
- (id)shortDescription;
- (id)smartNotificationBulletin;
- (id)smartNotificationBulletinForSettings:(id)arg1;
- (id)snapshotsAllowedCharacteristic;
- (unsigned long long)supportedFeatures;
- (id)uniqueIdentifier;
- (void)updateAccessMode:(unsigned long long)arg1 forPresenceEventType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)updateAccessModeChangeNotificationEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateAccessModeIndicatorEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateActivityZones:(id)arg1 areActivityZonesIncludedForSignificantEventDetection:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)updateBulletinNotificationEnabled:(bool)arg1 condition:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateNightVisionModeEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateReachabilityEventNotificationEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecordingAudioEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecordingEventTriggers:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSnapshotsAllowed:(bool)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_currentAccessModeDescription;
- (id)hu_indicatorColorForCurrentAccessMode;
- (id)hu_indicatorColorForLiveStreaming;
- (id)hu_indicatorImageNameForCurrentAccessMode;
- (id)hu_indicatorImageNameForLiveStreaming;

@end
