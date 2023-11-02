
@interface PIVideoStabilizeRequest : NURenderRequest {
    unsigned long long  _allowedAnalysisTypes;
    double  _allowedCropFraction;
    id /* block */  _progressHandler;
}

@property (nonatomic) unsigned long long allowedAnalysisTypes;
@property (nonatomic) double allowedCropFraction;
@property (nonatomic, copy) id /* block */ progressHandler;

+ (bool)canPerformGyroBasedStabilizationForAsset:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)allowedAnalysisTypes;
- (double)allowedCropFraction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id /* block */)progressHandler;
- (void)setAllowedAnalysisTypes:(unsigned long long)arg1;
- (void)setAllowedCropFraction:(double)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)submit:(id /* block */)arg1;

@end
