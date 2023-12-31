
@interface CMDiagramContinuousArrowMapper : CMDiagramShapeMapper

- (id)_suggestedBoundsForNodeAtIndex:(long long)arg1;
- (id)fill;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeForNode:(id)arg1;
- (id)stroke;

@end
