
@interface AVStatusBarBackgroundGradientView : UIView {
    AVStatusBarBackgroundGradientViewSubview * _gradientView;
}

@property (nonatomic, retain) AVStatusBarBackgroundGradientViewSubview *gradientView;
@property (nonatomic, readonly) CABackdropLayer *layer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (double)alpha;
- (id)gradientView;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1;
- (void)setGradientView:(id)arg1;

@end
