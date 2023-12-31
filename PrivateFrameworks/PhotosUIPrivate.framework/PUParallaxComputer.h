
@interface PUParallaxComputer : NSObject {
    unsigned long long  _axis;
    long long  _model;
    double  _parallaxFactor;
}

@property (nonatomic) unsigned long long axis;
@property (nonatomic) long long model;
@property (nonatomic) double parallaxFactor;

- (unsigned long long)axis;
- (struct CGPoint { double x1; double x2; })contentParallaxOffsetForViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)model;
- (double)parallaxFactor;
- (void)setAxis:(unsigned long long)arg1;
- (void)setModel:(long long)arg1;
- (void)setParallaxFactor:(double)arg1;

@end
