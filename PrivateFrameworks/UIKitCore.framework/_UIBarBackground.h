
@interface _UIBarBackground : UIView {
    struct { 
        unsigned int needsTopInsetView : 1; 
        unsigned int needsEffectView1 : 1; 
        unsigned int needsColorAndImageView1 : 1; 
        unsigned int needsShadowView1 : 1; 
        unsigned int needsEffectView2 : 1; 
        unsigned int needsColorAndImageView2 : 1; 
        unsigned int needsShadowView2 : 1; 
    }  _backgroundFlags;
    double  _bg1LastLayoutHeight;
    double  _bg2LastLayoutHeight;
    UIImageView * _colorAndImageView1;
    UIImageView * _colorAndImageView2;
    UIView * _customBackgroundView;
    UIVisualEffectView * _effectView1;
    UIVisualEffectView * _effectView2;
    NSString * _groupName;
    _UIBarBackgroundLayout * _layout;
    _UIBarBackgroundShadowView * _shadowView1;
    _UIBarBackgroundShadowView * _shadowView2;
    bool  _topAligned;
    UIView * _topInsetView;
}

@property (nonatomic, retain) UIView *customBackgroundView;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, retain) _UIBarBackgroundLayout *layout;
@property (nonatomic) bool topAligned;

- (void).cxx_destruct;
- (id)_backgroundEffectView;
- (id)_encodableSubviews;
- (void)_orderSubviews;
- (void)_setupBackgroundValues;
- (void)_setupShadowView:(id)arg1 effect:(id)arg2 image:(id)arg3 shadowColor:(id)arg4 shadowTint:(id)arg5 alpha:(double)arg6;
- (id)_shadowView;
- (void)_updateBackgroundViewVisiblity;
- (void)cleanupBackgroundViews;
- (id)customBackgroundView;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForYOrigin:(double)arg1 height:(double)arg2;
- (id)groupName;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layout;
- (void)layoutSubviews;
- (void)prepareBackgroundViews;
- (void)setCustomBackgroundView:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setTopAligned:(bool)arg1;
- (void)set_backgroundEffectView:(id)arg1;
- (void)set_shadowView:(id)arg1;
- (bool)topAligned;
- (void)transition:(unsigned long long)arg1 toLayout:(id)arg2;
- (void)transitionBackgroundViews;
- (void)transitionBackgroundViewsAnimated:(bool)arg1;
- (void)updateBackground;

@end
