
@interface SBSystemApertureSettings : PTSettings {
    SBFFluidBehaviorSettings * _acceptanceBounceLayout;
    SBFFluidBehaviorSettings * _acceptanceBounceLayoutY;
    SBFFluidBehaviorSettings * _acceptanceBounceRebound;
    SBFFluidBehaviorSettings * _acceptanceBounceSideLayout;
    SBFFluidBehaviorSettings * _acceptanceBounceSideLayoutY;
    SBFFluidBehaviorSettings * _acceptanceBounceSideRebound;
    SBFFluidBehaviorSettings * _acceptanceBounceSideStretch;
    SBFFluidBehaviorSettings * _acceptanceBounceStretch;
    double  _acceptanceSideBounceItemAppearanceDelayOffset;
    double  _acceptanceSideBounceReboundDelay;
    double  _acceptanceSideBounceXSensorExpansion;
    double  _acceptanceSideBounceXSensorOffset;
    double  _acceptanceSideBounceXStretch;
    double  _acceptanceSideBounceXVelocityThreshold;
    double  _acceptanceSideBounceYPadding;
    double  _acceptanceUpBounceFixedOvershootScaling;
    double  _acceptanceUpBounceItemAppearanceDelayOffset;
    double  _acceptanceUpBounceReboundDelay;
    double  _acceptanceUpBounceXPadding;
    double  _acceptanceUpBounceYDownStretch;
    double  _acceptanceUpBounceYStretch;
    bool  _activityKeyLineColorEnabled;
    SBFCAColorMatrixSettings * _adaptiveKeyLineColorMatrix;
    double  _adaptiveKeyLineThickness;
    double  _alphaTransitionDurationOnClonedDisplay;
    bool  _backgroundBlurEnabled;
    double  _boundsCollapsingPhaseChangeProgress;
    double  _boundsCollisionProgress;
    double  _boundsCompensatingPhaseChangeProgress;
    SBFFluidBehaviorSettings * _bumpAnimationScaleDownSettings;
    SBFFluidBehaviorSettings * _bumpAnimationScaleUpSettings;
    double  _bumpAnimationXScale;
    double  _bumpAnimationYScale;
    SBSAInterfaceElementTransitionSettings * _compactInterfaceElementTransitionSettings;
    double  _containerHitRectHorizontalLimit;
    double  _containerHitRectHorizontalMargin;
    double  _containerHitRectHorizontalMarginLimit;
    double  _containerHitRectTopMarginDefault;
    double  _containerHitRectTopMarginWide;
    bool  _containerHitRectVisible;
    SBFFluidBehaviorSettings * _contentInteractionBeginBehaviorSettings;
    SBSAInterfaceElementTransitionSettings * _customInterfaceElementTransitionSettings;
    SBSAInterfaceElementTransitionSettings * _defaultInterfaceElementTransitionSettings;
    SBFFluidBehaviorSettings * _ejectionContractionSettings;
    double  _ejectionMaxCornerRadius;
    double  _ejectionStretchDuration;
    SBFFluidBehaviorSettings * _ejectionStretchSettings;
    double  _ejectionXStretch;
    double  _ejectionYStretch;
    SBSAElementContentTransitionSettings * _elementContentTransitionSettings;
    bool  _elementShadowEnabled;
    double  _expansionToCompactBeginInflationProgress;
    double  _firstShakeMilestone;
    bool  _hideRemotePrototypingFallbackPill;
    bool  _highlightTransitions;
    SBSAInterfaceElementInertCollapsingTransitionSettings * _inertCollapsingInterfaceElementTransitionSettings;
    SBSAInterfaceElementInertCompensatingTransitionSettings * _inertCompensatingInterfaceElementTransitionSettings;
    SBSAInterfaceElementTransitionSettings * _inertInterfaceElementTransitionSettings;
    double  _inflateAnimationContentScale;
    double  _inflateAnimationScale;
    SBFFluidBehaviorSettings * _inflateAnimationScaleDownSettings;
    SBFFluidBehaviorSettings * _inflateAnimationScaleUpSettings;
    double  _inflateVerticalOffsetProportion;
    SBFFluidBehaviorSettings * _jindoAuthErrorShakeInitialKick;
    SBFFluidBehaviorSettings * _jindoAuthErrorShakeSettle;
    SBFFluidBehaviorSettings * _jindoAuthErrorStretchOut;
    SBFFluidBehaviorSettings * _jindoAuthErrorStretchSettle;
    SBFFluidBehaviorSettings * _jindoBoundsOval;
    double  _keyLineAlpha;
    SBFFluidBehaviorSettings * _keyLineAppearForSwoopTransition;
    double  _keyLineColorFixedLstar;
    double  _keyLineDarkToMixedMinLuma;
    SBFFluidBehaviorSettings * _keyLineDisappearToInertTransition;
    bool  _keyLineEnabled;
    double  _keyLineMixedToDarkMaxLuma;
    SBFFluidBehaviorSettings * _keyLineStyleTransition;
    double  _keyLineThickness;
    SBSAInterfaceElementTransitionSettings * _minimalInterfaceElementTransitionSettings;
    double  _minimumRequiredSymmetryInCompactLayoutMode;
    double  _mitosisHeadstartDelay;
    SBFFluidBehaviorSettings * _mitosisSecondaryBoundsSettings;
    double  _paddingFromScreenEdgeRequiringSymmetricLayout;
    double  _prominentPillContentScale;
    double  _prominentPillScale;
    double  _prominentPillVerticalOffsetProportion;
    double  _pulseDuration;
    SBFFluidBehaviorSettings * _pulseExpandBehaviorSettings;
    double  _pulseScale;
    double  _recombineGestureTranslateFactorCompress;
    double  _recombineGestureTranslateFactorStretch;
    double  _recombineGestureXRubberbandingCompress;
    double  _recombineGestureXRubberbandingStretch;
    double  _recombineGestureXScaleFactorCompress;
    double  _recombineGestureXScaleFactorStretch;
    double  _resizeGestureMinEdgePadding;
    double  _resizeGestureSensorXSafetyMargin;
    double  _resizeGestureUpOffsetFactor;
    double  _resizeGestureXRubberbanding;
    double  _resizeGestureYRangeBeginTracking;
    double  _resizeGestureYRangeEndTracking;
    double  _resizeGestureYRubberbandingCompress;
    double  _resizeGestureYRubberbandingStretch;
    double  _secondShakeMilestone;
    double  _sensorObscuringShadowApexProgress;
    double  _sensorShadowOpacityFactor;
    bool  _sensorShadowVisible;
    double  _shakeDisplacement;
    bool  _shakeRingerBell;
    double  _shakeSensorExpansion;
    double  _shakeSensorOffset;
    bool  _suppressHidingInSnapshotsWhileEmpty;
    bool  _suppressHidingOnClonedDisplayWhileEmpty;
    SBFFluidBehaviorSettings * _transitionToProminentPillSettings;
}

@property (nonatomic, retain) SBFFluidBehaviorSettings *acceptanceBounceLayout;
@property (nonatomic, retain) SBFFluidBehaviorSettings *acceptanceBounceLayoutY;
@property (nonatomic, retain) SBFFluidBehaviorSettings *acceptanceBounceRebound;
@property (nonatomic, retain) SBFFluidBehaviorSettings *acceptanceBounceSideLayout;
@property (nonatomic, retain) SBFFluidBehaviorSettings *acceptanceBounceSideLayoutY;
@property (nonatomic, retain) SBFFluidBehaviorSettings *acceptanceBounceSideRebound;
@property (nonatomic, retain) SBFFluidBehaviorSettings *acceptanceBounceSideStretch;
@property (nonatomic, retain) SBFFluidBehaviorSettings *acceptanceBounceStretch;
@property (nonatomic) double acceptanceSideBounceItemAppearanceDelayOffset;
@property (nonatomic) double acceptanceSideBounceReboundDelay;
@property (nonatomic) double acceptanceSideBounceXSensorExpansion;
@property (nonatomic) double acceptanceSideBounceXSensorOffset;
@property (nonatomic) double acceptanceSideBounceXStretch;
@property (nonatomic) double acceptanceSideBounceXVelocityThreshold;
@property (nonatomic) double acceptanceSideBounceYPadding;
@property (nonatomic) double acceptanceUpBounceFixedOvershootScaling;
@property (nonatomic) double acceptanceUpBounceItemAppearanceDelayOffset;
@property (nonatomic) double acceptanceUpBounceReboundDelay;
@property (nonatomic) double acceptanceUpBounceXPadding;
@property (nonatomic) double acceptanceUpBounceYDownStretch;
@property (nonatomic) double acceptanceUpBounceYStretch;
@property (nonatomic) bool activityKeyLineColorEnabled;
@property (nonatomic, retain) SBFCAColorMatrixSettings *adaptiveKeyLineColorMatrix;
@property (nonatomic) double adaptiveKeyLineThickness;
@property (nonatomic) double alphaTransitionDurationOnClonedDisplay;
@property (nonatomic) bool backgroundBlurEnabled;
@property (nonatomic) double boundsCollapsingPhaseChangeProgress;
@property (nonatomic) double boundsCollisionProgress;
@property (nonatomic) double boundsCompensatingPhaseChangeProgress;
@property (nonatomic, retain) SBFFluidBehaviorSettings *bumpAnimationScaleDownSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *bumpAnimationScaleUpSettings;
@property (nonatomic) double bumpAnimationXScale;
@property (nonatomic) double bumpAnimationYScale;
@property (nonatomic, retain) SBSAInterfaceElementTransitionSettings *compactInterfaceElementTransitionSettings;
@property (nonatomic) double containerHitRectHorizontalLimit;
@property (nonatomic) double containerHitRectHorizontalMargin;
@property (nonatomic) double containerHitRectHorizontalMarginLimit;
@property (nonatomic) double containerHitRectTopMarginDefault;
@property (nonatomic) double containerHitRectTopMarginWide;
@property (getter=isContainerHitRectVisible, nonatomic) bool containerHitRectVisible;
@property (nonatomic, retain) SBFFluidBehaviorSettings *contentInteractionBeginBehaviorSettings;
@property (nonatomic, retain) SBSAInterfaceElementTransitionSettings *customInterfaceElementTransitionSettings;
@property (nonatomic, retain) SBSAInterfaceElementTransitionSettings *defaultInterfaceElementTransitionSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *ejectionContractionSettings;
@property (nonatomic) double ejectionMaxCornerRadius;
@property (nonatomic) double ejectionStretchDuration;
@property (nonatomic, retain) SBFFluidBehaviorSettings *ejectionStretchSettings;
@property (nonatomic) double ejectionXStretch;
@property (nonatomic) double ejectionYStretch;
@property (nonatomic, retain) SBSAElementContentTransitionSettings *elementContentTransitionSettings;
@property (nonatomic) bool elementShadowEnabled;
@property (nonatomic) double expansionToCompactBeginInflationProgress;
@property (nonatomic) double firstShakeMilestone;
@property (nonatomic) bool hideRemotePrototypingFallbackPill;
@property (nonatomic) bool highlightTransitions;
@property (nonatomic, retain) SBSAInterfaceElementInertCollapsingTransitionSettings *inertCollapsingInterfaceElementTransitionSettings;
@property (nonatomic, retain) SBSAInterfaceElementInertCompensatingTransitionSettings *inertCompensatingInterfaceElementTransitionSettings;
@property (nonatomic, retain) SBSAInterfaceElementTransitionSettings *inertInterfaceElementTransitionSettings;
@property (nonatomic) double inflateAnimationContentScale;
@property (nonatomic) double inflateAnimationScale;
@property (nonatomic, retain) SBFFluidBehaviorSettings *inflateAnimationScaleDownSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *inflateAnimationScaleUpSettings;
@property (nonatomic) double inflateVerticalOffsetProportion;
@property (nonatomic, retain) SBFFluidBehaviorSettings *jindoAuthErrorShakeInitialKick;
@property (nonatomic, retain) SBFFluidBehaviorSettings *jindoAuthErrorShakeSettle;
@property (nonatomic, retain) SBFFluidBehaviorSettings *jindoAuthErrorStretchOut;
@property (nonatomic, retain) SBFFluidBehaviorSettings *jindoAuthErrorStretchSettle;
@property (nonatomic, retain) SBFFluidBehaviorSettings *jindoBoundsOval;
@property (nonatomic) double keyLineAlpha;
@property (nonatomic, retain) SBFFluidBehaviorSettings *keyLineAppearForSwoopTransition;
@property (nonatomic) double keyLineColorFixedLstar;
@property (nonatomic) double keyLineDarkToMixedMinLuma;
@property (nonatomic, retain) SBFFluidBehaviorSettings *keyLineDisappearToInertTransition;
@property (nonatomic) bool keyLineEnabled;
@property (nonatomic) double keyLineMixedToDarkMaxLuma;
@property (nonatomic, retain) SBFFluidBehaviorSettings *keyLineStyleTransition;
@property (nonatomic) double keyLineThickness;
@property (nonatomic, retain) SBSAInterfaceElementTransitionSettings *minimalInterfaceElementTransitionSettings;
@property (nonatomic) double minimumRequiredSymmetryInCompactLayoutMode;
@property (nonatomic) double mitosisHeadstartDelay;
@property (nonatomic, retain) SBFFluidBehaviorSettings *mitosisSecondaryBoundsSettings;
@property (nonatomic) double paddingFromScreenEdgeRequiringSymmetricLayout;
@property (nonatomic) double prominentPillContentScale;
@property (nonatomic) double prominentPillScale;
@property (nonatomic) double prominentPillVerticalOffsetProportion;
@property (nonatomic) double pulseDuration;
@property (nonatomic, retain) SBFFluidBehaviorSettings *pulseExpandBehaviorSettings;
@property (nonatomic) double pulseScale;
@property (nonatomic) double recombineGestureTranslateFactorCompress;
@property (nonatomic) double recombineGestureTranslateFactorStretch;
@property (nonatomic) double recombineGestureXRubberbandingCompress;
@property (nonatomic) double recombineGestureXRubberbandingStretch;
@property (nonatomic) double recombineGestureXScaleFactorCompress;
@property (nonatomic) double recombineGestureXScaleFactorStretch;
@property (nonatomic) double resizeGestureMinEdgePadding;
@property (nonatomic) double resizeGestureSensorXSafetyMargin;
@property (nonatomic) double resizeGestureUpOffsetFactor;
@property (nonatomic) double resizeGestureXRubberbanding;
@property (nonatomic) double resizeGestureYRangeBeginTracking;
@property (nonatomic) double resizeGestureYRangeEndTracking;
@property (nonatomic) double resizeGestureYRubberbandingCompress;
@property (nonatomic) double resizeGestureYRubberbandingStretch;
@property (nonatomic) double secondShakeMilestone;
@property (nonatomic) double sensorObscuringShadowApexProgress;
@property (nonatomic) double sensorShadowOpacityFactor;
@property (getter=isSensorShadowVisible, nonatomic) bool sensorShadowVisible;
@property (nonatomic) double shakeDisplacement;
@property (nonatomic) bool shakeRingerBell;
@property (nonatomic) double shakeSensorExpansion;
@property (nonatomic) double shakeSensorOffset;
@property (nonatomic) bool suppressHidingInSnapshotsWhileEmpty;
@property (nonatomic) bool suppressHidingOnClonedDisplayWhileEmpty;
@property (nonatomic, retain) SBFFluidBehaviorSettings *transitionToProminentPillSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)acceptanceBounceLayout;
- (id)acceptanceBounceLayoutY;
- (id)acceptanceBounceRebound;
- (id)acceptanceBounceSideLayout;
- (id)acceptanceBounceSideLayoutY;
- (id)acceptanceBounceSideRebound;
- (id)acceptanceBounceSideStretch;
- (id)acceptanceBounceStretch;
- (double)acceptanceSideBounceItemAppearanceDelayOffset;
- (double)acceptanceSideBounceReboundDelay;
- (double)acceptanceSideBounceXSensorExpansion;
- (double)acceptanceSideBounceXSensorOffset;
- (double)acceptanceSideBounceXStretch;
- (double)acceptanceSideBounceXVelocityThreshold;
- (double)acceptanceSideBounceYPadding;
- (double)acceptanceUpBounceFixedOvershootScaling;
- (double)acceptanceUpBounceItemAppearanceDelayOffset;
- (double)acceptanceUpBounceReboundDelay;
- (double)acceptanceUpBounceXPadding;
- (double)acceptanceUpBounceYDownStretch;
- (double)acceptanceUpBounceYStretch;
- (bool)activityKeyLineColorEnabled;
- (id)adaptiveKeyLineColorMatrix;
- (double)adaptiveKeyLineThickness;
- (double)alphaTransitionDurationOnClonedDisplay;
- (bool)backgroundBlurEnabled;
- (double)boundsCollapsingPhaseChangeProgress;
- (double)boundsCollisionProgress;
- (double)boundsCompensatingPhaseChangeProgress;
- (id)bumpAnimationScaleDownSettings;
- (id)bumpAnimationScaleUpSettings;
- (double)bumpAnimationXScale;
- (double)bumpAnimationYScale;
- (id)compactInterfaceElementTransitionSettings;
- (double)containerHitRectHorizontalLimit;
- (double)containerHitRectHorizontalMargin;
- (double)containerHitRectHorizontalMarginLimit;
- (double)containerHitRectTopMarginDefault;
- (double)containerHitRectTopMarginWide;
- (id)contentInteractionBeginBehaviorSettings;
- (id)customInterfaceElementTransitionSettings;
- (id)defaultInterfaceElementTransitionSettings;
- (id)ejectionContractionSettings;
- (double)ejectionMaxCornerRadius;
- (double)ejectionStretchDuration;
- (id)ejectionStretchSettings;
- (double)ejectionXStretch;
- (double)ejectionYStretch;
- (id)elementContentTransitionSettings;
- (bool)elementShadowEnabled;
- (double)expansionToCompactBeginInflationProgress;
- (double)firstShakeMilestone;
- (bool)hideRemotePrototypingFallbackPill;
- (bool)highlightTransitions;
- (id)inertCollapsingInterfaceElementTransitionSettings;
- (id)inertCompensatingInterfaceElementTransitionSettings;
- (id)inertInterfaceElementTransitionSettings;
- (double)inflateAnimationContentScale;
- (double)inflateAnimationScale;
- (id)inflateAnimationScaleDownSettings;
- (id)inflateAnimationScaleUpSettings;
- (double)inflateVerticalOffsetProportion;
- (bool)isContainerHitRectVisible;
- (bool)isSensorShadowVisible;
- (id)jindoAuthErrorShakeInitialKick;
- (id)jindoAuthErrorShakeSettle;
- (id)jindoAuthErrorStretchOut;
- (id)jindoAuthErrorStretchSettle;
- (id)jindoBoundsOval;
- (double)keyLineAlpha;
- (id)keyLineAppearForSwoopTransition;
- (double)keyLineColorFixedLstar;
- (double)keyLineDarkToMixedMinLuma;
- (id)keyLineDisappearToInertTransition;
- (bool)keyLineEnabled;
- (double)keyLineMixedToDarkMaxLuma;
- (id)keyLineStyleTransition;
- (double)keyLineThickness;
- (id)minimalInterfaceElementTransitionSettings;
- (double)minimumRequiredSymmetryInCompactLayoutMode;
- (double)mitosisHeadstartDelay;
- (id)mitosisSecondaryBoundsSettings;
- (double)paddingFromScreenEdgeRequiringSymmetricLayout;
- (double)prominentPillContentScale;
- (double)prominentPillScale;
- (double)prominentPillVerticalOffsetProportion;
- (double)pulseDuration;
- (id)pulseExpandBehaviorSettings;
- (double)pulseScale;
- (double)recombineGestureTranslateFactorCompress;
- (double)recombineGestureTranslateFactorStretch;
- (double)recombineGestureXRubberbandingCompress;
- (double)recombineGestureXRubberbandingStretch;
- (double)recombineGestureXScaleFactorCompress;
- (double)recombineGestureXScaleFactorStretch;
- (double)resizeGestureMinEdgePadding;
- (double)resizeGestureSensorXSafetyMargin;
- (double)resizeGestureUpOffsetFactor;
- (double)resizeGestureXRubberbanding;
- (double)resizeGestureYRangeBeginTracking;
- (double)resizeGestureYRangeEndTracking;
- (double)resizeGestureYRubberbandingCompress;
- (double)resizeGestureYRubberbandingStretch;
- (double)secondShakeMilestone;
- (double)sensorObscuringShadowApexProgress;
- (double)sensorShadowOpacityFactor;
- (void)setAcceptanceBounceLayout:(id)arg1;
- (void)setAcceptanceBounceLayoutY:(id)arg1;
- (void)setAcceptanceBounceRebound:(id)arg1;
- (void)setAcceptanceBounceSideLayout:(id)arg1;
- (void)setAcceptanceBounceSideLayoutY:(id)arg1;
- (void)setAcceptanceBounceSideRebound:(id)arg1;
- (void)setAcceptanceBounceSideStretch:(id)arg1;
- (void)setAcceptanceBounceStretch:(id)arg1;
- (void)setAcceptanceSideBounceItemAppearanceDelayOffset:(double)arg1;
- (void)setAcceptanceSideBounceReboundDelay:(double)arg1;
- (void)setAcceptanceSideBounceXSensorExpansion:(double)arg1;
- (void)setAcceptanceSideBounceXSensorOffset:(double)arg1;
- (void)setAcceptanceSideBounceXStretch:(double)arg1;
- (void)setAcceptanceSideBounceXVelocityThreshold:(double)arg1;
- (void)setAcceptanceSideBounceYPadding:(double)arg1;
- (void)setAcceptanceUpBounceFixedOvershootScaling:(double)arg1;
- (void)setAcceptanceUpBounceItemAppearanceDelayOffset:(double)arg1;
- (void)setAcceptanceUpBounceReboundDelay:(double)arg1;
- (void)setAcceptanceUpBounceXPadding:(double)arg1;
- (void)setAcceptanceUpBounceYDownStretch:(double)arg1;
- (void)setAcceptanceUpBounceYStretch:(double)arg1;
- (void)setActivityKeyLineColorEnabled:(bool)arg1;
- (void)setAdaptiveKeyLineColorMatrix:(id)arg1;
- (void)setAdaptiveKeyLineThickness:(double)arg1;
- (void)setAlphaTransitionDurationOnClonedDisplay:(double)arg1;
- (void)setBackgroundBlurEnabled:(bool)arg1;
- (void)setBoundsCollapsingPhaseChangeProgress:(double)arg1;
- (void)setBoundsCollisionProgress:(double)arg1;
- (void)setBoundsCompensatingPhaseChangeProgress:(double)arg1;
- (void)setBumpAnimationScaleDownSettings:(id)arg1;
- (void)setBumpAnimationScaleUpSettings:(id)arg1;
- (void)setBumpAnimationXScale:(double)arg1;
- (void)setBumpAnimationYScale:(double)arg1;
- (void)setCompactInterfaceElementTransitionSettings:(id)arg1;
- (void)setContainerHitRectHorizontalLimit:(double)arg1;
- (void)setContainerHitRectHorizontalMargin:(double)arg1;
- (void)setContainerHitRectHorizontalMarginLimit:(double)arg1;
- (void)setContainerHitRectTopMarginDefault:(double)arg1;
- (void)setContainerHitRectTopMarginWide:(double)arg1;
- (void)setContainerHitRectVisible:(bool)arg1;
- (void)setContentInteractionBeginBehaviorSettings:(id)arg1;
- (void)setCustomInterfaceElementTransitionSettings:(id)arg1;
- (void)setDefaultInterfaceElementTransitionSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setEjectionContractionSettings:(id)arg1;
- (void)setEjectionMaxCornerRadius:(double)arg1;
- (void)setEjectionStretchDuration:(double)arg1;
- (void)setEjectionStretchSettings:(id)arg1;
- (void)setEjectionXStretch:(double)arg1;
- (void)setEjectionYStretch:(double)arg1;
- (void)setElementContentTransitionSettings:(id)arg1;
- (void)setElementShadowEnabled:(bool)arg1;
- (void)setExpansionToCompactBeginInflationProgress:(double)arg1;
- (void)setFirstShakeMilestone:(double)arg1;
- (void)setHideRemotePrototypingFallbackPill:(bool)arg1;
- (void)setHighlightTransitions:(bool)arg1;
- (void)setInertCollapsingInterfaceElementTransitionSettings:(id)arg1;
- (void)setInertCompensatingInterfaceElementTransitionSettings:(id)arg1;
- (void)setInertInterfaceElementTransitionSettings:(id)arg1;
- (void)setInflateAnimationContentScale:(double)arg1;
- (void)setInflateAnimationScale:(double)arg1;
- (void)setInflateAnimationScaleDownSettings:(id)arg1;
- (void)setInflateAnimationScaleUpSettings:(id)arg1;
- (void)setInflateVerticalOffsetProportion:(double)arg1;
- (void)setJindoAuthErrorShakeInitialKick:(id)arg1;
- (void)setJindoAuthErrorShakeSettle:(id)arg1;
- (void)setJindoAuthErrorStretchOut:(id)arg1;
- (void)setJindoAuthErrorStretchSettle:(id)arg1;
- (void)setJindoBoundsOval:(id)arg1;
- (void)setKeyLineAlpha:(double)arg1;
- (void)setKeyLineAppearForSwoopTransition:(id)arg1;
- (void)setKeyLineColorFixedLstar:(double)arg1;
- (void)setKeyLineDarkToMixedMinLuma:(double)arg1;
- (void)setKeyLineDisappearToInertTransition:(id)arg1;
- (void)setKeyLineEnabled:(bool)arg1;
- (void)setKeyLineMixedToDarkMaxLuma:(double)arg1;
- (void)setKeyLineStyleTransition:(id)arg1;
- (void)setKeyLineThickness:(double)arg1;
- (void)setMinimalInterfaceElementTransitionSettings:(id)arg1;
- (void)setMinimumRequiredSymmetryInCompactLayoutMode:(double)arg1;
- (void)setMitosisHeadstartDelay:(double)arg1;
- (void)setMitosisSecondaryBoundsSettings:(id)arg1;
- (void)setPaddingFromScreenEdgeRequiringSymmetricLayout:(double)arg1;
- (void)setProminentPillContentScale:(double)arg1;
- (void)setProminentPillScale:(double)arg1;
- (void)setProminentPillVerticalOffsetProportion:(double)arg1;
- (void)setPulseDuration:(double)arg1;
- (void)setPulseExpandBehaviorSettings:(id)arg1;
- (void)setPulseScale:(double)arg1;
- (void)setRecombineGestureTranslateFactorCompress:(double)arg1;
- (void)setRecombineGestureTranslateFactorStretch:(double)arg1;
- (void)setRecombineGestureXRubberbandingCompress:(double)arg1;
- (void)setRecombineGestureXRubberbandingStretch:(double)arg1;
- (void)setRecombineGestureXScaleFactorCompress:(double)arg1;
- (void)setRecombineGestureXScaleFactorStretch:(double)arg1;
- (void)setResizeGestureMinEdgePadding:(double)arg1;
- (void)setResizeGestureSensorXSafetyMargin:(double)arg1;
- (void)setResizeGestureUpOffsetFactor:(double)arg1;
- (void)setResizeGestureXRubberbanding:(double)arg1;
- (void)setResizeGestureYRangeBeginTracking:(double)arg1;
- (void)setResizeGestureYRangeEndTracking:(double)arg1;
- (void)setResizeGestureYRubberbandingCompress:(double)arg1;
- (void)setResizeGestureYRubberbandingStretch:(double)arg1;
- (void)setSecondShakeMilestone:(double)arg1;
- (void)setSensorObscuringShadowApexProgress:(double)arg1;
- (void)setSensorShadowOpacityFactor:(double)arg1;
- (void)setSensorShadowVisible:(bool)arg1;
- (void)setShakeDisplacement:(double)arg1;
- (void)setShakeRingerBell:(bool)arg1;
- (void)setShakeSensorExpansion:(double)arg1;
- (void)setShakeSensorOffset:(double)arg1;
- (void)setSuppressHidingInSnapshotsWhileEmpty:(bool)arg1;
- (void)setSuppressHidingOnClonedDisplayWhileEmpty:(bool)arg1;
- (void)setTransitionToProminentPillSettings:(id)arg1;
- (double)shakeDisplacement;
- (bool)shakeRingerBell;
- (double)shakeSensorExpansion;
- (double)shakeSensorOffset;
- (bool)suppressHidingInSnapshotsWhileEmpty;
- (bool)suppressHidingOnClonedDisplayWhileEmpty;
- (id)transitionToProminentPillSettings;

@end
