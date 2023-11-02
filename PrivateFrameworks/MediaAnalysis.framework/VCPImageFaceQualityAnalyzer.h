
@interface VCPImageFaceQualityAnalyzer : VCPImageAnalyzer {
    NSMutableArray * _faceQualityScores;
}

@property (retain) NSMutableArray *faceQualityScores;

- (void).cxx_destruct;
- (int)analyzeDetectedFaces:(struct __CVBuffer { }*)arg1 faceResults:(id)arg2 cancel:(id /* block */)arg3;
- (void)dealloc;
- (id)faceQualityScores;
- (void)setFaceQualityScores:(id)arg1;

@end
