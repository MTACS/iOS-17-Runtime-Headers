
@interface SBFolderBackgroundView : UIView {
    MTMaterialView * _blurView;
    double  _continuousCornerRadius;
    unsigned long long  _currentEffect;
    <SBFolderBackgroundViewDelegate> * _delegate;
    unsigned long long  _effect;
    UIView * _tintView;
}

@property (nonatomic, readonly) unsigned long long concreteEffect;
@property (nonatomic) unsigned long long currentEffect;
@property (nonatomic) <SBFolderBackgroundViewDelegate> *delegate;
@property (nonatomic) unsigned long long effect;

+ (double)cornerRadiusToInsetContent;
+ (struct CGSize { double x1; double x2; })folderBackgroundSize;
+ (void)warmupIfNecessary;

- (void).cxx_destruct;
- (bool)_hasLowQualityBackground;
- (void)_reduceTransparencyChanged;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)_tintViewBackgroundColorAtFullAlpha;
- (void)_updateCurrentEffect;
- (unsigned long long)concreteEffect;
- (unsigned long long)currentEffect;
- (id)delegate;
- (unsigned long long)effect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setCurrentEffect:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffect:(unsigned long long)arg1;
- (void)updateTintEffectColor;

@end
