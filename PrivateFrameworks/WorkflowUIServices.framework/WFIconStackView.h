
@interface WFIconStackView : UIView {
    UIColor * _appIconAverageColor;
    UIView * _colorView;
    UIView * _colorViewContainer;
    WFIcon * _icon;
    UIImageView * _iconImageView;
    UIView * _iconImageViewContainer;
    bool  _inAperture;
    long long  _mode;
    struct CGSize { 
        double width; 
        double height; 
    }  _resolution;
}

@property (retain) UIColor *appIconAverageColor;
@property (nonatomic, retain) UIView *colorView;
@property (nonatomic, retain) UIView *colorViewContainer;
@property (nonatomic, retain) WFIcon *icon;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) UIView *iconImageViewContainer;
@property (nonatomic) bool inAperture;
@property (nonatomic) long long mode;
@property (nonatomic) struct CGSize { double x1; double x2; } resolution;

- (void).cxx_destruct;
- (id)appIconAverageColor;
- (id)colorView;
- (id)colorViewContainer;
- (void)dealloc;
- (id)icon;
- (id)iconImageView;
- (id)iconImageViewContainer;
- (bool)inAperture;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (id)initWithIcon:(id)arg1 resolution:(struct CGSize { double x1; double x2; })arg2;
- (void)layoutSubviews;
- (long long)mode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGSize { double x1; double x2; })resolution;
- (void)setAppIconAverageColor:(id)arg1;
- (void)setColorView:(id)arg1;
- (void)setColorViewContainer:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIcon:(id)arg1 animated:(bool)arg2;
- (void)setIconImage:(id)arg1 animated:(bool)arg2;
- (void)setIconImageView:(id)arg1;
- (void)setIconImageViewContainer:(id)arg1;
- (void)setInAperture:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setMode:(long long)arg1 animated:(bool)arg2;
- (void)setResolution:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldMaskIconImageView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)transitionToIconOnlyState;

@end
