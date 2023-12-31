
@interface CMDiagramListMapper : CMDiagramShapeMapper {
    float  mMaxLineCount;
}

- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)mapListItemAt:(id)arg1 index:(unsigned long long)arg2 withState:(id)arg3;
- (void)setDefaultFonSize;
- (float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 level:(int)arg3;
- (struct CGSize { double x1; double x2; })sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)suggestedBoundsForHListItemWithIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })textSize;

@end
