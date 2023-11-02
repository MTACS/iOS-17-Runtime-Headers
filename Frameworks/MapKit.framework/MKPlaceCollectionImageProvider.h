
@interface MKPlaceCollectionImageProvider : NSObject <NSCacheDelegate> {
    NSMutableDictionary * _downloadOperationsPair;
    NSCache * _downloadedImagesCache;
    NSCache * _gradientImagesCache;
    NSMutableDictionary * _gradientOperationsPair;
    geo_isolater * _helperQueue;
    bool  _isRTL;
    GEOMapItemPhotoOptions * _optionsForCityBricks;
    GEOMapItemPhotoOptions * _optionsForCollectionCells;
    double  _screenScale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *downloadOperationsPair;
@property (nonatomic, retain) NSCache *downloadedImagesCache;
@property (nonatomic, retain) NSCache *gradientImagesCache;
@property (nonatomic, retain) NSMutableDictionary *gradientOperationsPair;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) geo_isolater *helperQueue;
@property (nonatomic) bool isRTL;
@property (nonatomic, readonly) GEOMapItemPhotoOptions *optionsForCityBricks;
@property (nonatomic, readonly) GEOMapItemPhotoOptions *optionsForCollectionCells;
@property (nonatomic) double screenScale;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)cancelAllOperationsForCompactImageSource:(long long)arg1;
- (void)cancelAllOperationsForImageSource:(long long)arg1;
- (void)checkQueuesForCollectionSource:(long long)arg1;
- (void)checkQueuesForCompactCollectionSource:(long long)arg1;
- (struct CGSize { double x1; double x2; })desiredSizeFromFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (id)downloadOperationsPair;
- (id)downloadedImagesCache;
- (id)gradientImagesCache;
- (id)gradientOperationsPair;
- (id)helperQueue;
- (id)init;
- (bool)isJoeColorManuallyCuratedForCuratedCollection:(id)arg1;
- (bool)isRTL;
- (id)joeColorForCompactCollection:(id)arg1 usingCarouselContext:(long long)arg2;
- (id)joeColorForCuratedCollection:(id)arg1;
- (void)loadCoverImageWithGuideLocation:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 usingImageSource:(long long)arg3 completion:(id /* block */)arg4;
- (void)loadGradientCoverImageWithCuratedCollection:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 contentSizeCategory:(id)arg3 usingImageSource:(long long)arg4 completion:(id /* block */)arg5;
- (id)optionsForCityBricks;
- (id)optionsForCollectionCells;
- (id)photoInfoWithPhoto:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2;
- (id)photoInfoWithPhoto:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 usingOptions:(id)arg3;
- (long long)photoTypeForImageSource:(long long)arg1;
- (bool)requiresGradientOperationForSource:(long long)arg1;
- (double)screenScale;
- (void)setDownloadOperationsPair:(id)arg1;
- (void)setDownloadedImagesCache:(id)arg1;
- (void)setGradientImagesCache:(id)arg1;
- (void)setGradientOperationsPair:(id)arg1;
- (void)setHelperQueue:(id)arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setScreenScale:(double)arg1;

@end
