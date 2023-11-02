
@protocol BLSHFlipbook <BSInvalidatable>

@required

- (NSArray *)activeFrames;
- (<BLSHRenderedFlipbookFrame> *)cancelAllFrames;
- (<BLSHRenderedFlipbookFrame> *)captureFrameOnGlass;
- (void)collect;
- (<BLSHRenderedFlipbookFrame> *)frameOnGlass;
- (bool)isPowerSavingEnabled;
- (<BLSHRenderedFlipbookFrame> *)lastRenderedFrame;
- (unsigned long long)memoryUsage;
- (void)purge;
- (void)renderFrameForPresentation:(void *)arg1 dateSpecifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: BLSHBacklightEnvironmentPresentation *, BLSHPresentationDateSpecifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <BLSHRenderedFlipbookFrame> *, NSError *, void*
- (void)setPowerSavingEnabled:(bool)arg1;

@end
