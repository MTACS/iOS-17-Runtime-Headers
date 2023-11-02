
@interface PUPhotoPickerScaledFileSizeEstimator : NSObject {
    PHAsset * _asset;
    struct CMPhotoDecompressionContainer { } * _figContainer;
}

@property (nonatomic, readonly) PHAsset *asset;

+ (bool)isAssetResizable:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_assetOriginalSize;
- (id)_assetURL;
- (id)_assetUTI;
- (unsigned long long)_estimatedSizeForResizeDescriptor:(id)arg1;
- (struct CMPhotoDecompressionContainer { }*)_figContainer;
- (struct CGSize { double x1; double x2; })_targetSizeForResizeDescriptor:(id)arg1;
- (id)asset;
- (void)dealloc;
- (unsigned long long)estimatedSizeForResizeDescriptor:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (bool)wouldResizeAssetUsingResizeDescriptor:(id)arg1;

@end
