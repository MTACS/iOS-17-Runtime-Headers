
@interface AVCABackdropLayerView : UIView {
    long long  _activeBackdropEffect;
    UIColor * _customBackgroundColor;
    NSHashTable * _dependents;
    bool  _forceLowQualityEffect;
    AVCABackdropLayerView * _groupLeader;
}

@property (nonatomic) long long activeBackdropEffect;
@property (getter=isCaptureOnly, nonatomic) bool captureOnly;
@property (nonatomic, copy) UIColor *customBackgroundColor;
@property (nonatomic, readonly) NSHashTable *dependents;
@property (nonatomic) bool forceLowQualityEffect;
@property (nonatomic) AVCABackdropLayerView *groupLeader;
@property (nonatomic, readonly) CABackdropLayer *layer;

+ (id)averageFilter;
+ (id)blurFilter;
+ (id)colorMatrixFilter;
+ (Class)layerClass;
+ (id)reducedTransparencyColor;

- (void).cxx_destruct;
- (void)_ensureDependents;
- (void)_enumerateDependents:(id /* block */)arg1;
- (void)_updateFilters;
- (long long)activeBackdropEffect;
- (void)addDependent:(id)arg1;
- (id)customBackgroundColor;
- (id)dependents;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (bool)forceLowQualityEffect;
- (id)groupLeader;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCaptureOnly;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)removeDependent:(id)arg1;
- (void)setActiveBackdropEffect:(long long)arg1;
- (void)setCaptureOnly:(bool)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setForceLowQualityEffect:(bool)arg1;
- (void)setGroupLeader:(id)arg1;
- (void)updateActiveBackdropEffectIfGroupLeader;
- (void)updateGroupLeader;

@end
