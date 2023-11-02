
@interface PUWallpaperPosterParallaxView : UIView {
    PUWallpaperPosterMotionEffect * _motionEffect;
    id /* block */  _parallaxHandler;
}

@property (nonatomic, retain) PUWallpaperPosterMotionEffect *motionEffect;
@property (nonatomic, readonly, copy) id /* block */ parallaxHandler;

- (void).cxx_destruct;
- (bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 parallaxHandler:(id /* block */)arg2;
- (id)motionEffect;
- (id /* block */)parallaxHandler;
- (void)setMotionEffect:(id)arg1;
- (void)startParallax;
- (void)stopParallax;

@end
