
@interface CMDiagramPyramidMapper : CMDiagramShapeMapper {
    bool  mIsFlipped;
}

- (id)_suggestedBoundsForNodeAtIndex:(unsigned long long)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)setIsFlipped:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;

@end
