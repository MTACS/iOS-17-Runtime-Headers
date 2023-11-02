
@interface PGCABackdropLayerView : UIView {
    UIColor * _customBackgroundColor;
    NSHashTable * _dependents;
    PGCABackdropLayerView * _groupLeader;
}

@property (nonatomic, copy) UIColor *customBackgroundColor;
@property (nonatomic, readonly) NSHashTable *dependents;
@property (nonatomic) PGCABackdropLayerView *groupLeader;
@property (nonatomic, readonly) PGCABackdropLayer *layer;

+ (Class)layerClass;
+ (id)materialFilters;
+ (id)reducedTransparencyColor;

- (void).cxx_destruct;
- (void)_addDependent:(id)arg1;
- (void)_ensureDependents;
- (void)_enumerateDependents:(id /* block */)arg1;
- (bool)_hasAnyDependentsThatWantsCapturedBlur;
- (bool)_isCaptureOnly;
- (bool)_isTransparentOrHasTransparentAncestor;
- (id)_preferredBackgroundColor;
- (long long)_preferredEffect;
- (void)_removeDependent:(id)arg1;
- (bool)_wantsCapturedBlur;
- (id)customBackgroundColor;
- (void)dealloc;
- (id)dependents;
- (void)didMoveToWindow;
- (id)groupLeader;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 captureOnly:(bool)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)setGroupLeader:(id)arg1;
- (void)updateEffects;

@end
