
@interface CPSEntityStylesDropShadow : NSObject {
    UIColor * _color;
    struct CGSize { 
        double width; 
        double height; 
    }  _offset;
    double  _opacity;
    double  _radius;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) struct CGSize { double x1; double x2; } offset;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;

- (void).cxx_destruct;
- (void)applyShadowToLayer:(id)arg1;
- (id)color;
- (struct CGSize { double x1; double x2; })offset;
- (double)opacity;
- (double)radius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectsForSource:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shadowRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 unionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 positionTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg4;
- (void)setColor:(id)arg1;
- (void)setOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setOpacity:(double)arg1;
- (void)setRadius:(double)arg1;

@end
