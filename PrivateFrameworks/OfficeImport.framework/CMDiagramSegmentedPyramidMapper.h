
@interface CMDiagramSegmentedPyramidMapper : CMDiagramShapeMapper

- (id)_suggestedBoundsForPyramidLayerWithIndex:(unsigned long long)arg1 inLayer:(unsigned long long)arg2 andSlice:(unsigned long long)arg3;
- (unsigned long long)layerCount;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (unsigned long long)pointCount;
- (struct CGSize { double x1; double x2; })sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;

@end
