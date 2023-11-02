
@interface PEResourceLoadResult : NSObject {
    PICompositionController * _adjustedSourceCompositionController;
    NSString * _adjustmentIdentifierAndVersion;
    <PEAsset> * _asset;
    bool  _assetLoadingAsRaw;
    PICompositionController * _compositionController;
    PHContentEditingInput * _contentEditingInput;
    PLEditSource * _editSource;
    NSURL * _imageURL;
    NUComposition * _originalComposition;
    long long  _penultimateAvailability;
    long long  _retrievedVersion;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoComplementOriginalStillImageTime;
    NSURL * _videoComplementURL;
}

@property (nonatomic, retain) PICompositionController *adjustedSourceCompositionController;
@property (setter=_setAdjustmentIdentifierAndVersion:, nonatomic, retain) NSString *adjustmentIdentifierAndVersion;
@property (setter=_setAsset:, nonatomic, retain) <PEAsset> *asset;
@property (setter=_setAssetLoadingAsRaw:, nonatomic) bool assetLoadingAsRaw;
@property (setter=_setCompositionController:, nonatomic, retain) PICompositionController *compositionController;
@property (setter=_setContentEditingInput:, nonatomic, retain) PHContentEditingInput *contentEditingInput;
@property (setter=_setEditSource:, nonatomic, retain) PLEditSource *editSource;
@property (setter=_setImageURL:, nonatomic, retain) NSURL *imageURL;
@property (setter=_setOriginalComposition:, nonatomic, retain) NUComposition *originalComposition;
@property (setter=_setPenultimateAvailability:, nonatomic) long long penultimateAvailability;
@property (setter=_setRetrievedVersion:, nonatomic) long long retrievedVersion;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoComplementOriginalStillImageTime;
@property (setter=_setVideoComplementURL:, nonatomic, retain) NSURL *videoComplementURL;

+ (id)_resultWithContentEditingInput:(id)arg1 asset:(id)arg2 assetLoadingAsRaw:(bool)arg3;

- (void).cxx_destruct;
- (void)_setAdjustmentIdentifierAndVersion:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)_setAssetLoadingAsRaw:(bool)arg1;
- (void)_setCompositionController:(id)arg1;
- (void)_setContentEditingInput:(id)arg1;
- (void)_setEditSource:(id)arg1;
- (void)_setImageURL:(id)arg1;
- (void)_setOriginalComposition:(id)arg1;
- (void)_setPenultimateAvailability:(long long)arg1;
- (void)_setRetrievedVersion:(long long)arg1;
- (void)_setVideoComplementURL:(id)arg1;
- (id)adjustedSourceCompositionController;
- (id)adjustmentIdentifierAndVersion;
- (id)asset;
- (bool)assetLoadingAsRaw;
- (id)compositionController;
- (id)contentEditingInput;
- (id)editSource;
- (id)imageURL;
- (id)originalComposition;
- (id)overcaptureEditSource;
- (long long)penultimateAvailability;
- (long long)retrievedVersion;
- (void)setAdjustedSourceCompositionController:(id)arg1;
- (void)setVideoComplementOriginalStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoComplementOriginalStillImageTime;
- (id)videoComplementURL;

@end
