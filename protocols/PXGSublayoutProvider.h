
@protocol PXGSublayoutProvider

@required

- (PXGLayout *)layout:(PXGLayout *)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })layout:(PXGLayout *)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layout:(PXGLayout *)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;

@end
