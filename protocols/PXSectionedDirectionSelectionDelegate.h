
@protocol PXSectionedDirectionSelectionDelegate <NSObject>

@required

- (long long)selectionBasisForSelectionManager:(PXSectionedSelectionManager *)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })selectionManager:(PXSectionedSelectionManager *)arg1 indexPathClosestToIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 inDirection:(unsigned long long)arg3;
- (PXIndexPathSet *)selectionManager:(PXSectionedSelectionManager *)arg1 indexPathsBetweenIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 andIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3 inDirection:(unsigned long long)arg4;

@end
