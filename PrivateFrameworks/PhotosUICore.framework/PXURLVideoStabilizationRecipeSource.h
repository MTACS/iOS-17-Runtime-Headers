
@interface PXURLVideoStabilizationRecipeSource : PXVideoStabilizationRecipeSource {
    NSURL * _inputVideoURL;
    PIVideoStabilizeRequest * _stabilizeRequest;
}

- (void).cxx_destruct;
- (id)_loadStabilizationRecipe:(id*)arg1 analysisType:(out unsigned long long*)arg2;
- (id)analyticsPayload;
- (id)initWithVideoURL:(id)arg1;

@end
