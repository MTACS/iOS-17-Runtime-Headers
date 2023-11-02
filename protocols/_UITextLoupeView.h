
@protocol _UITextLoupeView <NSObject>

@required

- (struct CGPoint { double x1; double x2; })constrainedModelPositionForPosition:(struct CGPoint { double x1; double x2; })arg1;
- (<UICoordinateSpace> *)containerCoordinateSpace;
- (double)dismissalProgress;
- (struct CGPoint { double x1; double x2; })modelPosition;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)setDismissalProgress:(double)arg1;
- (void)setModelPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)visible;

@end
