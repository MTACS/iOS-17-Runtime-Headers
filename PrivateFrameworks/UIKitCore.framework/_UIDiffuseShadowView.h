
@interface _UIDiffuseShadowView : UIView {
    double  _intensity;
    UIBezierPath * _path;
}

@property (nonatomic) double intensity;
@property (nonatomic) struct CGSize { double x1; double x2; } offset;
@property (nonatomic, copy) UIBezierPath *path;
@property (nonatomic) double radius;

- (void).cxx_destruct;
- (void)_updateForCurrentTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)intensity;
- (struct CGSize { double x1; double x2; })offset;
- (id)path;
- (double)radius;
- (void)setIntensity:(double)arg1;
- (void)setOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setPath:(id)arg1;
- (void)setRadius:(double)arg1;

@end
