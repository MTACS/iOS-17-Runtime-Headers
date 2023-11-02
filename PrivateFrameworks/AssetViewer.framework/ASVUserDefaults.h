
@interface ASVUserDefaults : NSObject

+ (bool)allowCheckoutNonSecureHTML;
+ (long long)artificialLoadingDelay;
+ (id)checkoutFragment;
+ (id)defaultPlanePosition;
+ (bool)forceDisableArKitVerticalRejection;
+ (bool)forceDisableRayTracedAmbientOcclusion;
+ (bool)forceDisableRealWorldOcclusion;
+ (bool)forceDisableRealWorldPhysics;
+ (bool)forceDisableShadowMaps;
+ (bool)forceShowAnimationScrubber;
+ (bool)forceUseLegacyHitTestAPI;
+ (bool)forceUseLegacySceneImportPipeline;
+ (bool)forceUseSceneReconstructionMeshForOrientation;
+ (id)inlineFramePreferenceString;
+ (int)inlinePreviewMemoryReserve;
+ (int)maxInlinePreviewCount;
+ (float)objectFitToScreenPercentage;
+ (id)overrideCameraStateSerializedString;
+ (double)overrideIBLCutoffDateInSeconds;
+ (int)overrideMaxTextureSize;
+ (long long)overridePreferredIblVersionKey;
+ (id)overrideURLForSafariInline;
+ (id)preferencesValueforKey:(struct __CFString { }*)arg1;
+ (id)preferencesValueforKey:(struct __CFString { }*)arg1 domain:(struct __CFString { }*)arg2;
+ (float)sceneIBLARIntensity;
+ (void)setPreferencesValue:(id)arg1 forKey:(struct __CFString { }*)arg2;
+ (void)setPreferencesValueForKey:(struct __CFString { }*)arg1 value:(struct __CFString { }*)arg2;
+ (bool)shouldRevertToOldHapticsBehavior;
+ (bool)triggerAffordanceShouldReshowAfterArReset;
+ (double)triggerAffordanceShowDuration;
+ (bool)wants2DOverlayControlsHidden;
+ (bool)wantsAnimationDisabled;
+ (bool)wantsDebugActionsButton;
+ (bool)wantsDebugPhysicsEnabled;
+ (bool)wantsDebugSceneUnderstandingEnabled;
+ (bool)wantsDebugVisualizationEnabled;
+ (bool)wantsMeshMemoryEstimateEnabled;
+ (bool)wantsObjectFitToScreen;
+ (bool)wantsObjectPlacedWithoutPlane;
+ (bool)wantsOpenInObjectMode;
+ (bool)wantsParentToCameraInARAndEnableProbes;
+ (bool)wantsPeopleOcclusionDisabled;
+ (bool)wantsRayTracedAmbientOcclusionEnabled;
+ (bool)wantsShowLastPlacementResultTypeStatus;
+ (bool)wantsStatisticsShown;
+ (bool)wantsStatusBarHidden;
+ (bool)wantsStatusPillHidden;
+ (bool)wantsTTRButton;
+ (bool)wantsTrackedRaycastStatus;

@end
