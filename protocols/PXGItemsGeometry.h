
@protocol PXGItemsGeometry

@required

- (long long)itemClosestToItem:(long long)arg1 inDirection:(unsigned long long)arg2;
- (NSIndexSet *)itemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (NSIndexSet *)itemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inLayout:(PXGLayout *)arg2;

@end
