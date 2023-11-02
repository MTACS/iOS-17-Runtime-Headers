
@interface BKSLocalDefaults : BSAbstractDefaultDomain {
    bool  _allowWirelessExtendedDisplay;
    bool  _disableExtendedDisplayByDefault;
    bool  _disableStudyLogALSLogging;
    bool  _disableStudyLogAccelerometerLogging;
    bool  _disableStudyLogGyroLogging;
}

@property (nonatomic) float ALSDelayOnUnlock;
@property (getter=isALSEnabled, nonatomic) bool ALSEnabled;
@property (nonatomic) long long ALSEpoch;
@property (nonatomic, retain) NSDictionary *ALSUserPreferences;
@property (nonatomic) bool allowWirelessExtendedDisplay;
@property (nonatomic) int brightnessCurve;
@property (nonatomic) NSArray *digitizerServicePersistentProperties;
@property (getter=isDigitizerSignpostsEnabled, nonatomic) bool digitizerSignpostsEnabled;
@property (nonatomic) bool digitizerVisualizeHitTestRegions;
@property (nonatomic) bool digitizerVisualizeTouches;
@property (nonatomic) bool disableCAOverscan;
@property (nonatomic) bool disableCAScaling;
@property (nonatomic) bool disableCAYUV;
@property (nonatomic) bool disableCloneMirroring;
@property (nonatomic) bool disableExtendedDisplayByDefault;
@property (nonatomic) bool disableStudyLogALSLogging;
@property (nonatomic) bool disableStudyLogAccelerometerLogging;
@property (nonatomic) bool disableStudyLogBTKeyboardEventLogging;
@property (nonatomic) bool disableStudyLogBTKeyboardEventRedirection;
@property (nonatomic) bool disableStudyLogButtonLogging;
@property (nonatomic) bool disableStudyLogCameraKeyLogging;
@property (nonatomic) bool disableStudyLogGyroLogging;
@property (nonatomic) bool disableStudyLogHomeButtonLogging;
@property (nonatomic) bool disableStudyLogPowerButtonLogging;
@property (nonatomic) bool disableStudyLogVolumeKeyLogging;
@property (getter=isDitheringEnabled, nonatomic) bool ditheringEnabled;
@property (getter=isEventBufferingEnabled, nonatomic) bool eventBufferingEnabled;
@property (nonatomic) bool forceCloneMirroring;
@property (nonatomic) NSString *forceMirroredOrientation;
@property (nonatomic, retain) NSData *globalMouseDevicePreferences;
@property (nonatomic) bool hideAppleLogoOnLaunch;
@property (nonatomic) bool ignoreAccelerometerAndOrientationEvents;
@property (nonatomic) bool ignoreTetheringPreferences;
@property (nonatomic, retain) NSDictionary *keyboardTypeRemap;
@property (nonatomic) NSArray *loggingTypesEnabled;
@property (nonatomic, retain) NSArray *mouseInterpolation;
@property (nonatomic) unsigned int pointerRegionArrangementEdge;
@property (nonatomic) bool showBuildNumber;
@property (nonatomic) bool simulatePhoneButton;
@property (getter=isSteveNoteOverscanEnabled, nonatomic) bool steveNoteOverscanEnabled;
@property (getter=isSteveNoteRotationEnabled, nonatomic) bool steveNoteRotationEnabled;
@property (nonatomic) bool visualizeMousePointer;

- (void)_bindAndRegisterDefaults;
- (bool)allowWirelessExtendedDisplay;
- (bool)disableExtendedDisplayByDefault;
- (bool)disableStudyLogALSLogging;
- (bool)disableStudyLogAccelerometerLogging;
- (bool)disableStudyLogGyroLogging;
- (id)init;
- (void)migrateDefaultsIfNecessary;
- (void)setAllowWirelessExtendedDisplay:(bool)arg1;
- (void)setDisableExtendedDisplayByDefault:(bool)arg1;
- (void)setDisableStudyLogALSLogging:(bool)arg1;
- (void)setDisableStudyLogAccelerometerLogging:(bool)arg1;
- (void)setDisableStudyLogGyroLogging:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1 defaultValueProvider:(id /* block */)arg2;

@end
