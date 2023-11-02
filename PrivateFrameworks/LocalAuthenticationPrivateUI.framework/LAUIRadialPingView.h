
@interface LAUIRadialPingView : UIView {
    bool  _animating;
    unsigned char  _animating_counter;
    bool  _animating_dirty;
    struct array<(anonymous namespace)::blur_container, 2UL>="__elems_"[2{blur_container="view"@"UIImageView""pulse"{periodic_animation_state="enabled"B"_key"@"NSString""_layer"@"CALayer""_removal_timer"@"NSObject<OS_dispatch_source>" {}  _blurs;
    UIColor * _color;
    UIView * _container;
    UIView * _primary;
    struct periodic_animation_state { 
        bool enabled; 
        NSString *_key; 
        CALayer *_layer; 
        NSObject<OS_dispatch_source> *_removal_timer; 
    }  _pulse;
}

@property (getter=isAnimating, nonatomic) bool animating;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_attachExpandAnimationToContainer:(struct blur_container { id x1; struct periodic_animation_state { bool x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; } x2; }*)arg1 withDelay:(double)arg2;
- (void)_attachPulseAnimationWithDelay:(double)arg1;
- (void)_endExpand;
- (void)_setExpand:(bool)arg1 forBlurAtIndex:(unsigned long long)arg2 withDelay:(double)arg3;
- (void)_setPulse:(bool)arg1 withDelay:(double)arg2;
- (void)_startExpandWithDelay:(double)arg1;
- (void)_updateAnimatingAnimated:(bool)arg1;
- (void)_updateExpandForBlurAtIndex:(unsigned long long)arg1 withDelay:(double)arg2;
- (void)_updateViewsWithColor;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimating;
- (void)layoutSubviews;
- (void)setAnimating:(bool)arg1;
- (void)tintColorDidChange;

@end
