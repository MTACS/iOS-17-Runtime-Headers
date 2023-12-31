
@protocol EQKitLayout <NSObject>

@required

- (double)depth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableBounds;
- (double)height;
- (bool)layoutWithContext:(id <EQKitLayoutContext>)arg1;
- (double)naturalAlignmentOffset;
- (void)renderIntoContext:(struct CGContext { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (double)vsize;
- (double)width;

@end
