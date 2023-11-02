
@interface PXAssetVariationRenderingOperation : NSOperation {
    PICompositionController * _adjustedCompositionController;
    NSDictionary * _analysisResult;
    PICompositionController * _baseCompositionController;
    NSNumber * _duration;
    PLLivePhotoEditSource * _editSource;
    NSError * _error;
    AVAsset * _outputAVAsset;
    UIImage * _outputImage;
    NSURL * _outputImageURL;
    AVVideoComposition * _outputVideoComposition;
    NSURL * _outputVideoURL;
    NSProgress * _progress;
    bool  _renderAllResources;
    id /* block */  _startHandler;
    bool  _succeeded;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    long long  _variationType;
}

@property (nonatomic, readonly, copy) PICompositionController *adjustedCompositionController;
@property (nonatomic, readonly, copy) NSDictionary *analysisResult;
@property (nonatomic, readonly, copy) PICompositionController *baseCompositionController;
@property (nonatomic, readonly) NSNumber *duration;
@property (nonatomic, readonly) PLLivePhotoEditSource *editSource;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) AVAsset *outputAVAsset;
@property (nonatomic, readonly) UIImage *outputImage;
@property (nonatomic, readonly) NSURL *outputImageURL;
@property (nonatomic, readonly) AVVideoComposition *outputVideoComposition;
@property (nonatomic, readonly) NSURL *outputVideoURL;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic, readonly) bool renderAllResources;
@property (nonatomic, copy) id /* block */ startHandler;
@property (nonatomic, readonly) bool succeeded;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic, readonly) long long variationType;

- (void).cxx_destruct;
- (void)_incrementProgressWithStartDate:(id)arg1;
- (void)_timeout;
- (id)adjustedCompositionController;
- (id)analysisResult;
- (id)baseCompositionController;
- (void)cancel;
- (id)duration;
- (id)editSource;
- (id)error;
- (id)init;
- (id)initWithEditSource:(id)arg1 variationType:(long long)arg2 analysisResult:(id)arg3 baseCompositionController:(id)arg4 outputImageURL:(id)arg5 outputVideoURL:(id)arg6 targetSize:(struct CGSize { double x1; double x2; })arg7 renderAllResources:(bool)arg8;
- (void)main;
- (id)outputAVAsset;
- (id)outputImage;
- (id)outputImageURL;
- (id)outputVideoComposition;
- (id)outputVideoURL;
- (id)progress;
- (bool)renderAllResources;
- (void)setStartHandler:(id /* block */)arg1;
- (id /* block */)startHandler;
- (bool)succeeded;
- (struct CGSize { double x1; double x2; })targetSize;
- (long long)variationType;

@end
