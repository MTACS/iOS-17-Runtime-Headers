
@protocol _UISelectionBandVisualProviding <NSObject>

@required

- (void)beginAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)enabled;
- (void)endAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEnabled:(bool)arg1;
- (void)setView:(UIView *)arg1;
- (void)updateWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (UIView *)view;

@end
