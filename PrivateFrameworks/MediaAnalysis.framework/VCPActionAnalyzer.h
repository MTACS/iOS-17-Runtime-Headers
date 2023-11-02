
@interface VCPActionAnalyzer : NSObject {
    struct HinkleyDetector { float x1; float x2; int x3; struct HinkleyStats { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; } * _activeHinkleyDetector;
    VCPSegment * _activeSegment;
    float  _activeThreshold;
    bool  _firstFrame;
    NSMutableArray * _internalResults;
    int  _postProcessStart;
    bool  _verbose;
}

- (void).cxx_destruct;
- (id)activeSegment;
- (int)analyzeFrameWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 andActionScore:(float)arg2;
- (void)dealloc;
- (bool)decideSegmentPointBasedOnActionScore:(float)arg1;
- (bool)decideSegmentPointUsingHinkleyDetector:(float)arg1;
- (int)finalizeWithDestructiveTrimStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trimEnd:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)init;
- (bool)isActive:(float)arg1;
- (bool)isScoreValid:(float)arg1;
- (int)mergeConsecutiveShortSegments;
- (int)mergeSameTypeSegments;
- (int)mergeSparseShortSegments;
- (int)postProcessSegmentsWithCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trimStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (int)prepareTrimmingWithTrimStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 andTrimEnd:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)printSegments:(id)arg1;
- (id)segments;
- (void)updateActiveThreshold;

@end
