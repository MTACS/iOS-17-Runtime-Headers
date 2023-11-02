
@interface FMFindingUI.FMPFSKPeripheralDotNode : FMFindingUI.FMPFSKNode {
    void angle;
    void angleSpring;
    void brightness;
    void brightnessSpring;
    void btRangingNode;
    void diskNode;
    void diskRadius;
    void diskRadiusSpring;
    void dotCGPathNode;
    void dotDiameter;
    void dotNode;
    void dotScale;
    void dotScaleSpring;
    void experienceType;
    void gimbalNode;
    void hasPlayedInitialPulse;
    void headingSpring;
    void interactiveAngleFactor;
    void interativeRadiusBeaconNode;
    void isPlayingInitialPulse;
    void offset;
    void opacity;
    void opacitySpring;
    void perimeterRotateOnceAction;
    void pixelsPerInch;
    void presentedAbsoluteHeading;
    void presentedAngle;
    void presentedBrightness;
    void presentedDiskRadius;
    void presentedDotScale;
    void presentedOffset;
    void presentedOpacity;
    void presentedRadiusFactor;
    void radiusFactor;
    void radiusFactorSpring;
    void renderingColor;
    void shouldApplyAngle;
    void shouldApplyBrightness;
    void shouldApplyDiskRadius;
    void shouldApplyDotScale;
    void shouldApplyOffset;
    void shouldApplyOpacity;
    void shouldApplyRadiusFactor;
    void style;
    void subScale;
    void xOffsetSpring;
    void yOffsetSpring;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
