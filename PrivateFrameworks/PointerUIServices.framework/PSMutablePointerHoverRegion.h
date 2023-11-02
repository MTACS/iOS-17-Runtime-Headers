
@interface PSMutablePointerHoverRegion : PSPointerHoverRegion <NSCopying, NSMutableCopying, NSSecureCoding>

@property (nonatomic, copy) NSArray *accessories;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic) double contentHoverInverseScale;
@property (nonatomic, copy) PSMatchMoveSource *contentMatchMoveSource;
@property (nonatomic, copy) NSValue *contentSlipValue;
@property (nonatomic) unsigned int coordinateSpaceSourceContextID;
@property (nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } hitTestBounds;
@property (nonatomic) long long overlayEffectStyle;
@property (getter=isOverlayEffectVisible, nonatomic) bool overlayEffectVisible;
@property (nonatomic) unsigned long long pointerLatchingAxes;
@property (nonatomic, copy) PSPointerPortalSourceCollection *pointerPortalSourceCollection;
@property (nonatomic) unsigned long long pointerRecenteringAxes;
@property (nonatomic, copy) PSPointerShape *pointerShape;
@property (nonatomic, copy) NSValue *pointerSlipValue;
@property (nonatomic) double pointerVisualIntensity;
@property (nonatomic) unsigned long long preferredPointerMaterialLuminance;
@property (nonatomic) bool shouldPointerSuppressMirroring;
@property (nonatomic) bool shouldPointerUnderlayContent;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccessories:(id)arg1;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentHoverInverseScale:(double)arg1;
- (void)setContentMatchMoveSource:(id)arg1;
- (void)setContentSlipValue:(id)arg1;
- (void)setCoordinateSpaceSourceContextID:(unsigned int)arg1;
- (void)setCoordinateSpaceSourceLayerRenderID:(unsigned long long)arg1;
- (void)setHitTestBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOverlayEffectStyle:(long long)arg1;
- (void)setOverlayEffectVisible:(bool)arg1;
- (void)setPointerLatchingAxes:(unsigned long long)arg1;
- (void)setPointerPortalSourceCollection:(id)arg1;
- (void)setPointerRecenteringAxes:(unsigned long long)arg1;
- (void)setPointerShape:(id)arg1;
- (void)setPointerSlipValue:(id)arg1;
- (void)setPointerVisualIntensity:(double)arg1;
- (void)setPreferredPointerMaterialLuminance:(unsigned long long)arg1;
- (void)setShouldPointerSuppressMirroring:(bool)arg1;
- (void)setShouldPointerUnderlayContent:(bool)arg1;

@end
