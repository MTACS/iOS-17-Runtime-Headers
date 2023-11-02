
@interface VCPVideoPixelStabilizer : VCPVideoStabilizer {
    void * _analysisSessionRef;
}

- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)convertAnalysisResult;
- (void)dealloc;
- (id)init;

@end
