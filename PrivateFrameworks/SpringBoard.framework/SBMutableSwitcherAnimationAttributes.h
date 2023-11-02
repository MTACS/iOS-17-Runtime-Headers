
@interface SBMutableSwitcherAnimationAttributes : SBSwitcherAnimationAttributes

@property (nonatomic, retain) SBFFluidBehaviorSettings *clippingSettings;
@property (nonatomic) long long clippingUpdateMode;
@property (nonatomic, retain) SBFFluidBehaviorSettings *cornerRadiusSettings;
@property (nonatomic) long long cornerRadiusUpdateMode;
@property (nonatomic, retain) SBFFluidBehaviorSettings *layoutSettings;
@property (nonatomic) long long layoutUpdateMode;
@property (nonatomic, retain) SBFFluidBehaviorSettings *meshSettings;
@property (nonatomic) long long meshUpdateMode;
@property (nonatomic, retain) SBFFluidBehaviorSettings *opacitySettings;
@property (nonatomic) long long opacityUpdateMode;
@property (nonatomic, retain) SBFFluidBehaviorSettings *positionSettings;
@property (nonatomic) long long positionUpdateMode;
@property (nonatomic, retain) SBFFluidBehaviorSettings *scaleSettings;
@property (nonatomic) long long scaleUpdateMode;
@property (nonatomic) long long titleAndIconOpacityUpdateMode;
@property (nonatomic) long long updateMode;

@end
