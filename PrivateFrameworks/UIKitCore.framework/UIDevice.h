
@interface UIDevice : NSObject {
    float  _batteryLevel;
    struct { 
        unsigned int batteryMonitoringEnabled : 1; 
        unsigned int proximityMonitoringEnabled : 1; 
        unsigned int expectsFaceContactInLandscape : 1; 
        unsigned int orientation : 3; 
        unsigned int batteryState : 2; 
        unsigned int proximityState : 1; 
        unsigned int hasTouchPadOverride : 1; 
        unsigned int hasTouchPad : 1; 
        unsigned int isHardwareKeyboardAvailable : 1; 
    }  _deviceFlags;
    long long  _numDeviceOrientationObservers;
    bool  _remoteHasMicrophone;
    unsigned long long  _remoteTouchSurfaceType;
}

@property (setter=_setBacklightLevel:, nonatomic) float _backlightLevel;
@property (getter=_isHardwareKeyboardAvailable, nonatomic, readonly) bool _hardwareKeyboardAvailable;
@property (nonatomic, readonly) bool _supportsPencil;
@property (nonatomic, readonly) float batteryLevel;
@property (getter=isBatteryMonitoringEnabled, nonatomic) bool batteryMonitoringEnabled;
@property (nonatomic, readonly) long long batteryState;
@property (nonatomic, readonly, retain) NSString *buildVersion;
@property (nonatomic, readonly) NSString *doc_symbolName;
@property (getter=_feedbackSupportLevel, nonatomic, readonly) long long feedbackSupportLevel;
@property (getter=isGeneratingDeviceOrientationNotifications, nonatomic, readonly) bool generatesDeviceOrientationNotifications;
@property (nonatomic, readonly) NSUUID *identifierForVendor;
@property (nonatomic, readonly) NSString *localizedModel;
@property (nonatomic, readonly) NSString *model;
@property (getter=isMultitaskingSupported, nonatomic, readonly) bool multitaskingSupported;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long orientation;
@property (getter=isProximityMonitoringEnabled, nonatomic) bool proximityMonitoringEnabled;
@property (nonatomic, readonly) bool proximityState;
@property (getter=sf_isDeveloperModeEnabled, nonatomic, readonly) bool sf_developerModeEnabled;
@property (readonly) bool smu_supportsDeepColor;
@property (nonatomic, readonly) NSString *systemName;
@property (nonatomic, readonly) NSString *systemVersion;
@property (nonatomic, readonly) long long userInterfaceIdiom;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_hasHomeButton;
+ (bool)_isLowEnd;
+ (bool)_isWatch;
+ (bool)_isWatchCompanion;
+ (id)currentDevice;
+ (long long)currentDeviceOrientationAllowingAmbiguous:(bool)arg1;
+ (id)modelSpecificLocalizedStringKeyForKey:(id)arg1;

- (float)_backlightLevel;
- (void)_clearGraphicsQualityOverride;
- (id)_deviceInfoForKey:(struct __CFString { }*)arg1;
- (void)_enableDeviceOrientationEvents:(bool)arg1;
- (long long)_feedbackSupportLevel;
- (long long)_graphicsQuality;
- (void)_hardwareKeyboardAvailabilityChanged;
- (bool)_hasGraphicsQualityOverride;
- (bool)_hasTouchPad;
- (bool)_isHardwareKeyboardAvailable;
- (bool)_isSystemSoundEnabled;
- (long long)_keyboardGraphicsQuality;
- (void)_loadRemoteDeviceInfoIfNeeded;
- (long long)_nativeScreenGamut;
- (void)_performShimmedRequestIfPossibleForDeviceOrientation:(long long)arg1;
- (void)_playInputDeleteSound;
- (void)_playInputSelectSound;
- (void)_playSystemSound:(unsigned int)arg1;
- (long long)_predictionGraphicsQuality;
- (void)_registerForSystemSounds:(id)arg1;
- (bool)_remoteHasMicrophoneCapability;
- (unsigned long long)_remoteTouchSurfaceType;
- (void)_setActiveUserInterfaceIdiom:(long long)arg1;
- (void)_setBacklightLevel:(float)arg1;
- (void)_setBatteryLevel:(float)arg1;
- (void)_setBatteryState:(long long)arg1;
- (void)_setExpectsFaceContactInLandscape:(bool)arg1;
- (void)_setGraphicsQualityOverride:(long long)arg1;
- (void)_setHasTouchPad:(bool)arg1;
- (void)_setProximityState:(bool)arg1;
- (float)_softwareDimmingAlpha;
- (bool)_supportsDeepColor;
- (bool)_supportsForceTouch;
- (bool)_supportsPencil;
- (id)_tapticEngine;
- (void)_unregisterForSystemSounds:(id)arg1;
- (void)_updateSystemSoundActiveStatus:(id)arg1;
- (float)batteryLevel;
- (long long)batteryState;
- (void)beginGeneratingDeviceOrientationNotifications;
- (id)buildVersion;
- (void)dealloc;
- (void)endGeneratingDeviceOrientationNotifications;
- (id)identifierForVendor;
- (id)init;
- (bool)isBatteryMonitoringEnabled;
- (bool)isGeneratingDeviceOrientationNotifications;
- (bool)isMultitaskingSupported;
- (bool)isProximityMonitoringEnabled;
- (id)localizedModel;
- (id)model;
- (id)name;
- (long long)orientation;
- (void)playInputClick;
- (bool)proximityState;
- (void)setBatteryMonitoringEnabled:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setProximityMonitoringEnabled:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)systemName;
- (id)systemVersion;
- (long long)userInterfaceIdiom;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (bool)mf_isPad;
+ (bool)mf_isSmallPhone;

// Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI

- (bool)bkui_IsInternalInstall;
- (bool)bkui_isRTL;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (int)jfx_cpuFamily;
- (id)jfx_deviceCharacteristicsDict;
- (id)jfx_displayColorSpace;
- (id)jfx_getCaptureDeviceForType:(id)arg1;
- (bool)jfx_hasDepthCapableCamera;
- (bool)jfx_hasDualBackCamera;
- (bool)jfx_hasHDRCamera;
- (bool)jfx_hasTrueDepthFrontCamera;
- (bool)jfx_hasTrueDepthFrontCameraCustomZoomFormat;
- (long long)jfx_memorySize;
- (int)jfx_numberOfCPU;
- (id)jfx_recommendedDisplayColorSpaceForColorSpace:(id)arg1;
- (bool)jfx_supportsHDR;
- (bool)jfx_supportsHDRExport;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (long long)cam_initialLayoutStyle;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (bool)__ck_currentDeviceIsMac;
+ (bool)__ck_currentDeviceIsPadOrMac;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit

+ (id)_ccuiDevicesIncapableOfGroupRendering;

- (bool)ccuiSupportsGroupRendering;

// Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

- (id)doc_symbolName;

// Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit

- (bool)dk_deviceSupportsGL;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_modelAndNetworkLocalizedStringKeyForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (long long)safari_mainScreenClass;

// Image: /System/Library/PrivateFrameworks/NewsAnalytics.framework/NewsAnalytics

- (id)na_buildVersion;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (bool)ic_is12hrClock;
+ (bool)ic_isLargeiPad;
+ (bool)ic_isLiveTextAvailable;
+ (bool)ic_isLocked;
+ (bool)ic_isPlusiPhone;
+ (bool)ic_isSmalliPhone;
+ (bool)ic_isiPad;
+ (bool)ic_isiPhone;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)platformString;

// Image: /System/Library/PrivateFrameworks/SettingsFoundation.framework/SettingsFoundation

- (id)sf_colorCodedSerialNumber;
- (id)sf_configString;
- (id)sf_deviceSubTypeString;
- (bool)sf_deviceSupportsDisplayZoom;
- (id)sf_deviceType;
- (bool)sf_hasHardwareHomeButton;
- (bool)sf_inRetailKioskMode;
- (bool)sf_isAppleTV;
- (bool)sf_isAudioAccessory;
- (bool)sf_isCarrierInstall;
- (bool)sf_isChinaRegionCellularDevice;
- (bool)sf_isDeveloperModeEnabled;
- (bool)sf_isInternalInstall;
- (bool)sf_isiPad;
- (bool)sf_isiPhone;
- (bool)sf_isiPod;
- (id)sf_monthAndYearOfManufacture;
- (id)sf_plantCode;
- (id)sf_productType;
- (id)sf_regionCode;
- (id)sf_regulatoryDeviceVariant;
- (id)sf_screenClassString;
- (id)sf_serialNumber;
- (id)sf_serialNumberQRImage;
- (id)sf_udidString;
- (unsigned long long)sf_weekOfManufacture;
- (unsigned long long)sf_yearOfManufacture;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (bool)smu_supportsDeepColor;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

+ (bool)sx_isSpectreDevice;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)platform;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (long long)sbf_animatedBlurRadiusGraphicsQuality;
- (long long)sbf_featherBlurGraphicsQuality;
- (long long)sbf_homeGrabberGraphicsQuality;
- (long long)sbf_homescreenBlurGraphicsQuality;
- (long long)sbf_homescreenFolderBackgroundGraphicsQuality;
- (bool)sbf_isLowEndForSlideOverMoveGesture;

// Image: /System/Library/PrivateFrameworks/StocksAnalytics.framework/StocksAnalytics

- (id)sa_buildVersion;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)platformString;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

+ (bool)vk_isCatalyst;
+ (bool)vk_isLargeiPad;
+ (bool)vk_isPlusiPhone;
+ (bool)vk_isSmalliPhone;
+ (bool)vk_isiPad;
+ (bool)vk_isiPhone;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

+ (bool)currentIsIPad;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (bool)icqui_isiPad;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit

+ (bool)tsk_iPadDevice;
+ (bool)tsk_iPodTouchDevice;
+ (bool)tsk_landscapePhoneUI;
+ (bool)tsk_padUI;
+ (bool)tsk_phoneDevice;
+ (bool)tsk_phoneUI;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)platformString;

@end
