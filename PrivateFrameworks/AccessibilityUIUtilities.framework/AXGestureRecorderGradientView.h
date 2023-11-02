
@interface AXGestureRecorderGradientView : UIView

@property (nonatomic, readonly) CAGradientLayer *gradientLayer;

+ (Class)layerClass;

- (void)_configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 locations:(id)arg3 animated:(bool)arg4 duration:(double)arg5 completion:(id /* block */)arg6;
- (id)_copyColorsArrayWithTopColor:(id)arg1 bottomColor:(id)arg2;
- (id)_copyLocationsArrayWithTopColorLocation:(float)arg1 bottomColorLocation:(float)arg2;
- (void)configureGradientAnimatedWithTopColor:(id)arg1 bottomColor:(id)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)configureGradientAnimatedWithTopColor:(id)arg1 bottomColor:(id)arg2 topColorLocation:(float)arg3 bottomColorLocation:(float)arg4 duration:(double)arg5 completion:(id /* block */)arg6;
- (void)configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2;
- (void)configureGradientWithTopColor:(id)arg1 bottomColor:(id)arg2 topColorLocation:(float)arg3 bottomColorLocation:(float)arg4;
- (id)gradientLayer;

@end
