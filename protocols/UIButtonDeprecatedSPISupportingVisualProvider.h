
@protocol UIButtonDeprecatedSPISupportingVisualProvider <UIButtonVisualProvider>

@required

- (UIImage *)currentImageWithResolvedConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })highlightBounds;
- (void)setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;
- (void)setExternalFlatEdge:(unsigned long long)arg1;
- (void)setImageContentMode:(long long)arg1;

@end
