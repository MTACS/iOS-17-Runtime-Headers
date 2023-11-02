
@interface PRRenderingView : UIView {
    bool  _alphaInverted;
    UIView * _invertedBackgroundCutoutView;
    long long  _level;
    <PRRenderingViewOwner> * _owner;
    double  _parallaxFactor;
    PRPosterWindow * _window;
}

@property (getter=isAlphaInverted, nonatomic) bool alphaInverted;
@property (nonatomic) long long level;
@property (nonatomic) double parallaxFactor;

- (void).cxx_destruct;
- (id)initWithOwner:(id)arg1 scene:(id)arg2 level:(long long)arg3 userInteractionEnabled:(bool)arg4;
- (void)invalidate;
- (bool)isAlphaInverted;
- (bool)isEmpty;
- (long long)level;
- (double)parallaxFactor;
- (void)setAlphaInverted:(bool)arg1;
- (void)setLevel:(long long)arg1;
- (void)setParallaxFactor:(double)arg1;

@end
