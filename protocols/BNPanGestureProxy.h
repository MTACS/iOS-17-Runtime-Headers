
@protocol BNPanGestureProxy <NSObject>

@required

- (id /* block */)actionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <BNPanGestureProxy> *, void*, id, SEL
- (bool)didCrossDefaultThreshold;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (void)setActionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BNPanGestureProxy> *, void*
- (long long)state;
- (struct CGPoint { double x1; double x2; })translationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (struct CGPoint { double x1; double x2; })velocityInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (struct CGPoint { double x1; double x2; })visualTranslationInCoordinateSpace:(id <UICoordinateSpace>)arg1;

@end
