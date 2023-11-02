
@interface PXAssetVariationRenderResult : NSObject {
    NSDictionary * _analysisResult;
    PICompositionController * _compositionController;
    NSError * _error;
    bool  _fullsizeRender;
    UIImage * _image;
    NSURL * _imageURL;
    bool  _success;
    long long  _variationType;
    AVAsset * _videoAsset;
    AVVideoComposition * _videoComposition;
    NSURL * _videoURL;
}

@property (nonatomic, readonly, copy) NSDictionary *analysisResult;
@property (nonatomic, readonly, copy) PICompositionController *compositionController;
@property (nonatomic, readonly) NSError *error;
@property (getter=isFullsizeRender, nonatomic) bool fullsizeRender;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) long long variationType;
@property (nonatomic, retain) AVAsset *videoAsset;
@property (nonatomic, retain) AVVideoComposition *videoComposition;
@property (nonatomic, readonly) NSURL *videoURL;

- (void).cxx_destruct;
- (id)analysisResult;
- (id)compositionController;
- (id)description;
- (id)error;
- (id)image;
- (id)imageURL;
- (id)init;
- (id)initWithVariationType:(long long)arg1 imageURL:(id)arg2 videoURL:(id)arg3 analysisResult:(id)arg4 compositionController:(id)arg5 success:(bool)arg6 error:(id)arg7;
- (bool)isFullsizeRender;
- (void)setFullsizeRender:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setVideoAsset:(id)arg1;
- (void)setVideoComposition:(id)arg1;
- (bool)success;
- (long long)variationType;
- (id)videoAsset;
- (id)videoComposition;
- (id)videoURL;

@end
