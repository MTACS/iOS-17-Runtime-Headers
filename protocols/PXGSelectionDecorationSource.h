
@protocol PXGSelectionDecorationSource <PXGLayoutContentSource>

@required

- (long long)overallSelectionOrderAtSpriteIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (struct { float x1; float x2; float x3; float x4; })overlayInsetsForSpriteIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSIndexSet *)selectedSpriteIndexesInLayout:(PXGLayout *)arg1;
- (unsigned long long)selectionDecorationAdditionsInLayout:(PXGLayout *)arg1;
- (long long)selectionDecorationStyleInLayout:(PXGLayout *)arg1;

@end
