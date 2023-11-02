
@interface SBLockScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) double cameraSwipePrelaunchThreshold;
@property (nonatomic) double cameraSwipePrewarmThreshold;
@property (nonatomic) long long dateTimeOverridesIntervalSince1970;
@property (nonatomic) bool forceWakeToMaps;
@property (nonatomic) bool limitFeaturesForRemoteLock;
@property (nonatomic) double nowPlayingTimeout;
@property (nonatomic) bool overridesDateTimeToDefaultPast;
@property (nonatomic) bool overridesDateTimeToDefaultToday;
@property (nonatomic) bool prelaunchCameraOnButtonTouch;
@property (nonatomic) bool prelaunchCameraOnSwipe;
@property (nonatomic) bool prewarmCameraOnButtonTouch;
@property (nonatomic) bool prewarmCameraOnSwipe;
@property (nonatomic) NSDictionary *sessionTestWidgetInfo;
@property (nonatomic) bool showAuthenticationEngineeringUI;
@property (nonatomic, readonly) bool showLegalText;
@property (nonatomic) bool showQuickNoteFingerGestureRecognizer;
@property (nonatomic) bool showSupervisionText;
@property (nonatomic) bool useDefaultsValuesForCameraPrewarm;
@property (nonatomic) bool useDefaultsValuesForDateTimeOverrides;
@property (nonatomic) bool weDontNeedNoEducation;

- (void)_bindAndRegisterDefaults;

@end
