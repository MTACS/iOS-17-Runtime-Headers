
@interface PXStoryBaseDisplayAssetCroppingContext : NSObject <PXStoryDisplayAssetCroppingContext> {
    PHFetchOptions * _fetchOptions;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, readonly) PHFetchOptions *fetchOptions;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)adjustOrderedFaces:(id)arg1 featuredFaceCount:(long long*)arg2;
- (id)cropContentRectsForMultipartPanoramaAsset:(id)arg1 axis:(long long)arg2 cropContentsRectsApectRatio:(double)arg3;
- (id)fetchOptions;
- (id)init;
- (id)log;
- (id)orderedFacesForAsset:(id)arg1 featuredFaceCount:(long long*)arg2;
- (void)requestIndividualFaceRectsInAsset:(id)arg1 options:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;

@end
