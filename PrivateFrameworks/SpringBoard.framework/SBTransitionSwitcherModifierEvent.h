
@interface SBTransitionSwitcherModifierEvent : SBSwitcherModifierEvent {
    SBAppLayout * _activatingAppLayout;
    NSString * _ambiguouslyLaunchedBundleIDIfAny;
    bool  _animated;
    bool  _appLaunchDuringWindowDragGestureTransition;
    NSMutableDictionary * _appLayoutToRemovalContext;
    SBBannerUnfurlSourceContext * _bannerUnfurlSourceContext;
    bool  _bannerUnfurlTransition;
    bool  _breadcrumbTransition;
    bool  _commandTabTransition;
    bool  _continuityTransition;
    bool  _continuousExposeConfigurationChangeEvent;
    long long  _dosidoTransitionDirection;
    bool  _dragAndDropTransition;
    NSString * _fromAppExposeBundleID;
    SBAppLayout * _fromAppLayout;
    bool  _fromAppLayoutWantsExclusiveForeground;
    struct CGPoint { 
        double x; 
        double y; 
    }  _fromCenterOfMovingDisplayItem;
    NSDictionary * _fromDisplayItemLayoutAttributesMap;
    NSSet * _fromDisplayItemsPendingTermination;
    long long  _fromEnvironmentMode;
    SBAppLayout * _fromFloatingAppLayout;
    long long  _fromFloatingConfiguration;
    bool  _fromFloatingSwitcherVisible;
    long long  _fromInterfaceOrientation;
    long long  _fromPeekConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _fromSizeOfMovingDisplayItem;
    long long  _fromSpaceConfiguration;
    long long  _fromWindowPickerRole;
    bool  _gestureInitiated;
    bool  _iPadOSWindowingModeChangeEvent;
    bool  _iconZoomDisabled;
    bool  _keyboardShortcutInitiated;
    bool  _launchingFromDockTransition;
    bool  _morphFromInAppView;
    bool  _morphFromPIPTransition;
    bool  _morphToPIPTransition;
    long long  _morphingPIPLayoutRole;
    SBTransitionSwitcherModifierMoveDisplaysContext * _moveDisplaysContext;
    bool  _moveDisplaysTransition;
    SBDisplayItem * _movingDisplayItem;
    bool  _newSceneTransition;
    unsigned long long  _phase;
    bool  _prefersCenterZoomTransition;
    bool  _prefersCrossfadeTransition;
    bool  _quickActionTransition;
    bool  _shelfRequestTransition;
    bool  _shelfTransition;
    bool  _spotlightTransition;
    NSString * _toAppExposeBundleID;
    SBAppLayout * _toAppLayout;
    bool  _toAppLayoutWantsExclusiveForeground;
    struct CGPoint { 
        double x; 
        double y; 
    }  _toCenterOfMovingDisplayItem;
    NSDictionary * _toDisplayItemLayoutAttributesMap;
    long long  _toEnvironmentMode;
    SBAppLayout * _toFloatingAppLayout;
    long long  _toFloatingConfiguration;
    bool  _toFloatingSwitcherVisible;
    long long  _toInterfaceOrientation;
    long long  _toPeekConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _toSizeOfMovingDisplayItem;
    long long  _toSpaceConfiguration;
    long long  _toWindowPickerRole;
    bool  _topAffordanceInitiated;
    NSUUID * _transitionID;
    bool  _zoomFromSystemApertureTransition;
}

@property (nonatomic, retain) SBAppLayout *activatingAppLayout;
@property (nonatomic, copy) NSString *ambiguouslyLaunchedBundleIDIfAny;
@property (getter=isAnimated, nonatomic) bool animated;
@property (getter=isAppLaunchDuringWindowDragGestureTransition, nonatomic) bool appLaunchDuringWindowDragGestureTransition;
@property (nonatomic, readonly, copy) NSArray *appLayoutsWithRemovalContexts;
@property (nonatomic, copy) SBBannerUnfurlSourceContext *bannerUnfurlSourceContext;
@property (getter=isBannerUnfurlTransition, nonatomic) bool bannerUnfurlTransition;
@property (getter=isBreadcrumbTransition, nonatomic) bool breadcrumbTransition;
@property (getter=isCommandTabTransition, nonatomic) bool commandTabTransition;
@property (getter=isContinuityTransition, nonatomic) bool continuityTransition;
@property (getter=isContinuousExposeConfigurationChangeEvent, nonatomic) bool continuousExposeConfigurationChangeEvent;
@property (nonatomic) long long dosidoTransitionDirection;
@property (getter=isDragAndDropTransition, nonatomic) bool dragAndDropTransition;
@property (nonatomic, copy) NSString *fromAppExposeBundleID;
@property (nonatomic, retain) SBAppLayout *fromAppLayout;
@property (nonatomic) bool fromAppLayoutWantsExclusiveForeground;
@property (nonatomic) struct CGPoint { double x1; double x2; } fromCenterOfMovingDisplayItem;
@property (nonatomic, copy) NSDictionary *fromDisplayItemLayoutAttributesMap;
@property (nonatomic, copy) NSSet *fromDisplayItemsPendingTermination;
@property (nonatomic) long long fromEnvironmentMode;
@property (nonatomic, retain) SBAppLayout *fromFloatingAppLayout;
@property (nonatomic) long long fromFloatingConfiguration;
@property (nonatomic) bool fromFloatingSwitcherVisible;
@property (nonatomic) long long fromInterfaceOrientation;
@property (nonatomic) long long fromPeekConfiguration;
@property (nonatomic, readonly) SBSwitcherShelf *fromShelf;
@property (nonatomic) struct CGSize { double x1; double x2; } fromSizeOfMovingDisplayItem;
@property (nonatomic) long long fromSpaceConfiguration;
@property (nonatomic) long long fromWindowPickerRole;
@property (getter=isGestureInitiated, nonatomic) bool gestureInitiated;
@property (getter=isiPadOSWindowingModeChangeEvent, setter=setiPadOSWindowingModeChangeEvent:, nonatomic) bool iPadOSWindowingModeChangeEvent;
@property (getter=isIconZoomDisabled, nonatomic) bool iconZoomDisabled;
@property (getter=isKeyboardShortcutInitiated, nonatomic) bool keyboardShortcutInitiated;
@property (getter=isLaunchingFromDockTransition, nonatomic) bool launchingFromDockTransition;
@property (getter=isMorphFromInAppView, nonatomic) bool morphFromInAppView;
@property (getter=isMorphFromPIPTransition, nonatomic) bool morphFromPIPTransition;
@property (getter=isMorphToPIPTransition, nonatomic) bool morphToPIPTransition;
@property (nonatomic) long long morphingPIPLayoutRole;
@property (nonatomic, retain) SBTransitionSwitcherModifierMoveDisplaysContext *moveDisplaysContext;
@property (getter=isMoveDisplaysTransition, nonatomic) bool moveDisplaysTransition;
@property (nonatomic, copy) SBDisplayItem *movingDisplayItem;
@property (getter=isNewSceneTransition, nonatomic) bool newSceneTransition;
@property (nonatomic) unsigned long long phase;
@property (nonatomic) bool prefersCenterZoomTransition;
@property (nonatomic) bool prefersCrossfadeTransition;
@property (getter=isQuickActionTransition, nonatomic) bool quickActionTransition;
@property (getter=isShelfRequestTransition, nonatomic) bool shelfRequestTransition;
@property (getter=isShelfTransition, nonatomic) bool shelfTransition;
@property (getter=isSpotlightTransition, nonatomic) bool spotlightTransition;
@property (nonatomic, copy) NSString *toAppExposeBundleID;
@property (nonatomic, retain) SBAppLayout *toAppLayout;
@property (nonatomic) bool toAppLayoutWantsExclusiveForeground;
@property (nonatomic) struct CGPoint { double x1; double x2; } toCenterOfMovingDisplayItem;
@property (nonatomic, copy) NSDictionary *toDisplayItemLayoutAttributesMap;
@property (nonatomic) long long toEnvironmentMode;
@property (nonatomic, retain) SBAppLayout *toFloatingAppLayout;
@property (nonatomic) long long toFloatingConfiguration;
@property (nonatomic) bool toFloatingSwitcherVisible;
@property (nonatomic) long long toInterfaceOrientation;
@property (nonatomic) long long toPeekConfiguration;
@property (nonatomic, readonly) SBSwitcherShelf *toShelf;
@property (nonatomic) struct CGSize { double x1; double x2; } toSizeOfMovingDisplayItem;
@property (nonatomic) long long toSpaceConfiguration;
@property (nonatomic) long long toWindowPickerRole;
@property (getter=isTopAffordanceInitiated, nonatomic) bool topAffordanceInitiated;
@property (nonatomic, readonly) NSUUID *transitionID;
@property (getter=isZoomFromSystemApertureTransition, nonatomic) bool zoomFromSystemApertureTransition;

- (void).cxx_destruct;
- (bool)_isEnteringPageCenterWindowEvent;
- (id)activatingAppLayout;
- (id)ambiguouslyLaunchedBundleIDIfAny;
- (id)appLayoutsWithRemovalContexts;
- (id)bannerUnfurlSourceContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugPredicateSummary;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)dosidoTransitionDirection;
- (id)fromAppExposeBundleID;
- (id)fromAppLayout;
- (bool)fromAppLayoutWantsExclusiveForeground;
- (struct CGPoint { double x1; double x2; })fromCenterOfMovingDisplayItem;
- (id)fromDisplayItemLayoutAttributesMap;
- (id)fromDisplayItemsPendingTermination;
- (long long)fromEnvironmentMode;
- (id)fromFloatingAppLayout;
- (long long)fromFloatingConfiguration;
- (bool)fromFloatingSwitcherVisible;
- (long long)fromInterfaceOrientation;
- (long long)fromPeekConfiguration;
- (id)fromShelf;
- (struct CGSize { double x1; double x2; })fromSizeOfMovingDisplayItem;
- (long long)fromSpaceConfiguration;
- (long long)fromWindowPickerRole;
- (id)initWithTransitionID:(id)arg1 phase:(unsigned long long)arg2 animated:(bool)arg3;
- (bool)isAnimated;
- (bool)isAnyPulseEvent;
- (bool)isAnySplitViewToOrFromSlideOverEvent;
- (bool)isAppLaunchDuringWindowDragGestureTransition;
- (bool)isBannerUnfurlTransition;
- (bool)isBreadcrumbTransition;
- (bool)isCenterWindowRemovalEvent;
- (bool)isCenterWindowToExistingSplitViewEvent;
- (bool)isCenterWindowToFullScreenEvent;
- (bool)isCenterWindowToNewSplitViewEvent;
- (bool)isCenterWindowToSlideOverEvent;
- (bool)isCenterWindowZoomingUpFromShelfEvent;
- (bool)isCommandTabTransition;
- (bool)isContinuityTransition;
- (bool)isContinuousExposeConfigurationChangeEvent;
- (bool)isDragAndDropTransition;
- (bool)isEnteringAnyPeekEvent;
- (bool)isEnteringSlideOverPeekEvent;
- (bool)isEnteringSplitViewPeekEvent;
- (bool)isExitingAnyPeekEvent;
- (bool)isExitingCenterWindowEvent;
- (bool)isExitingCenterWindowToOtherRoleEvent;
- (bool)isExitingSlideOverPeekEvent;
- (bool)isExitingSlideOverPeekToAppEvent;
- (bool)isExitingSlideOverPeekToHomeScreenEvent;
- (bool)isExitingSplitViewPeekEvent;
- (bool)isExitingSplitViewPeekToAppEvent;
- (bool)isExitingSplitViewPeekToHomeScreenEvent;
- (bool)isFloatingPulseEvent;
- (bool)isFullScreenToCenterWindowEvent;
- (bool)isFullScreenToSplitViewEvent;
- (bool)isGestureInitiated;
- (bool)isIconZoomDisabled;
- (bool)isKeyboardShortcutInitiated;
- (bool)isLaunchingFromDockTransition;
- (bool)isMainPulseEvent;
- (bool)isMorphFromInAppView;
- (bool)isMorphFromPIPTransition;
- (bool)isMorphToPIPTransition;
- (bool)isMoveDisplaysTransition;
- (bool)isNewSceneTransition;
- (bool)isPresentingPageCenterWindowEvent;
- (bool)isPrimaryToSlideOverEvent;
- (bool)isQuickActionTransition;
- (bool)isReplaceCenterWindowWithNewCenterWindowEvent;
- (bool)isShelfRequestTransition;
- (bool)isShelfTransition;
- (bool)isSideToSlideOverEvent;
- (bool)isSlideOverToCenterWindowEvent;
- (bool)isSlideOverToFullScreenEvent;
- (bool)isSlideOverToPrimaryEvent;
- (bool)isSlideOverToSideEvent;
- (bool)isSplitViewCrossfadeEvent;
- (bool)isSplitViewToCenterWindowEvent;
- (bool)isSpotlightTransition;
- (bool)isSwappingFullScreenAppSidesEvent;
- (bool)isTopAffordanceInitiated;
- (bool)isTransitionEvent;
- (bool)isZoomFromSystemApertureTransition;
- (bool)isiPadOSWindowingModeChangeEvent;
- (long long)morphingPIPLayoutRole;
- (id)moveDisplaysContext;
- (id)movingDisplayItem;
- (unsigned long long)phase;
- (bool)prefersCenterZoomTransition;
- (bool)prefersCrossfadeTransition;
- (id)removalContextForAppLayout:(id)arg1;
- (void)setActivatingAppLayout:(id)arg1;
- (void)setAmbiguouslyLaunchedBundleIDIfAny:(id)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setAppLaunchDuringWindowDragGestureTransition:(bool)arg1;
- (void)setBannerUnfurlSourceContext:(id)arg1;
- (void)setBannerUnfurlTransition:(bool)arg1;
- (void)setBreadcrumbTransition:(bool)arg1;
- (void)setCommandTabTransition:(bool)arg1;
- (void)setContinuityTransition:(bool)arg1;
- (void)setContinuousExposeConfigurationChangeEvent:(bool)arg1;
- (void)setDosidoTransitionDirection:(long long)arg1;
- (void)setDragAndDropTransition:(bool)arg1;
- (void)setFromAppExposeBundleID:(id)arg1;
- (void)setFromAppLayout:(id)arg1;
- (void)setFromAppLayoutWantsExclusiveForeground:(bool)arg1;
- (void)setFromCenterOfMovingDisplayItem:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFromDisplayItemLayoutAttributesMap:(id)arg1;
- (void)setFromDisplayItemsPendingTermination:(id)arg1;
- (void)setFromEnvironmentMode:(long long)arg1;
- (void)setFromFloatingAppLayout:(id)arg1;
- (void)setFromFloatingConfiguration:(long long)arg1;
- (void)setFromFloatingSwitcherVisible:(bool)arg1;
- (void)setFromInterfaceOrientation:(long long)arg1;
- (void)setFromPeekConfiguration:(long long)arg1;
- (void)setFromSizeOfMovingDisplayItem:(struct CGSize { double x1; double x2; })arg1;
- (void)setFromSpaceConfiguration:(long long)arg1;
- (void)setFromWindowPickerRole:(long long)arg1;
- (void)setGestureInitiated:(bool)arg1;
- (void)setIconZoomDisabled:(bool)arg1;
- (void)setKeyboardShortcutInitiated:(bool)arg1;
- (void)setLaunchingFromDockTransition:(bool)arg1;
- (void)setMorphFromInAppView:(bool)arg1;
- (void)setMorphFromPIPTransition:(bool)arg1;
- (void)setMorphToPIPTransition:(bool)arg1;
- (void)setMorphingPIPLayoutRole:(long long)arg1;
- (void)setMoveDisplaysContext:(id)arg1;
- (void)setMoveDisplaysTransition:(bool)arg1;
- (void)setMovingDisplayItem:(id)arg1;
- (void)setNewSceneTransition:(bool)arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setPrefersCenterZoomTransition:(bool)arg1;
- (void)setPrefersCrossfadeTransition:(bool)arg1;
- (void)setQuickActionTransition:(bool)arg1;
- (void)setRemovalContext:(id)arg1 forAppLayout:(id)arg2;
- (void)setShelfRequestTransition:(bool)arg1;
- (void)setShelfTransition:(bool)arg1;
- (void)setSpotlightTransition:(bool)arg1;
- (void)setToAppExposeBundleID:(id)arg1;
- (void)setToAppLayout:(id)arg1;
- (void)setToAppLayoutWantsExclusiveForeground:(bool)arg1;
- (void)setToCenterOfMovingDisplayItem:(struct CGPoint { double x1; double x2; })arg1;
- (void)setToDisplayItemLayoutAttributesMap:(id)arg1;
- (void)setToEnvironmentMode:(long long)arg1;
- (void)setToFloatingAppLayout:(id)arg1;
- (void)setToFloatingConfiguration:(long long)arg1;
- (void)setToFloatingSwitcherVisible:(bool)arg1;
- (void)setToInterfaceOrientation:(long long)arg1;
- (void)setToPeekConfiguration:(long long)arg1;
- (void)setToSizeOfMovingDisplayItem:(struct CGSize { double x1; double x2; })arg1;
- (void)setToSpaceConfiguration:(long long)arg1;
- (void)setToWindowPickerRole:(long long)arg1;
- (void)setTopAffordanceInitiated:(bool)arg1;
- (void)setZoomFromSystemApertureTransition:(bool)arg1;
- (void)setiPadOSWindowingModeChangeEvent:(bool)arg1;
- (id)toAppExposeBundleID;
- (id)toAppLayout;
- (bool)toAppLayoutWantsExclusiveForeground;
- (struct CGPoint { double x1; double x2; })toCenterOfMovingDisplayItem;
- (id)toDisplayItemLayoutAttributesMap;
- (long long)toEnvironmentMode;
- (id)toFloatingAppLayout;
- (long long)toFloatingConfiguration;
- (bool)toFloatingSwitcherVisible;
- (long long)toInterfaceOrientation;
- (long long)toPeekConfiguration;
- (id)toShelf;
- (struct CGSize { double x1; double x2; })toSizeOfMovingDisplayItem;
- (long long)toSpaceConfiguration;
- (long long)toWindowPickerRole;
- (id)transitionID;
- (long long)type;

@end
