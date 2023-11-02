
@interface PUHeadroomGradientView : UIView <PXSettingsKeyPathObserver> {
    PUHeadroomVariableBlurView * _blurView;
    CAGradientLayer * _bottomGradientLayer;
    bool  _isInactive;
    UIColor * _primaryGradientColor;
    CAGradientLayer * _topGradientLayer;
    bool  _usesHighKeyStyle;
    double  _visibilityAmount;
}

@property (nonatomic, readonly) PUHeadroomVariableBlurView *blurView;
@property (nonatomic, readonly) CAGradientLayer *bottomGradientLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInactive;
@property (nonatomic, retain) UIColor *primaryGradientColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CAGradientLayer *topGradientLayer;
@property (nonatomic) bool usesHighKeyStyle;
@property (nonatomic) double visibilityAmount;

- (void).cxx_destruct;
- (void)_updateBlurEffect;
- (void)_updateGradientProperties;
- (id)blurView;
- (id)bottomGradientLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isInactive;
- (void)layoutSubviews;
- (id)primaryGradientColor;
- (void)setIsInactive:(bool)arg1;
- (void)setPrimaryGradientColor:(id)arg1;
- (void)setUsesHighKeyStyle:(bool)arg1;
- (void)setVisibilityAmount:(double)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)topGradientLayer;
- (bool)usesHighKeyStyle;
- (double)visibilityAmount;

@end
