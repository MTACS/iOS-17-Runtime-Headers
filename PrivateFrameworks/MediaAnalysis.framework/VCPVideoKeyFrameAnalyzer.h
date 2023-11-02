
@interface VCPVideoKeyFrameAnalyzer : NSObject {
    VCPVideoKeyFrame * _activeKeyFrame;
    VCPImageBlurAnalyzer * _blurAnalyzer;
    VCPImageFaceQualityAnalyzer * _faceQualityAnalyzer;
    NSDictionary * _faceRanges;
    VCPFrameAnalysisStats * _frameStats;
    NSArray * _inputKeyFrameResults;
    bool  _isLivePhoto;
    NSArray * _junkResults;
    NSMutableArray * _keyFrameScores;
    NSMutableArray * _keyFrames;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
}

+ (bool)isLivePhotoKeyFrameEnabled;

- (void).cxx_destruct;
- (void)adjustScoreByFace;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (int)computeFaceQualityOfFrame:(struct __CVBuffer { }*)arg1;
- (float)computeMinDistanceBetween:(id)arg1 withSet:(id)arg2;
- (int)computeSharpnessOfFrame:(struct __CVBuffer { }*)arg1;
- (int)finalizeKeyFrame;
- (id)initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 isLivePhoto:(bool)arg3 frameStats:(id)arg4 keyFrameResults:(id)arg5;
- (id)keyFrameScores;
- (id)keyFrames;
- (int)loadKeyFrameResults:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)modulateByExposure;
- (void)modulateByJunk;
- (void)modulateByTimeRange;
- (int)postProcess;
- (void)prepareFrameStats:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)preparePostProcessingStatsFromFaceRange:(id)arg1 junkResults:(id)arg2;
- (void)setBlurAnalyzerFaceResults:(id)arg1;
- (void)setKeyFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 isHeadingFrame:(bool)arg2;

@end
