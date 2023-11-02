
@interface FBSMutableSceneClientSettings : FBSSceneClientSettings <BLSBacklightSceneClientSettings, FBSMutableSettings, PBMutablePosterSceneClientSettings, PREditingSceneClientSettings, PRMutableSceneClientSettings, PRRenderingSceneClientSettings, PRUIMutableSwitcherSceneClientSettings>

@property (getter=bls_hasDelegate, setter=bls_setHasDelegate:, nonatomic) bool bls_hasDelegate;
@property (setter=bls_setOptsOutOfProcessAssertions:, nonatomic) bool bls_optsOutOfProcessAssertions;
@property (setter=bls_setSupportsAlwaysOn:, nonatomic) bool bls_supportsAlwaysOn;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSOrderedSet *layers;
@property (setter=pr_setAverageColor:, nonatomic, retain) BSColor *pr_averageColor;
@property (setter=pr_setContentSize:, nonatomic) struct CGSize { double x1; double x2; } pr_contentSize;
@property (getter=pr_areContentsCoveredByModalPresentation, setter=pr_setContentsCoveredByModalPresentation:, nonatomic) bool pr_contentsCoveredByModalPresentation;
@property (getter=pr_isDepthEffectDisabled, nonatomic, readonly) bool pr_depthEffectDisabled;
@property (getter=pr_isDepthEffectDisabled, setter=pr_setDepthEffectDisabled:, nonatomic) bool pr_depthEffectDisabled;
@property (setter=pr_setDesiredLegibilitySettings:, nonatomic, retain) PRPosterLegibilitySettings *pr_desiredLegibilitySettings;
@property (nonatomic, readonly) bool pr_didFinishInitialization;
@property (setter=pr_setDidFinishInitialization:, nonatomic) bool pr_didFinishInitialization;
@property (getter=pr_isEditingFocusActive, setter=pr_setEditingFocusActive:, nonatomic) bool pr_editingFocusActive;
@property (setter=pr_setHandlesWakeAnimation:, nonatomic) bool pr_handlesWakeAnimation;
@property (setter=pr_setHasBackgroundTasks:, nonatomic) bool pr_hasBackgroundTasks;
@property (setter=pr_setHideChrome:, nonatomic) bool pr_hideChrome;
@property (setter=pr_setHideDimmingLayer:, nonatomic) bool pr_hideDimmingLayer;
@property (setter=pr_setInExtendedRenderSession:, nonatomic) bool pr_inExtendedRenderSession;
@property (getter=pr_isParallaxEnabled, nonatomic, readonly) bool pr_parallaxEnabled;
@property (getter=pr_isParallaxEnabled, setter=pr_setParallaxEnabled:, nonatomic) bool pr_parallaxEnabled;
@property (setter=pr_setSignificantEventOptions:, nonatomic) unsigned long long pr_significantEventOptions;
@property (setter=pr_setSignificantEventTime:, nonatomic) unsigned long long pr_significantEventTime;
@property (nonatomic, readonly) BSColor *pr_statusBarTintColor;
@property (setter=pr_setStatusBarTintColor:, nonatomic, retain) BSColor *pr_statusBarTintColor;
@property (nonatomic, readonly, copy) PRTimeDescriptor *pr_timeDescriptor;
@property (setter=pr_setTimeDescriptor:, nonatomic, copy) PRTimeDescriptor *pr_timeDescriptor;
@property (setter=pr_setUserTapEventsRequested:, nonatomic) bool pr_userTapEventsRequested;
@property (nonatomic, readonly) BSUIVibrancyConfiguration *pr_vibrancyConfiguration;
@property (setter=pr_setVibrancyConfiguration:, nonatomic, retain) BSUIVibrancyConfiguration *pr_vibrancyConfiguration;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (nonatomic) double preferredLevel;
@property (nonatomic, copy) NSString *preferredSceneHostIdentifier;
@property (nonatomic, copy) FBSSceneIdentityToken *preferredSceneHostIdentity;
@property (setter=prui_setPrimaryPosterOffset:, nonatomic) struct CGPoint { double x1; double x2; } prui_primaryPosterOffset;
@property (setter=prui_setPrimaryPosterScale:, nonatomic) double prui_primaryPosterScale;
@property (setter=prui_setSwitcherContextID:, nonatomic) unsigned int prui_switcherContextID;
@property (setter=prui_setSwitcherLayoutMode:, nonatomic) unsigned long long prui_switcherLayoutMode;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (void)_applySafeValuesFromUntrustedSettings:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)removeAllLayers;
- (void)removeLayer:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

- (void)bls_setHasDelegate:(bool)arg1;
- (void)bls_setOptsOutOfProcessAssertions:(bool)arg1;
- (void)bls_setSupportsAlwaysOn:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoardUI.framework/PosterBoardUI

- (void)prui_setPrimaryPosterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)prui_setPrimaryPosterScale:(double)arg1;
- (void)prui_setSwitcherContextID:(unsigned int)arg1;
- (void)prui_setSwitcherLayoutMode:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (bool)pr_areContentsCoveredByModalPresentation;
- (id)pr_desiredLegibilitySettings;
- (bool)pr_hasBackgroundTasks;
- (bool)pr_isEditingFocusActive;
- (void)pr_setAverageColor:(id)arg1;
- (void)pr_setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)pr_setContentsCoveredByModalPresentation:(bool)arg1;
- (void)pr_setDepthEffectDisabled:(bool)arg1;
- (void)pr_setDesiredLegibilitySettings:(id)arg1;
- (void)pr_setDidFinishInitialization:(bool)arg1;
- (void)pr_setEditingFocusActive:(bool)arg1;
- (void)pr_setHandlesWakeAnimation:(bool)arg1;
- (void)pr_setHasBackgroundTasks:(bool)arg1;
- (void)pr_setHideChrome:(bool)arg1;
- (void)pr_setHideDimmingLayer:(bool)arg1;
- (void)pr_setInExtendedRenderSession:(bool)arg1;
- (void)pr_setParallaxEnabled:(bool)arg1;
- (void)pr_setSignificantEventOptions:(unsigned long long)arg1;
- (void)pr_setSignificantEventTime:(unsigned long long)arg1;
- (void)pr_setStatusBarTintColor:(id)arg1;
- (void)pr_setTimeDescriptor:(id)arg1;
- (void)pr_setUserTapEventsRequested:(bool)arg1;
- (void)pr_setVibrancyConfiguration:(id)arg1;

@end
