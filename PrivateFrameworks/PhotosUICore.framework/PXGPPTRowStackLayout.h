
@interface PXGPPTRowStackLayout : PXGStackLayout <PXGSublayoutProvider> {
    long long  _numberOfItemsPerRow;
    double  _rowHeight;
}

- (id)initWithSettings:(id)arg1;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layout:(id)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;

@end
