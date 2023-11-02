
@interface PXGPPTRowLayout : PXGStackLayout <PXGSublayoutProvider> {
    double  _hue;
    long long  _numberOfItems;
}

@property (nonatomic, readonly) double hue;
@property (nonatomic, readonly) long long numberOfItems;

- (double)hue;
- (id)init;
- (id)initWithNumberOfItems:(long long)arg1 hue:(double)arg2;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize { double x1; double x2; })arg3;
- (id)layout:(id)arg1 navigationObjectReferenceForSublayoutAtIndex:(long long)arg2;
- (long long)numberOfItems;

@end
