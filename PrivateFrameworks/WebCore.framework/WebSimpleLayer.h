
@interface WebSimpleLayer : CALayer {
    bool  _isRenderingInContext;
}

@property (nonatomic, readonly) bool isRenderingInContext;

- (id)actionForKey:(id)arg1;
- (void)display;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)isRenderingInContext;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
