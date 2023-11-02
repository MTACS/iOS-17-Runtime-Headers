
@protocol PXPresentedGridLayout <NSObject>

@required

- (long long)itemIndexForItem:(long long)arg1 inDirection:(unsigned long long)arg2;
- (long long)itemIndexForPresentedItemIndex:(long long)arg1;
- (struct { long long x1; long long x2; long long x3; long long x4; })presentedItemLocationForItemAtIndex:(long long)arg1;
- (NSIndexSet *)presentedItemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (NSIndexSet *)presentedItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)presentedNumberOfColumnsAtRow:(long long)arg1;
- (long long)presentedNumberOfRows;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentedRectForItemAtIndex:(long long)arg1;

@end
