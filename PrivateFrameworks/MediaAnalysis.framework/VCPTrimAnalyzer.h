
@interface VCPTrimAnalyzer : NSObject {
    VCPActionAnalyzer * _actionAnalyzer;
    VCPSegment * _activeSegment;
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
    }  _bestTrimTimeRange;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _captureTime;
    float  _curationThreshold;
    bool  _firstFrame;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _inTrimEnd;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _inTrimStart;
    NSMutableArray * _internalResults;
    bool  _ready;
    bool  _verbose;
}

- (void).cxx_destruct;
- (int)analyzeFrameWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 analysisData:(id)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })bestTrimTimeRange;
- (float)calculateCandidateScoreWithRangeAdjust:(int)arg1 endIdx:(int)arg2 candidateTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg3 captureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (bool)checkTrimAt:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 captureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (int)finalizeWithDestructiveTrimStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trimEnd:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)generateCurationSegment;
- (int)generateInterestingTrimBasedOnCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)init;
- (bool)isCurated:(float)arg1;
- (bool)isReady;
- (bool)isTimestampSkipable:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)prepareTrimmingWithTrimStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 andTrimEnd:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)printSegments:(id)arg1;
- (bool)shouldCutAt:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 stillPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withCut:(bool)arg3;
- (void)updateCurationThreshold;

@end
