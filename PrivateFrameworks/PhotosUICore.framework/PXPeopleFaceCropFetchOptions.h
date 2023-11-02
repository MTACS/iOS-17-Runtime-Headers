
@interface PXPeopleFaceCropFetchOptions : NSObject {
    PHAsset * _asset;
    struct CGSize { 
        double width; 
        double height; 
    }  _clientTargetSize;
    long long  _cornerStyle;
    long long  _cropFactor;
    long long  _deliveryMode;
    double  _displayScale;
    PHFace * _face;
    bool  _isSynchronous;
    PHPerson * _person;
    bool  _shouldCacheResult;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetPixelSize;
    bool  _useLowMemoryMode;
    bool  _wantsFlippedContentsRect;
    bool  _wantsSmallFaceRect;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } clientTargetSize;
@property (nonatomic) long long cornerStyle;
@property (nonatomic) long long cropFactor;
@property (nonatomic) long long deliveryMode;
@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) PHFace *face;
@property (nonatomic) bool isSynchronous;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) bool shouldCacheResult;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetPixelSize;
@property (nonatomic) bool useLowMemoryMode;
@property (nonatomic) bool wantsFlippedContentsRect;
@property (nonatomic) bool wantsSmallFaceRect;

+ (id)_cornerStyleStringForCornerStyle:(long long)arg1;
+ (id)_cropFactorStringForCropFactor:(long long)arg1;
+ (id)_deliveryModeStringForDeliveryMode:(long long)arg1;
+ (long long)recommendedCornerStyleForCurrentAppConfiguration;

- (void).cxx_destruct;
- (void)_commonInitWithPerson:(id)arg1 face:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 displayScale:(double)arg4;
- (bool)areFetchParametersEqualtoFetchParametersOfOptions:(id)arg1;
- (id)asset;
- (id)cacheKey;
- (struct CGSize { double x1; double x2; })clientTargetSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cornerStyle;
- (long long)cropFactor;
- (long long)deliveryMode;
- (id)description;
- (double)displayScale;
- (id)face;
- (id)initWithFace:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3;
- (id)initWithPerson:(id)arg1 face:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 displayScale:(double)arg4;
- (id)initWithPerson:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3;
- (bool)isSynchronous;
- (id)person;
- (id)photoLibrary;
- (void)setAsset:(id)arg1;
- (void)setCornerStyle:(long long)arg1;
- (void)setCropFactor:(long long)arg1;
- (void)setDeliveryMode:(long long)arg1;
- (void)setIsSynchronous:(bool)arg1;
- (void)setShouldCacheResult:(bool)arg1;
- (void)setUseLowMemoryMode:(bool)arg1;
- (void)setWantsFlippedContentsRect:(bool)arg1;
- (void)setWantsSmallFaceRect:(bool)arg1;
- (bool)shouldCacheResult;
- (struct CGSize { double x1; double x2; })targetPixelSize;
- (bool)useLowMemoryMode;
- (bool)wantsFlippedContentsRect;
- (bool)wantsSmallFaceRect;

@end
