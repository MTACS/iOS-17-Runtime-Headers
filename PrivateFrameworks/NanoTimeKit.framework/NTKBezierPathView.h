
@interface NTKBezierPathView : UIView <CAAnimationDelegate> {
    UIBezierPath * _animateToPath;
    UIBezierPath * _path;
    UIColor * _pathColor;
    NTKPromise * _pointModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lineCap;
@property (nonatomic, retain) UIBezierPath *path;
@property (nonatomic, retain) UIColor *pathColor;
@property (nonatomic, readonly) NTKBezierPathPointModel *pointModel;
@property (readonly) Class superclass;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_shapeLayer;
- (void)animateToPath:(id)arg1 duration:(double)arg2 curve:(long long)arg3;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)lineCap;
- (id)path;
- (id)pathColor;
- (id)pointModel;
- (struct CGPoint { double x1; double x2; })pointOnPathForHorizontalPercentage:(double)arg1;
- (void)setLineCap:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPathColor:(id)arg1;

@end
