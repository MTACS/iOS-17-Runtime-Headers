
@interface VCPMADServiceImagePhotosAsset : VCPMADServiceImageAsset {
    PHAsset * _asset;
    NSArray * _barcodeObservations;
    NSData * _cachedParseData;
    NSArray * _documentObservations;
    NSNumber * _hasCachedParseData;
    unsigned int  _highResOrientation;
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _highResPixelBuffer;
    unsigned int  _lowResOrientation;
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _lowResPixelBuffer;
    unsigned int  _orientation;
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _pixelBuffer;
    NSArray * _resources;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)animatedStickerScore;
- (id)asset;
- (unsigned long long)assetType;
- (id)barcodeObservations;
- (id)cachedParseData;
- (id)documentObservations;
- (id)faces;
- (bool)hasCachedParseData;
- (bool)hasValidSceneProcessing;
- (id)identifier;
- (id)initWithPhotosAsset:(id)arg1 clientBundleID:(id)arg2 clientTeamID:(id)arg3;
- (id)initWithPhotosAsset:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 orientation:(unsigned int)arg3 clientBundleID:(id)arg4 clientTeamID:(id)arg5;
- (bool)isHighResDecoded;
- (bool)isScreenshot;
- (id)isSensitive;
- (int)loadHighResPixelBuffer:(struct __CVBuffer {}**)arg1 orientation:(unsigned int*)arg2;
- (int)loadLowResPixelBuffer:(struct __CVBuffer {}**)arg1 orientation:(unsigned int*)arg2;
- (int)loadPixelBuffer:(struct __CVBuffer {}**)arg1 orientation:(unsigned int*)arg2;
- (id)location;
- (id)nsfwClassifications;
- (unsigned int)orientation;
- (void)persistOCRMRC;
- (struct CGSize { double x1; double x2; })resolution;
- (id)resources;
- (id)scenenetClassifications;
- (void)setBarcodeObservations:(id)arg1;
- (void)setCachedParseData:(id)arg1 overwriteExisting:(bool)arg2;
- (void)setDocumentObservations:(id)arg1;
- (id)thumbnailResource;

@end
