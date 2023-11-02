
@interface PHContentEditingInputResult : PHCompositeMediaResult {
    PHAdjustmentData * _adjustmentData;
    NSURL * _backSwappingImageRenderURL;
    NSURL * _backSwappingVideoRenderURL;
    NSNumber * _baseVersionNeeded;
    bool  _canHandleAdjustmentData;
    NSMutableDictionary * _flipImageURLs;
    NSMutableDictionary * _flipVideoURLs;
    NSURL * _frontSwappingImageRenderURL;
    NSURL * _frontSwappingVideoRenderURL;
    PHImageResult * _imageResult;
    PHAdjustmentData * _originalAdjustmentData;
    NSURL * _overCapturePhotoURL;
    NSURL * _overCaptureVideoURL;
    PHCompositeMediaResult * _videoResult;
}

@property (nonatomic, copy) NSURL *backSwappingImageRenderURL;
@property (nonatomic, copy) NSURL *backSwappingVideoRenderURL;
@property (nonatomic, retain) NSNumber *baseVersionNeeded;
@property (nonatomic) bool canHandleAdjustmentData;
@property (nonatomic, copy) NSURL *frontSwappingImageRenderURL;
@property (nonatomic, copy) NSURL *frontSwappingVideoRenderURL;
@property (nonatomic, retain) PHAdjustmentData *originalAdjustmentData;
@property (nonatomic, retain) NSURL *overCapturePhotoURL;
@property (nonatomic, retain) NSURL *overCaptureVideoURL;

- (void).cxx_destruct;
- (void)addAdjustmentDataResult:(id)arg1;
- (void)addFlipImageURL:(id)arg1 forAssetResourceType:(long long)arg2;
- (void)addFlipVideoURL:(id)arg1 forAssetResourceType:(long long)arg2;
- (void)addImageResult:(id)arg1;
- (void)addVideoResult:(id)arg1;
- (id)adjustmentData;
- (id)backSwappingImageRenderURL;
- (id)backSwappingVideoRenderURL;
- (id)baseVersionNeeded;
- (bool)canHandleAdjustmentData;
- (id)cancelledInfoKey;
- (void)clearAdjustmentData;
- (bool)containsValidData;
- (id)description;
- (id)error;
- (id)errorInfoKey;
- (id)exifOrientation;
- (id)flipImageURLs;
- (id)flipVideoURLs;
- (id)frontSwappingImageRenderURL;
- (id)frontSwappingVideoRenderURL;
- (id)imageData;
- (id)imagePropertiesLoadIfNeeded:(bool)arg1;
- (struct CGImage { }*)imageRef;
- (id)imageSandboxExtensionToken;
- (id)imageURL;
- (id)inCloudInfoKey;
- (void)mergeInfoDictionaryFromResult:(id)arg1;
- (id)originalAdjustmentData;
- (id)overCapturePhotoURL;
- (id)overCaptureVideoURL;
- (void)setBackSwappingImageRenderURL:(id)arg1;
- (void)setBackSwappingVideoRenderURL:(id)arg1;
- (void)setBaseVersionNeeded:(id)arg1;
- (void)setCanHandleAdjustmentData:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setFrontSwappingImageRenderURL:(id)arg1;
- (void)setFrontSwappingVideoRenderURL:(id)arg1;
- (void)setOriginalAdjustmentData:(id)arg1;
- (void)setOverCapturePhotoURL:(id)arg1;
- (void)setOverCaptureVideoURL:(id)arg1;
- (id)uniformTypeIdentifier;
- (id)videoAdjustmentData;
- (id)videoSandboxExtensionToken;
- (id)videoURL;

@end
