
@protocol PXStoryDisplayAssetCroppingContext

@required

- (NSArray *)cropContentRectsForMultipartPanoramaAsset:(id <PXDisplayAsset>)arg1 axis:(long long)arg2 cropContentsRectsApectRatio:(double)arg3;
- (void)requestIndividualFaceRectsInAsset:(void *)arg1 options:(void *)arg2 resultHandler:(void *)arg3; // needs 3 arg types, found 11: <PXDisplayAsset> *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*, long long, <PXStoryFaceFetchResult> *, void*

@end
