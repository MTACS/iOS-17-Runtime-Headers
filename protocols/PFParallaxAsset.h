
@protocol PFParallaxAsset <PFParallaxAssetRegions, PFParallaxSegmentationResourceCaching>

@required

- (void)cancelMotionScoreRequest:(int)arg1;
- (void)cancelParallaxResourceRequest:(int)arg1;
- (void)cancelPetsRegionsRequest:(int)arg1;
- (int)loadMotionScore:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, NSError *, void*
- (int)loadParallaxResource:(void *)arg1 options:(void *)arg2 resultHandler:(void *)arg3; // needs 3 arg types, found 9: long long, PFParallaxAssetResourceOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PFParallaxAssetResource *, NSError *, void*
- (int)loadPetsRegions:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*
- (NSString *)localIdentifier;

@end
