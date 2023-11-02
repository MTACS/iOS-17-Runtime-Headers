
@interface UIScreen : NSObject <BSDebugDescriptionProviding, INUIImageLoaderDelegate, UICoordinateSpace, UIFocusItemContainer, UITraitEnvironment, _CRKImageLoaderDelegate, _UIFallbackEnvironment, _UIFocusEnvironmentInternal, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer, _UIOrientationDebugDescriptionProviding, _UITraitEnvironmentInternal> {
    bool  __UIIBAlwaysProvidePeripheryInsets;
    FBSDisplayConfiguration * __displayConfiguration;
    BKSHIDEventDisplay * __eventDisplay;
    UIWindow<UIFocusEnvironment> * __focusedWindow;
    NSArray * _availableDisplayModes;
    _UIScreenBoundingPathUtilities * _boundingPathUtilities;
    NSDictionary * _capabilities;
    bool  _captured;
    struct { 
        unsigned int isKnown : 1; 
        unsigned int isSupported : 1; 
        unsigned int isInRange : 1; 
    }  _carPlayHumanPresenceStatus;
    CARSessionStatus * _carSessionStatus;
    UITraitCollection * _defaultTraitCollection;
    NSMutableSet * _disconnectionPreventionAssertions;
    <_UIDisplayInfoProviding> * _displayInfoProvider;
    _UIDragManager * _dragManager;
    _UIScreenFixedCoordinateSpace * _fixedCoordinateSpace;
    long long  _gamut;
    UISDisplayContext * _initialDisplayContext;
    _UIInteractiveHighlightEnvironment * _interactiveHighlightEnvironment;
    long long  _interfaceOrientation;
    bool  _isFakeScreen;
    float  _lastNotifiedBacklightLevel;
    UITraitCollection * _lastNotifiedTraitCollection;
    long long  _lastUpdatedCanvasUserInterfaceStyle;
    bool  _mainScreen;
    double  _nativePointsPerMillimeter;
    UITraitCollection * _overrideTraitCollection;
    bool  _performingSystemSnapshot;
    double  _pointsPerInch;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    long long  _referenceDisplayModeStatus;
    double  _scale;
    struct { 
        unsigned int bitsPerComponent : 4; 
        unsigned int initialized : 1; 
        unsigned int connected : 1; 
        unsigned int needsDisconnection : 1; 
        unsigned int hasSetOverscanCompensation : 1; 
        unsigned int overscanCompensation : 2; 
        unsigned int wantsWideContentMargins : 1; 
        unsigned int queriedDeviceContentMargins : 1; 
        unsigned int hasCalculatedPointsPerInch : 1; 
        unsigned int rightHandDrive : 1; 
        unsigned int carPlayNightModeEnabled : 1; 
        unsigned int isUpdatingInterfaceOrientation : 1; 
    }  _screenFlags;
    long long  _screenType;
    UISoftwareDimmingWindow * _softwareDimmingWindow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unjailedReferenceBounds;
    long long  _userInterfaceIdiom;
    bool  _wantsSoftwareDimming;
}

@property (setter=_setUIIBAlwaysProvidePeripheryInsets:, nonatomic) bool _UIIBAlwaysProvidePeripheryInsets;
@property (nonatomic, readonly) double _displayCornerRadiusIgnoringZoom;
@property (setter=_setFocusedWindow:, nonatomic) UIWindow<UIFocusEnvironment> *_focusedWindow;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _gkBounds;
@property (readonly) double _gkScale;
@property (setter=_setLastNotifiedBacklightLevel:, nonatomic) float _lastNotifiedBacklightLevel;
@property (getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:, nonatomic) bool _performingSystemSnapshot;
@property (nonatomic, readonly) UIWindow *_preferredFocusedWindow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _referenceBounds;
@property (setter=_setSoftwareDimmingWindow:, nonatomic, retain) UISoftwareDimmingWindow *_softwareDimmingWindow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } applicationFrame;
@property (nonatomic) bool areChildrenFocused;
@property (nonatomic, readonly, copy) NSArray *availableModes;
@property (getter=_bn_portraitPeripheryInsets, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bn_portraitPeripheryInsets;
@property (getter=_boundingPathUtilities, setter=_setBoundingPathUtilities:, nonatomic, retain) _UIScreenBoundingPathUtilities *boundingPathUtilities;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double brightness;
@property (nonatomic, readonly) double calibratedLatency;
@property (getter=isCaptured, setter=_setCaptured:, nonatomic) bool captured;
@property (getter=_carSessionStatus, nonatomic, retain) CARSessionStatus *carSessionStatus;
@property (nonatomic, readonly) unsigned long long ck_screenSizeCategory;
@property (readonly) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic, readonly) double currentEDRHeadroom;
@property (nonatomic, retain) UIScreenMode *currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:, nonatomic, retain) UITraitCollection *defaultTraitCollection;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplayConfiguration *displayConfiguration;
@property (getter=_dragManager, nonatomic, readonly) _UIDragManager *dragManager;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (getter=_isEligibleForFocusOcclusion, nonatomic, readonly) bool eligibleForFocusOcclusion;
@property (readonly) <UICoordinateSpace> *fixedCoordinateSpace;
@property (nonatomic, readonly, copy) NSString *focusGroupIdentifier;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (getter=_focusMapContainer, nonatomic, readonly) <_UIFocusRegionContainer> *focusMapContainer;
@property (getter=_focusSystem, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (nonatomic, readonly) <UIFocusItem> *focusedItem;
@property (nonatomic, readonly) UIView *focusedView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ic_isSecure;
@property (getter=_interactiveHighlightEnvironment, nonatomic, readonly) _UIInteractiveHighlightEnvironment *interactiveHighlightEnvironment;
@property (getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:, nonatomic, retain) UITraitCollection *lastNotifiedTraitCollection;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (getter=_isMainScreen, setter=_setMainScreen:, nonatomic) bool mainScreen;
@property (readonly) long long maximumFramesPerSecond;
@property (nonatomic, readonly) UIScreen *mirroredScreen;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } nativeBounds;
@property (nonatomic, readonly) double nativeScale;
@property (getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:, nonatomic, retain) UITraitCollection *overrideTraitCollection;
@property (nonatomic) long long overscanCompensation;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } overscanCompensationInsets;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly) double potentialEDRHeadroom;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic, readonly) UIScreenMode *preferredMode;
@property (nonatomic, readonly) long long referenceDisplayModeStatus;
@property (nonatomic, readonly) double scale;
@property (readonly) unsigned long long screenSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFocus;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (getter=isUserInterfaceIdiomPad, nonatomic, readonly) bool userInterfaceIdiomPad;
@property (nonatomic, readonly) UITraitCollection *vuiTraitCollection;
@property (nonatomic) bool wantsSoftwareDimming;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(bool)arg2;
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(bool)arg2 forceMain:(bool)arg3;
+ (void)_FBSDisplayConfigurationConnected:(id)arg1 forInitialDisplayContext:(id)arg2 andNotify:(bool)arg3 forceMain:(bool)arg4;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(bool)arg3;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (void)_FBSDisplayIdentityDisconnected:(id)arg1;
+ (id)__displayConfigurationsForViewService;
+ (id)_carScreen;
+ (id)_embeddedScreen;
+ (void)_enumerateScreensWithBlock:(id /* block */)arg1;
+ (bool)_isProbablyBeingRecorded;
+ (id)_mainScreenThreadSafeTraitCollection;
+ (void)_prepareScreensForAppResume;
+ (id)_screenForScene:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_screenWithEventDisplay:(id)arg1;
+ (id)_screenWithFBSDisplayIdentity:(id)arg1;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (id)_shortScreensDescription;
+ (bool)_shouldDisableJail;
+ (bool)_supportsInvalidatingFocusCache;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toView:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
+ (void)initialize;
+ (id)mainScreen;
+ (id)screens;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForScreenOriginRotation:(double)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToRotateScreen:(double)arg1;

- (void).cxx_destruct;
- (bool)_UIIBAlwaysProvidePeripheryInsets;
- (void)_accessibilityBoldTextChanged:(id)arg1;
- (void)_accessibilityForceTouchEnabledChanged:(id)arg1;
- (void)_accessibilityTraitFlagsChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(bool)arg3;
- (bool)_areListsLimited;
- (bool)_areMusicListsLimited;
- (unsigned long long)_artworkSubtype;
- (void)_beginObservingBacklightLevelNotifications;
- (id)_boundingPathUtilities;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForInterfaceOrientation:(long long)arg1;
- (id)_capabilities;
- (id)_capabilityForKey:(id)arg1;
- (void)_capturedStateUpdated:(bool)arg1;
- (id)_carSessionStatus;
- (void)_clearCarPlayHumanPresenceState;
- (void)_computeMetrics;
- (void)_computeMetrics:(bool)arg1;
- (void)_connectScreen;
- (id)_defaultTraitCollection;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_disconnectScreen;
- (id)_display;
- (double)_displayCornerRadius;
- (double)_displayCornerRadiusIgnoringZoom;
- (id)_displayID;
- (id)_displayInfoProvider;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_displayPeripheryInsets;
- (id)_dragManager;
- (long long)_effectiveUserInterfaceStyle;
- (void)_endObservingBacklightLevelNotifications;
- (void)_ensureComputedMainScreenDPI;
- (id)_eventDisplay;
- (id)_exclusionArea;
- (bool)_expectsSecureRendering;
- (void)_externalDeviceNightModeDidChange:(id)arg1;
- (void*)_fallbackTraitCollection;
- (void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
- (id)_focusMapContainer;
- (id)_focusMovementPerformer;
- (id)_focusScrollManager;
- (id)_focusSystem;
- (id)_focusSystemManager;
- (id)_focusedWindow;
- (long long)_forceTouchCapability;
- (void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1;
- (void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1;
- (bool)_hasWindows;
- (long long)_imageOrientation;
- (unsigned int)_integerDisplayID;
- (id)_interactiveHighlightEnvironment;
- (long long)_interfaceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_interfaceOrientedMainSceneBounds;
- (void)_invalidate;
- (bool)_isCarInstrumentsScreen;
- (bool)_isCarPlayHumanPresenceInRange;
- (bool)_isCarPlayNightModeEnabled;
- (bool)_isCarScreen;
- (bool)_isEmbeddedScreen;
- (bool)_isExternal;
- (bool)_isFocusSystemLoaded;
- (bool)_isForceTouchCapable;
- (bool)_isMainLikeScreen;
- (bool)_isMainScreen;
- (bool)_isOverscanned;
- (bool)_isPerformingSystemSnapshot;
- (bool)_isRightHandDrive;
- (bool)_isRotatable;
- (bool)_isSoftKeyboardLimited;
- (bool)_isUserInterfaceLimited:(unsigned long long)arg1;
- (bool)_isValidInterfaceOrientation:(long long)arg1;
- (bool)_isWorkspaceCapable;
- (float)_lastNotifiedBacklightLevel;
- (id)_lastNotifiedTraitCollection;
- (double)_latency;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_lazySoftwareDimmingWindow;
- (void)_limitedUIDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneReferenceBounds;
- (long long)_maximumFramesPerSecond;
- (double)_maximumSupportedScale;
- (id)_name;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_nativeDisplayBounds;
- (double)_nativePointsPerMillimeter;
- (double)_nativeScale;
- (double)_nativeScaleWithLevel:(unsigned long long)arg1;
- (void)_notifyTraitsChangedAndPropagate;
- (id)_orientationDebugDescription;
- (id)_orientationDebugDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)_orientationDebugDescriptionWithMultilinePrefix:(id)arg1;
- (id)_overrideTraitCollection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_peripheryInsets;
- (double)_pointsPerInch;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (id)_preferredFocusRegionCoordinateSpace;
- (id)_preferredFocusedWindow;
- (id)_preferredFocusedWindowScene;
- (void)_prepareForWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBounds;
- (double)_refreshRate;
- (void)_resetUserInterfaceIdiom;
- (double)_rotation;
- (double)_scale;
- (long long)_screenType;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (unsigned int)_seed;
- (void)_setBoundingPathUtilities:(id)arg1;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (void)_setCaptured:(bool)arg1;
- (void)_setCarPlayHumanPresenceInRange:(bool)arg1;
- (void)_setDefaultTraitCollection:(id)arg1;
- (void)_setExternalDeviceShouldInputText:(bool)arg1;
- (void)_setFocusedWindow:(id)arg1;
- (void)_setInitialDisplayContext:(id)arg1;
- (void)_setInterfaceOrientation:(long long)arg1;
- (void)_setInterfaceOrientation:(long long)arg1 andNotify:(bool)arg2;
- (void)_setLastNotifiedBacklightLevel:(float)arg1;
- (void)_setLastNotifiedTraitCollection:(id)arg1;
- (void)_setMainScreen:(bool)arg1;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)_setOverrideTraitCollection:(id)arg1;
- (void)_setPerformingSystemSnapshot:(bool)arg1;
- (void)_setReferenceDisplayModeStatus:(long long)arg1;
- (void)_setScale:(double)arg1;
- (void)_setSoftwareDimmingWindow:(id)arg1;
- (void)_setUIIBAlwaysProvidePeripheryInsets:(bool)arg1;
- (void)_setUserInterfaceIdiom:(long long)arg1;
- (void)_setUserInterfaceStyleIfNecessary:(long long)arg1 firstTimeOnly:(bool)arg2;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_softwareDimmingWindow;
- (bool)_supportsBrightness;
- (bool)_supportsCarPlayHumanPresence;
- (bool)_supportsDeferredFocus;
- (bool)_supportsDragging;
- (double)_touchRadiusScaleFactor;
- (double)_traitCollectionDisplayCornerRadius;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (id)_traitTrace;
- (id)_traitTrace:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBoundsInPixels;
- (void)_updateAvailableDisplayModes;
- (void)_updateCapabilities;
- (void)_updateDisplayConfiguration:(id)arg1;
- (void)_updateTraits;
- (void)_updateTraitsForWindowScenesCallingParentWillTransition:(bool)arg1;
- (void)_updateUserInterfaceIdiom;
- (long long)_userInterfaceIdiom;
- (bool)_wantsWideContentMargins;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationFrame;
- (id)availableModes;
- (int)bitsPerComponent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)brightness;
- (double)calibratedLatency;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (id)coordinateSpace;
- (double)currentEDRHeadroom;
- (id)currentMode;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)displayConfiguration;
- (id)displayIdentity;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)fbsDisplay;
- (id)fixedCoordinateSpace;
- (id)focusItemContainer;
- (id)focusItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)focusedItem;
- (id)focusedView;
- (long long)gamut;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1 forceMainScreen:(bool)arg2;
- (bool)isCaptured;
- (long long)maximumFramesPerSecond;
- (id)mirroredScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nativeBounds;
- (double)nativeScale;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)overscanCompensation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })overscanCompensationInsets;
- (id)parentFocusEnvironment;
- (double)potentialEDRHeadroom;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (id)preferredMode;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (long long)referenceDisplayModeStatus;
- (double)scale;
- (void)setBitsPerComponent:(int)arg1;
- (void)setBrightness:(double)arg1;
- (void)setCarSessionStatus:(id)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setFocusEnabled:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (void)setOverscanCompensation:(long long)arg1;
- (void)setWantsSoftwareDimming:(bool)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsFocus;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFocusIfNeeded;
- (id)valueForKey:(id)arg1;
- (bool)wantsSoftwareDimming;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

- (id)traitCollectionForImageLoader:(id)arg1;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

+ (double)_lp_mainScreenScale;
+ (struct CGSize { double x1; double x2; })_lp_mainScreenSize;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_display;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

+ (void)_performSwiftUITestingOverrides;

- (double)_SwiftUITesting_currentScreenScale;
- (bool)_SwiftUITesting_wantsWideContentMargins;

// Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer

- (long long)currentOrientation;

// Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_bn_portraitPeripheryInsets;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (id)traitCollectionForImageLoader:(id)arg1 image:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)__ck_isFullscreen;
- (unsigned long long)ck_screenSizeCategory;

// Image: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_gkBounds;
- (double)_gkScale;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (long long)_screenHeightSizeClassForCurrentDevice;
+ (bool)hk_currentDeviceHas4InchScreen;
+ (bool)hk_currentDeviceHas4Point7InchScreen;
+ (bool)hk_currentDeviceHas5Point8InchScreen;
+ (bool)hk_currentDeviceHasDisplayZoomedEnabled;
+ (long long)screenHeightSizeClassForHeight:(double)arg1 scale:(double)arg2;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

+ (bool)hrui_currentDeviceHas5Point8InchScreen;
+ (bool)hrui_currentDeviceHasLargePhoneScreen;
+ (bool)hrui_currentDeviceHasMediumPhoneScreen;
+ (bool)hrui_currentDeviceHasSmallPhoneScreen;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

+ (bool)mui_isLargeFormatPad;
+ (double)mui_maxDimension;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (double)ic_scale;

- (bool)ic_isSecure;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (struct CGSize { double x1; double x2; })pu_workImageSize;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)sb_snapshotViewImmediatelyFramedForPortrait;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (bool)isUserInterfaceIdiomPad;
- (unsigned long long)screenSizeCategory;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_counterTransformForActiveInterfaceOrientation;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_transformForInterfaceOrientation:(long long)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_transformForScreenOriginRotation:(double)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nc_bounds;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

+ (id)vui_main;

- (id)vuiTraitCollection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vui_bounds;
- (bool)vui_canRepresentDisplayGamutP3;
- (double)vui_nativeScale;
- (double)vui_scale;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit

+ (long long)p_tsk_uncachedScreenClass;
+ (bool)tsk_appIsAlwaysInDarkMode;
+ (bool)tsk_deviceCanUseSidebar;
+ (bool)tsk_deviceIsLandscape;
+ (void)tsk_didAddWindowScene:(id)arg1;
+ (double)tsk_expectedScreenScale;
+ (bool)tsk_is3xScreenScale;
+ (bool)tsk_isHorizontallyCompactOnLandscape;
+ (id)tsk_mainScreen;
+ (bool)tsk_pad1080H;
+ (bool)tsk_pad1112H;
+ (bool)tsk_pad1180H;
+ (bool)tsk_pad1194H;
+ (bool)tsk_pad1366H;
+ (bool)tsk_pad1366HOrLarger;
+ (bool)tsk_pad1373H;
+ (bool)tsk_pad1373HOrLarger;
+ (bool)tsk_pad1590H;
+ (bool)tsk_pad1590HOrLarger;
+ (bool)tsk_phoneUI568H;
+ (bool)tsk_phoneUI568HOrSmaller;
+ (bool)tsk_phoneUI667H;
+ (bool)tsk_phoneUI667HOrSmaller;
+ (bool)tsk_phoneUI693H;
+ (bool)tsk_phoneUI736H;
+ (bool)tsk_phoneUI812H;
+ (bool)tsk_phoneUI812HOrLarger;
+ (bool)tsk_phoneUI844H;
+ (bool)tsk_phoneUI852H;
+ (bool)tsk_phoneUI896H;
+ (bool)tsk_phoneUI926H;
+ (bool)tsk_phoneUI932H;
+ (void)tsk_resetScreenScaleCache;
+ (long long)tsk_screenClass;
+ (bool)tsk_screenClassPhoneUIRegularOrLarge;
+ (bool)tsk_screenClassPhoneUISmallOrRegularZoom;
+ (double)tsk_screenScale;
+ (double)tsk_screenZoomScale;

- (bool)tsk_isEmbeddedScreen;

@end
