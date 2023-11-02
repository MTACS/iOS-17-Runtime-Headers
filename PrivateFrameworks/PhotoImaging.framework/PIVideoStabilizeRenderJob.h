
@interface PIVideoStabilizeRenderJob : NURenderJob {
    unsigned long long  _allowedAnalysisTypes;
    double  _allowedCropFraction;
    unsigned long long  _analysisType;
    NSArray * _keyframes;
    id /* block */  _progressHandler;
    NSDictionary * _rawHomographies;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _stabCropRect;
}

@property (nonatomic) unsigned long long allowedAnalysisTypes;
@property (nonatomic) double allowedCropFraction;
@property (nonatomic, readonly) unsigned long long analysisType;
@property (nonatomic, readonly, copy) NSArray *keyframes;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, readonly) NSDictionary *rawHomographies;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } stabCropRect;

- (void).cxx_destruct;
- (unsigned long long)allowedAnalysisTypes;
- (double)allowedCropFraction;
- (unsigned long long)analysisType;
- (id)keyframes;
- (bool)prepare:(out id*)arg1;
- (id /* block */)progressHandler;
- (id)rawHomographies;
- (id)result;
- (id)scalePolicy;
- (void)setAllowedAnalysisTypes:(unsigned long long)arg1;
- (void)setAllowedCropFraction:(double)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })stabCropRect;
- (bool)wantsCompleteStage;
- (bool)wantsOutputVideo;
- (bool)wantsRenderStage;

@end
