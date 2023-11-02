
@interface FMFindingUI.FMPFSKPatternNode : SKNode {
    void allFragmentsAreOrbiting;
    void bearing;
    void canvasDebugNode;
    void canvasDiskBezierNode;
    void canvasInsideBorderBezierNode;
    void canvasPatternSpinesNode;
    void centerFactor;
    void centerFactorSpring;
    void config;
    void conformationFactor;
    void conformationFactorSpring;
    void conformedToExplodedFactor;
    void conformedToExplodedFactorSpring;
    void delegate;
    void derivativeCenterFactor;
    void energeticAngleSpring;
    void experienceType;
    void explodedDiskRadius;
    void extraDiskRadiusWhenSnapping;
    void forceHideNoonNode;
    void gimbalNode;
    void inFOV;
    void labelsNode;
    void labelsOpacity;
    void labelsOpacitySpring;
    void lethargicAngleSpring;
    void lookout;
    void lookoutSpring;
    void needsRecomputeVisibleFragments;
    void noonDotColor;
    void noonNode;
    void noonNodeSnappedUnderPointeeNode;
    void patternFragmentNodes;
    void patternFragmentsNode;
    void peripheralDiskRadius;
    void pixelsPerInch;
    void pointeeDotColor;
    void pointeeNode;
    void presentedCenterFactor;
    void presentedConformationFactor;
    void presentedConformedToExplodedFactor;
    void presentedEnergeticBearing;
    void presentedLabelsOpacity;
    void presentedLethargicBearing;
    void presentedLookout;
    void ringView;
    void sceneSize;
    void shouldApplyBearing;
    void shouldApplyCenterFactor;
    void shouldApplyConformationFactor;
    void shouldApplyConformedToExplodedFactor;
    void shouldLabelsOpacity;
    void shouldLookout;
    void style;
    void track;
    void trackBottom;
    void trackDidChange;
    void trackSpring;
    void trackTop;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
