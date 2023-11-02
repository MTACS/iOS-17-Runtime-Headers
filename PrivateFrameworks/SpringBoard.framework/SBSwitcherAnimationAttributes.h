
@interface SBSwitcherAnimationAttributes : NSObject <NSCopying, NSMutableCopying> {
    SBFFluidBehaviorSettings * _clippingSettings;
    long long  _clippingUpdateMode;
    SBFFluidBehaviorSettings * _cornerRadiusSettings;
    long long  _cornerRadiusUpdateMode;
    SBFFluidBehaviorSettings * _layoutSettings;
    long long  _layoutUpdateMode;
    SBFFluidBehaviorSettings * _meshSettings;
    long long  _meshUpdateMode;
    SBFFluidBehaviorSettings * _opacitySettings;
    long long  _opacityUpdateMode;
    SBFFluidBehaviorSettings * _positionSettings;
    long long  _positionUpdateMode;
    SBFFluidBehaviorSettings * _scaleSettings;
    long long  _scaleUpdateMode;
    long long  _titleAndIconOpacityUpdateMode;
    long long  _updateMode;
}

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

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id)clippingSettings;
- (long long)clippingUpdateMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornerRadiusSettings;
- (long long)cornerRadiusUpdateMode;
- (id)layoutSettings;
- (long long)layoutUpdateMode;
- (id)meshSettings;
- (long long)meshUpdateMode;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)opacitySettings;
- (long long)opacityUpdateMode;
- (id)positionSettings;
- (long long)positionUpdateMode;
- (id)scaleSettings;
- (long long)scaleUpdateMode;
- (void)setClippingSettings:(id)arg1;
- (void)setClippingUpdateMode:(long long)arg1;
- (void)setCornerRadiusSettings:(id)arg1;
- (void)setCornerRadiusUpdateMode:(long long)arg1;
- (void)setLayoutSettings:(id)arg1;
- (void)setLayoutUpdateMode:(long long)arg1;
- (void)setMeshSettings:(id)arg1;
- (void)setMeshUpdateMode:(long long)arg1;
- (void)setOpacitySettings:(id)arg1;
- (void)setOpacityUpdateMode:(long long)arg1;
- (void)setPositionSettings:(id)arg1;
- (void)setPositionUpdateMode:(long long)arg1;
- (void)setScaleSettings:(id)arg1;
- (void)setScaleUpdateMode:(long long)arg1;
- (void)setTitleAndIconOpacityUpdateMode:(long long)arg1;
- (void)setUpdateMode:(long long)arg1;
- (long long)titleAndIconOpacityUpdateMode;
- (long long)updateMode;

@end
