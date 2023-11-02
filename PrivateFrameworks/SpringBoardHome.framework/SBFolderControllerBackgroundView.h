
@interface SBFolderControllerBackgroundView : SBFFocusIsolationView {
    MTMaterialView * _blurView;
    UIImageView * _blurViewSnapshot;
    unsigned long long  _currentEffect;
    UIView * _debugFreezingView;
    <SBFolderControllerBackgroundViewDelegate> * _delegate;
    unsigned long long  _effect;
    bool  _effectActive;
    bool  _expanding;
    bool  _frozen;
    bool  _reduceTransparencyEnabled;
    UIView * _tintView;
    bool  _transitionCancelled;
}

@property (nonatomic, readonly) unsigned long long concreteEffect;
@property (nonatomic) unsigned long long currentEffect;
@property (nonatomic) <SBFolderControllerBackgroundViewDelegate> *delegate;
@property (nonatomic) unsigned long long effect;
@property (getter=isEffectActive, nonatomic) bool effectActive;
@property (getter=isExpanding, nonatomic) bool expanding;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (getter=isReduceTransparencyEnabled, nonatomic) bool reduceTransparencyEnabled;
@property (getter=isTransitionCancelled, nonatomic) bool transitionCancelled;

+ (id)_tintColorForEffect:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_isCurrentlyExpanding;
- (void)_reduceTransparencyEnabledStateChanged;
- (void)_updateCurrentEffect;
- (unsigned long long)concreteEffect;
- (unsigned long long)currentEffect;
- (id)currentEffectMaterialRecipeNameForHighQualityBlur:(bool)arg1;
- (id)delegate;
- (unsigned long long)effect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEffectActive;
- (bool)isExpanding;
- (bool)isFrozen;
- (bool)isReduceTransparencyEnabled;
- (bool)isTransitionCancelled;
- (void)layoutSubviews;
- (double)minimumHomeScreenScale;
- (void)setCurrentEffect:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffect:(unsigned long long)arg1;
- (void)setEffectActive:(bool)arg1;
- (void)setExpanding:(bool)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setReduceTransparencyEnabled:(bool)arg1;
- (void)setTransitionCancelled:(bool)arg1;

@end
