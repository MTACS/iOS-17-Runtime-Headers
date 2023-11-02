
@interface MRUShadowView : UIView {
    UIColor * _color;
    id  _compositingFilter;
    struct CGSize { 
        double width; 
        double height; 
    }  _offset;
    float  _opacity;
    double  _radius;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) id compositingFilter;
@property (nonatomic) struct CGSize { double x1; double x2; } offset;
@property (nonatomic) float opacity;
@property (nonatomic) double radius;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)color;
- (id)compositingFilter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })offset;
- (float)opacity;
- (double)radius;
- (void)setColor:(id)arg1;
- (void)setCompositingFilter:(id)arg1;
- (void)setOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setOpacity:(float)arg1;
- (void)setRadius:(double)arg1;

@end
