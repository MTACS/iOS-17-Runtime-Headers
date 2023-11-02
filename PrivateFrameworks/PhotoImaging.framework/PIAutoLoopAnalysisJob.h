
@interface PIAutoLoopAnalysisJob : NURenderJob {
    NSDictionary * _recipe;
    AVAsset * _videoSource;
}

@property (nonatomic, retain) NSDictionary *recipe;
@property (nonatomic, retain) AVAsset *videoSource;

- (void).cxx_destruct;
- (id)analysisRequest;
- (id)cacheKey;
- (bool)prepare:(out id*)arg1;
- (id)recipe;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setRecipe:(id)arg1;
- (void)setVideoSource:(id)arg1;
- (id)videoSource;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputVideo;

@end
