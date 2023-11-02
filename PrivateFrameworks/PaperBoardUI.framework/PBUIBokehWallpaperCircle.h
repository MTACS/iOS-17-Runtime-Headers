
@interface PBUIBokehWallpaperCircle : CALayer <CAAnimationDelegate> {
    long long  _color;
    double  _dxdt;
    double  _dydt;
    double  _speed;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _superviewBounds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } superviewBounds;

+ (id)_newFadeAnimation;
+ (id)_newFlickerAnimation;
+ (id)_newScaleAnimation;

- (void)_pauseAnimations;
- (void)_resumeAnimations;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)configureAnimationsWithPhase:(double)arg1;
- (id)initWithSuperviewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(long long)arg2;
- (void)randomize;
- (void)setAnimationsEnabled:(bool)arg1;
- (void)setColor:(long long)arg1;
- (void)setSuperviewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })superviewBounds;
- (void)updatePositionWithTime:(double)arg1 dx:(double)arg2 dy:(double)arg3 lockScreen:(bool)arg4;

@end
