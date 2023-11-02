
@interface FBSMutableSceneSettings : FBSSceneSettings <BLSBacklightSceneSettings, FBSMutableSettings, PBMutablePosterSceneSettings, PREditingSceneSettings, PRMutableRenderingSceneSettings, PRMutableSceneSettings, PRUIMutableSwitcherSceneSettings>

@property (getter=isBackgrounded, nonatomic) bool backgrounded;
@property (getter=bls_isAlwaysOnEnabledForEnvironment, setter=bls_setAlwaysOnEnabledForEnvironment:, nonatomic) bool bls_alwaysOnEnabledForEnvironment;
@property (getter=bls_isBlanked, setter=bls_setBlanked:, nonatomic) bool bls_blanked;
@property (getter=bls_isDelegateActive, setter=bls_setDelegateActive:, nonatomic) bool bls_delegateActive;
@property (getter=bls_isLiveUpdating, setter=bls_setLiveUpdating:, nonatomic) bool bls_liveUpdating;
@property (setter=bls_setPresentationDate:, nonatomic, retain) NSDate *bls_presentationDate;
@property (setter=bls_setRenderSeed:, nonatomic) unsigned long long bls_renderSeed;
@property (getter=bls_hasUnrestrictedFramerateUpdates, setter=bls_setUnrestrictedFramerateUpdates:, nonatomic) bool bls_unrestrictedFramerateUpdates;
@property (setter=bls_setVisualState:, nonatomic, retain) BLSBacklightSceneVisualState *bls_visualState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isForeground, nonatomic) bool foreground;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long interruptionPolicy;
@property (nonatomic) double level;
@property (setter=pb_setActiveVariant:, nonatomic) long long pb_activeVariant;
@property (setter=pb_setAnimationSuspended:, nonatomic) bool pb_animationSuspended;
@property (setter=pb_setSignificantEventsCounter:, nonatomic) unsigned long long pb_significantEventsCounter;
@property (getter=pr_isAlternateDateEnabled, nonatomic, readonly) bool pr_alternateDateEnabled;
@property (getter=pr_isAlternateDateEnabled, setter=pr_setAlternateDateEnabled:, nonatomic) bool pr_alternateDateEnabled;
@property (nonatomic, readonly) BSColor *pr_caseColor;
@property (setter=pr_setCaseColor:, nonatomic, retain) BSColor *pr_caseColor;
@property (getter=pr_isComplicationRowConfigured, nonatomic, readonly) bool pr_complicationRowConfigured;
@property (getter=pr_isComplicationRowConfigured, setter=pr_setComplicationRowConfigured:, nonatomic) bool pr_complicationRowConfigured;
@property (getter=pr_isComplicationSidebarConfigured, nonatomic, readonly) bool pr_complicationSidebarConfigured;
@property (getter=pr_isComplicationSidebarConfigured, setter=pr_setComplicationSidebarConfigured:, nonatomic) bool pr_complicationSidebarConfigured;
@property (getter=pr_areComplicationsDisallowed, setter=pr_setComplicationsDisallowed:, nonatomic) bool pr_complicationsDisallowed;
@property (setter=pr_setContent:, nonatomic) long long pr_content;
@property (getter=pr_areControlsHidden, setter=pr_setControlsHidden:, nonatomic) bool pr_controlsHidden;
@property (getter=pr_isCoveredByModalPresentation, setter=pr_setCoveredByModalPresentation:, nonatomic) bool pr_coveredByModalPresentation;
@property (getter=pr_isDepthEffectDisallowed, nonatomic, readonly) bool pr_depthEffectDisallowed;
@property (getter=pr_isDepthEffectDisallowed, setter=pr_setDepthEffectDisallowed:, nonatomic) bool pr_depthEffectDisallowed;
@property (setter=pr_setDeviceOrientation:, nonatomic) long long pr_deviceOrientation;
@property (nonatomic, readonly) long long pr_deviceOrientation;
@property (setter=pr_setEditingAcceptButtonType:, nonatomic) long long pr_editingAcceptButtonType;
@property (setter=pr_setEditingContext:, nonatomic) long long pr_editingContext;
@property (setter=pr_setEditingVariant:, nonatomic) long long pr_editingVariant;
@property (getter=pr_isFloatingLayerSnapshot, setter=pr_setFloatingLayerSnapshot:, nonatomic) bool pr_floatingLayerSnapshot;
@property (setter=pr_setFocusedComplicationElement:, nonatomic) long long pr_focusedComplicationElement;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_horizontalTitleBoundingRect;
@property (setter=pr_setHorizontalTitleBoundingRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_horizontalTitleBoundingRect;
@property (getter=pr_isInlineComplicationConfigured, nonatomic, readonly) bool pr_inlineComplicationConfigured;
@property (getter=pr_isInlineComplicationConfigured, setter=pr_setInlineComplicationConfigured:, nonatomic) bool pr_inlineComplicationConfigured;
@property (nonatomic, readonly) bool pr_isInvalidated;
@property (setter=pr_setLeadingTopButtonFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_leadingTopButtonFrame;
@property (setter=pr_setMode:, nonatomic) long long pr_mode;
@property (setter=pr_setOverrideDate:, nonatomic, retain) NSDate *pr_overrideDate;
@property (getter=pr_isParallaxDisallowed, nonatomic, readonly) bool pr_parallaxDisallowed;
@property (getter=pr_isParallaxDisallowed, setter=pr_setParallaxDisallowed:, nonatomic) bool pr_parallaxDisallowed;
@property (getter=pr_isParallaxEffectivelyEnabled, nonatomic, readonly) bool pr_parallaxEffectivelyEnabled;
@property (getter=pr_isParallaxEnabled, nonatomic, readonly) bool pr_parallaxEnabled;
@property (getter=pr_isParallaxEnabled, setter=pr_setParallaxEnabled:, nonatomic) bool pr_parallaxEnabled;
@property (nonatomic, readonly) PRPosterConfigurableOptions *pr_posterConfigurableOptions;
@property (setter=pr_setPosterConfigurableOptions:, nonatomic, retain) PRPosterConfigurableOptions *pr_posterConfigurableOptions;
@property (nonatomic, readonly) PRPosterConfiguredProperties *pr_posterConfiguredProperties;
@property (setter=pr_setPosterConfiguredProperties:, nonatomic, retain) PRPosterConfiguredProperties *pr_posterConfiguredProperties;
@property (nonatomic, readonly) PRSServerPosterPath *pr_posterContents;
@property (setter=pr_setPosterContents:, nonatomic, retain) PRSServerPosterPath *pr_posterContents;
@property (setter=pr_setPreviewContent:, nonatomic) unsigned long long pr_previewContent;
@property (nonatomic, readonly, copy) NSString *pr_previewIdentifier;
@property (setter=pr_setPreviewIdentifier:, nonatomic, copy) NSString *pr_previewIdentifier;
@property (nonatomic, readonly, copy) NSString *pr_provider;
@property (setter=pr_setProvider:, nonatomic, copy) NSString *pr_provider;
@property (nonatomic, readonly, copy) NSString *pr_role;
@property (setter=pr_setRole:, nonatomic, copy) NSString *pr_role;
@property (setter=pr_setSceneAttachments:, nonatomic, retain) NSArray *pr_sceneAttachments;
@property (nonatomic, readonly) bool pr_showsComplications;
@property (setter=pr_setShowsComplications:, nonatomic) bool pr_showsComplications;
@property (nonatomic, readonly) bool pr_showsHeaderElements;
@property (setter=pr_setShowsHeaderElements:, nonatomic) bool pr_showsHeaderElements;
@property (setter=pr_setSignificantEventsCounter:, nonatomic) unsigned long long pr_significantEventsCounter;
@property (getter=pr_isSnapshot, setter=pr_setSnapshot:, nonatomic) bool pr_snapshot;
@property (nonatomic, readonly, copy) NSString *pr_snapshotDefinitionIdentifier;
@property (setter=pr_setSnapshotDefinitionIdentifier:, nonatomic, copy) NSString *pr_snapshotDefinitionIdentifier;
@property (nonatomic, readonly, copy) NSString *pr_snapshotLogIdentifier;
@property (setter=pr_setSnapshotLogIdentifier:, nonatomic, copy) NSString *pr_snapshotLogIdentifier;
@property (setter=pr_setTitleAlignment:, nonatomic) unsigned long long pr_titleAlignment;
@property (setter=pr_setTitleString:, nonatomic, copy) NSString *pr_titleString;
@property (setter=pr_setTrailingTopButtonFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_trailingTopButtonFrame;
@property (setter=pr_setUnlockProgress:, nonatomic) double pr_unlockProgress;
@property (nonatomic, readonly) long long pr_userInterfaceStyle;
@property (setter=pr_setUserInterfaceStyle:, nonatomic) long long pr_userInterfaceStyle;
@property (setter=pr_setUserTapEventsCounter:, nonatomic) unsigned long long pr_userTapEventsCounter;
@property (setter=pr_setUserTapEventWithLocation:, nonatomic) struct CGPoint { double x1; double x2; } pr_userTapLocation;
@property (setter=pr_setUsesEditingLayout:, nonatomic) bool pr_usesEditingLayout;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_verticalTitleBoundingRect;
@property (setter=pr_setVerticalTitleBoundingRect:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pr_verticalTitleBoundingRect;
@property (setter=pr_setWakeSourceIsSwipeToUnlock:, nonatomic) bool pr_wakeSourceIsSwipeToUnlock;
@property (getter=pr_isWallpaperObscured, nonatomic, readonly) bool pr_wallpaperObscured;
@property (getter=pr_isWallpaperObscured, setter=pr_setWallpaperObscured:, nonatomic) bool pr_wallpaperObscured;
@property (setter=prui_setLeadingTopButtonFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } prui_leadingTopButtonFrame;
@property (getter=prui_isLockPosterComplicationRowHidden, setter=prui_setLockPosterComplicationRowHidden:, nonatomic) bool prui_lockPosterComplicationRowHidden;
@property (getter=prui_isLockPosterFloatingLayerInlined, setter=prui_setLockPosterFloatingLayerInlined:, nonatomic) bool prui_lockPosterFloatingLayerInlined;
@property (setter=prui_setLockPosterLiveContentLayerContextID:, nonatomic) unsigned int prui_lockPosterLiveContentLayerContextID;
@property (setter=prui_setLockPosterLiveContentLayerRenderID:, nonatomic) unsigned long long prui_lockPosterLiveContentLayerRenderID;
@property (setter=prui_setLockPosterLiveFloatingLayerContextID:, nonatomic) unsigned int prui_lockPosterLiveFloatingLayerContextID;
@property (setter=prui_setLockPosterLiveFloatingLayerRenderID:, nonatomic) unsigned long long prui_lockPosterLiveFloatingLayerRenderID;
@property (setter=prui_setLockPosterOverlayLayerContextID:, nonatomic) unsigned int prui_lockPosterOverlayLayerContextID;
@property (setter=prui_setLockPosterOverlayLayerRenderID:, nonatomic) unsigned long long prui_lockPosterOverlayLayerRenderID;
@property (setter=prui_setLockVibrancyConfiguration:, nonatomic, copy) BSUIVibrancyConfiguration *prui_lockVibrancyConfiguration;
@property (setter=prui_setPreferredSwitcherLayoutMode:, nonatomic) unsigned long long prui_preferredSwitcherLayoutMode;
@property (setter=prui_setTrailingTopButtonFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } prui_trailingTopButtonFrame;
@property (setter=sb_setDisplayConfigurationForSceneManagers:, nonatomic, retain) FBSDisplayConfiguration *sb_displayConfigurationForSceneManagers;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (id)ignoreOcclusionReasons;
- (id)transientLocalSettings;

// Image: /System/Library/Frameworks/ExtensionKit.framework/ExtensionKit

- (void)ex_setRole:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

- (void)bls_setAlwaysOnEnabledForEnvironment:(bool)arg1;
- (void)bls_setBlanked:(bool)arg1;
- (void)bls_setDelegateActive:(bool)arg1;
- (void)bls_setLiveUpdating:(bool)arg1;
- (void)bls_setPresentationDate:(id)arg1;
- (void)bls_setRenderSeed:(unsigned long long)arg1;
- (void)bls_setUnrestrictedFramerateUpdates:(bool)arg1;
- (void)bls_setVisualState:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

- (void)pb_applyLegacySettings;
- (void)pb_setActiveVariant:(long long)arg1;
- (void)pb_setAnimationSuspended:(bool)arg1;
- (void)pb_setSignificantEventsCounter:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoardUI.framework/PosterBoardUI

- (void)prui_setLeadingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prui_setLockPosterComplicationRowHidden:(bool)arg1;
- (void)prui_setLockPosterFloatingLayerInlined:(bool)arg1;
- (void)prui_setLockPosterLiveContentLayerContextID:(unsigned int)arg1;
- (void)prui_setLockPosterLiveContentLayerRenderID:(unsigned long long)arg1;
- (void)prui_setLockPosterLiveFloatingLayerContextID:(unsigned int)arg1;
- (void)prui_setLockPosterLiveFloatingLayerRenderID:(unsigned long long)arg1;
- (void)prui_setLockPosterOverlayLayerContextID:(unsigned int)arg1;
- (void)prui_setLockPosterOverlayLayerRenderID:(unsigned long long)arg1;
- (void)prui_setLockVibrancyConfiguration:(id)arg1;
- (void)prui_setPreferredSwitcherLayoutMode:(unsigned long long)arg1;
- (void)prui_setTrailingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (bool)pr_areComplicationsDisallowed;
- (bool)pr_areControlsHidden;
- (long long)pr_editingAcceptButtonType;
- (long long)pr_editingContext;
- (long long)pr_editingVariant;
- (long long)pr_focusedComplicationElement;
- (bool)pr_isCoveredByModalPresentation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_leadingTopButtonFrame;
- (id)pr_overrideDate;
- (void)pr_setAlternateDateEnabled:(bool)arg1;
- (void)pr_setCaseColor:(id)arg1;
- (void)pr_setComplicationRowConfigured:(bool)arg1;
- (void)pr_setComplicationSidebarConfigured:(bool)arg1;
- (void)pr_setComplicationsDisallowed:(bool)arg1;
- (void)pr_setContent:(long long)arg1;
- (void)pr_setControlsHidden:(bool)arg1;
- (void)pr_setCoveredByModalPresentation:(bool)arg1;
- (void)pr_setDepthEffectDisallowed:(bool)arg1;
- (void)pr_setDeviceOrientation:(long long)arg1;
- (void)pr_setDeviceOrientation:(long long)arg1;
- (void)pr_setEditingAcceptButtonType:(long long)arg1;
- (void)pr_setEditingContext:(long long)arg1;
- (void)pr_setEditingVariant:(long long)arg1;
- (void)pr_setFloatingLayerSnapshot:(bool)arg1;
- (void)pr_setFocusedComplicationElement:(long long)arg1;
- (void)pr_setHorizontalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setInlineComplicationConfigured:(bool)arg1;
- (void)pr_setInvalidated;
- (void)pr_setLeadingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setMode:(long long)arg1;
- (void)pr_setOverrideDate:(id)arg1;
- (void)pr_setParallaxDisallowed:(bool)arg1;
- (void)pr_setParallaxEnabled:(bool)arg1;
- (void)pr_setPosterConfigurableOptions:(id)arg1;
- (void)pr_setPosterConfiguredProperties:(id)arg1;
- (void)pr_setPosterContents:(id)arg1;
- (void)pr_setPreviewContent:(unsigned long long)arg1;
- (void)pr_setPreviewIdentifier:(id)arg1;
- (void)pr_setProvider:(id)arg1;
- (void)pr_setRole:(id)arg1;
- (void)pr_setSceneAttachments:(id)arg1;
- (void)pr_setShowsComplications:(bool)arg1;
- (void)pr_setShowsHeaderElements:(bool)arg1;
- (void)pr_setSignificantEventsCounter:(unsigned long long)arg1;
- (void)pr_setSnapshot:(bool)arg1;
- (void)pr_setSnapshotDefinitionIdentifier:(id)arg1;
- (void)pr_setSnapshotLogIdentifier:(id)arg1;
- (void)pr_setTitleAlignment:(unsigned long long)arg1;
- (void)pr_setTitleString:(id)arg1;
- (void)pr_setTrailingTopButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setUnlockProgress:(double)arg1;
- (void)pr_setUserInterfaceStyle:(long long)arg1;
- (void)pr_setUserTapEventWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)pr_setUserTapEventsCounter:(unsigned long long)arg1;
- (void)pr_setUsesEditingLayout:(bool)arg1;
- (void)pr_setVerticalTitleBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)pr_setWakeSourceIsSwipeToUnlock:(bool)arg1;
- (void)pr_setWallpaperObscured:(bool)arg1;
- (id)pr_titleString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pr_trailingTopButtonFrame;
- (bool)pr_usesEditingLayout;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (void)SBUI_applySystemApertureTransitionParameters:(id)arg1;
- (id)sb_displayConfigurationForSceneManagers;
- (id)sb_displayIdentityForSceneManagers;
- (void)sb_setDisplayConfigurationForSceneManagers:(id)arg1;

@end
