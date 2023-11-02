
@interface ARUIRingGroupController : ARUIAnimatableObject {
    double  _additionalSpacingAtIndex;
    double  _backingOrigin;
    ARUIRingGroup * _ringGroup;
    float  _ringIconSize;
}

@property (nonatomic) double additionalSpacingAtIndex;
@property (nonatomic) double backingOrigin;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic) float emptyOpacity;
@property (nonatomic, readonly) long long numberOfRings;
@property (nonatomic) float opacity;
@property (nonatomic) float ringDiameter;
@property (nonatomic, readonly) ARUIRingGroup *ringGroup;
@property (nonatomic) float ringIconSize;
@property (nonatomic) float ringInterspacing;
@property (nonatomic) float ringScale;
@property (nonatomic) float ringThickness;
@property (nonatomic, retain) ARUISpriteSheet *spriteSheet;
@property (nonatomic) float trackOpacity;
@property (nonatomic) float zRotation;

+ (id)animationTimingFunction;
+ (double)defaultAnimationDuration;
+ (id)ringGroupControllerConfiguredForCompanionWithRingType:(long long)arg1 withIcon:(bool)arg2;
+ (id)ringGroupControllerConfiguredForWatchWithRingType:(long long)arg1 withIcon:(bool)arg2;

- (void).cxx_destruct;
- (void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned long long)arg2;
- (void)addCelebration:(id)arg1 toRingAtIndex:(long long)arg2;
- (void)addOpacityAnimation:(id)arg1 forRingAtIndex:(long long)arg2;
- (double)additionalSpacingAtIndex;
- (double)backingOrigin;
- (struct CGPoint { double x1; double x2; })center;
- (float)diameterForRingAtIndex:(unsigned long long)arg1;
- (float)emptyOpacity;
- (id)init;
- (id)initWithNumberOfRings:(long long)arg1;
- (id)initWithRingGroup:(id)arg1;
- (long long)numberOfRings;
- (float)opacity;
- (void)removeCelebration:(id)arg1 fromRingAtIndex:(long long)arg2;
- (float)ringDiameter;
- (id)ringGroup;
- (float)ringIconSize;
- (float)ringInterspacing;
- (float)ringScale;
- (float)ringThickness;
- (void)setActiveEnergyPercentage:(double)arg1 animated:(bool)arg2;
- (void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
- (void)setAdditionalSpacingAtIndex:(double)arg1;
- (void)setBackingOrigin:(double)arg1;
- (void)setBriskPercentage:(double)arg1 animated:(bool)arg2;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDotPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setEmptyOpacity:(float)arg1;
- (void)setIconDotTextureOrigin:(struct CGPoint { double x1; double x2; })arg1 ofRingAtIndex:(long long)arg2;
- (void)setIconFirstFrameOrigin:(struct CGPoint { double x1; double x2; })arg1 frameSize:(struct CGSize { double x1; double x2; })arg2 frameCount:(long long)arg3 columns:(long long)arg4 ofRingAtIndex:(long long)arg5;
- (void)setMovingHoursPercentage:(double)arg1 animated:(bool)arg2;
- (void)setOpacity:(float)arg1;
- (void)setOpacity:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)setPercentage:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3 duration:(double)arg4 timingFunction:(id)arg5 completion:(id /* block */)arg6;
- (void)setRingDiameter:(float)arg1;
- (void)setRingDiameter:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setRingIconPosition:(struct CGPoint { double x1; double x2; })arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setRingIconSize:(float)arg1;
- (void)setRingIconSize:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setRingInterspacing:(float)arg1;
- (void)setRingInterspacing:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setRingScale:(float)arg1;
- (void)setRingThickness:(float)arg1;
- (void)setRingThickness:(double)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setSpriteSheet:(id)arg1;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2 contrastColor:(id)arg3 ofRingAtIndex:(long long)arg4;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2 ofRingAtIndex:(long long)arg3;
- (void)setTrackOpacity:(float)arg1;
- (void)setZRotation:(float)arg1;
- (id)spriteSheet;
- (float)trackOpacity;
- (float)zRotation;

@end
