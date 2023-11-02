
@interface _UIActivityIndicatorViewStyleView : UIView <_UIVisualStyleProviding> {
    long long  _activityIndicatorViewStyle;
    bool  _animating;
    UIColor * _color;
    bool  _hidesWhenStopped;
    <UIActivityIndicatorProvider> * _provider;
}

@property (nonatomic) long long activityIndicatorViewStyle;
@property (nonatomic) bool animating;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) bool hidesWhenStopped;
@property (nonatomic, readonly) <UIActivityIndicatorProvider> *provider;

- (void).cxx_destruct;
- (long long)activityIndicatorViewStyle;
- (bool)animating;
- (id)color;
- (bool)hidesWhenStopped;
- (id)initWithProvider:(id)arg1;
- (id)provider;
- (void)setActivityIndicatorViewStyle:(long long)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setHidesWhenStopped:(bool)arg1;
- (void)setUpAnimation;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tearDownAnimation;

@end
