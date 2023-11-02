
@interface VCPMovieCurationAnalyzer : NSObject {
    NSArray * _actionResults;
    NSArray * _audioQualityResults;
    NSArray * _cameraMotionResults;
    NSArray * _descriptorResults;
    NSDictionary * _faceRanges;
    NSArray * _faceResults;
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    VCPFrameAnalysisStats * _frameStats;
    bool  _hadFlash;
    bool  _hadZoom;
    VCPMovieHighlightAnalyzer * _highlightAnalyzer;
    NSArray * _humanActionResults;
    NSArray * _humanPoseResults;
    bool  _isLivePhoto;
    NSArray * _junkResults;
    VCPVideoKeyFrameAnalyzer * _keyFrameAnalyzer;
    NSArray * _mlHighlightScoreResults;
    NSArray * _mlQualityResults;
    NSArray * _orientationResults;
    NSArray * _petsResults;
    NSArray * _qualityResuls;
    NSArray * _saliencyResults;
    NSArray * _sceneResults;
    NSArray * _subtleMotionResults;
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
    NSArray * _voiceResults;
}

+ (bool)isSettlingEffectPregatingEnabled;

- (void).cxx_destruct;
- (void)addHighlight:(id)arg1 to:(id)arg2;
- (void)addSettling:(id)arg1 to:(id)arg2;
- (void)addSticker:(id)arg1 to:(id)arg2;
- (void)addSummary:(id)arg1 to:(id)arg2;
- (int)analyzeKeyFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4 photoOffset:(float)arg5;
- (id)audioQualityScore:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (int)generateMovieCurations;
- (id)initWithAnalysisTypes:(unsigned long long)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 isLivePhoto:(bool)arg4 photoOffset:(float)arg5 frameStats:(id)arg6 hadFlash:(bool)arg7 hadZoom:(bool)arg8 settlingHadZoom:(bool)arg9 keyFrameResults:(id)arg10 isTimelapse:(bool)arg11 preferredTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg12 asset:(id)arg13;
- (void)loadVideoAnalysisResults:(id)arg1 audioAnalysisResults:(id)arg2 videoCNNResults:(id)arg3 andFaceRanges:(id)arg4 frameSize:(struct CGSize { double x1; double x2; })arg5;
- (int)postProcessKeyFrames;
- (void)reportMovieCurationAnalysisResults:(id)arg1 withSummaryAnalytics:(id)arg2;
- (id)results;
- (void)setMaxHighlightDuration:(float)arg1;

@end
