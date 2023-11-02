
@interface HKDotAnnotationView : MKAnnotationView {
    UIColor * _dotColor;
}

@property (nonatomic, retain) UIColor *dotColor;

- (void).cxx_destruct;
- (id)dotColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)setDotColor:(id)arg1;

@end
