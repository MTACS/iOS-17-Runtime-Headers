
@interface VTUICheckMarkView : UIView {
    UIColor * _blueColor;
    UIView * _blueView;
    CALayer * _checkMaskLayer;
    VTUIColorLayer * _colorLayer;
    UIView * _greenView;
    float  _phase;
    UIColor * _redColor;
    UIView * _redView;
    CALayer * _xMaskLayer;
}

@property (nonatomic, retain) CALayer *checkMaskLayer;
@property (nonatomic, retain) VTUIColorLayer *colorLayer;
@property (nonatomic, retain) CALayer *xMaskLayer;

- (void).cxx_destruct;
- (void)animateForSuccess:(bool)arg1 completion:(id /* block */)arg2;
- (id)checkMaskLayer;
- (id)colorLayer;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setCheckMaskLayer:(id)arg1;
- (void)setColorLayer:(id)arg1;
- (void)setXMaskLayer:(id)arg1;
- (id)xMaskLayer;

@end
