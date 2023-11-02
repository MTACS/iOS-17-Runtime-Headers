
@interface _MKBezierPathView : UIView {
    UIColor * _fillColor;
    UIColor * _strokeColor;
}

+ (struct CGPath { }*)_createPathForBalloonRadius:(double)arg1 tailLength:(double)arg2;
+ (struct CGPath { }*)_createSmoothTransitionPathForBalloonRadius:(double)arg1 tailLength:(double)arg2;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2 smoothTailTransition:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithOvalInSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setFillColor:(id)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setPath:(struct CGPath { }*)arg1 duration:(double)arg2;
- (void)setStrokeColor:(id)arg1 width:(double)arg2;

@end
