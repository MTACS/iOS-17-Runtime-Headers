
@interface PregateAnalyzer : NSObject {
    NSArray * _badFrameFlags;
    NSDictionary * _defaultParameters;
    NSArray * _focusScores;
    int  _gatingPassTrimResult_firstIndex;
    int  _gatingPassTrimResult_lastIndex;
    bool  _haveInputVideoSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputVideoSize;
    NSData * _perFrameTranslationVecs;
    int  _trimInput_firstIndex;
    int  _trimInput_lastIndex;
    PregateFeatureBuilder * featureBuilder;
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
    }  inputTrimTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minimumRequiredTrimLength;
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
    }  outputTrimTime;
    NSDictionary * pregateParameters;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  requiredFrameTime;
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
    }  requiredTimeRange;
}

@property (retain) NSArray *badFrameFlags;
@property (retain) NSDictionary *defaultParameters;
@property (retain) PregateFeatureBuilder *featureBuilder;
@property (retain) NSArray *focusScores;
@property int gatingPassTrimResult_firstIndex;
@property int gatingPassTrimResult_lastIndex;
@property bool haveInputVideoSize;
@property struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } inputTrimTime;
@property struct CGSize { double x1; double x2; } inputVideoSize;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } minimumRequiredTrimLength;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } outputTrimTime;
@property (retain) NSData *perFrameTranslationVecs;
@property (retain) NSDictionary *pregateParameters;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } requiredFrameTime;
@property struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } requiredTimeRange;
@property int trimInput_firstIndex;
@property int trimInput_lastIndex;

+ (id)pregateFailureReasonsToString:(int)arg1;

- (void).cxx_destruct;
- (id)badFrameFlags;
- (struct MetadataFloatVector { float x1; float x2; })cumulativePanForStartIndex:(long long)arg1 lastIndex:(long long)arg2;
- (id)defaultParameters;
- (bool)exposuresViolateThresholdFraction:(float)arg1 exposure1:(float)arg2 exposure2:(float)arg3;
- (id)featureBuilder;
- (int)fetchVideoDimensionsFromMetadata;
- (bool)findFrameIndicesInFrameArray:(id)arg1 forTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 startIndex:(int*)arg3 endIndex:(int*)arg4;
- (int)findGatingPassViaTrimming:(id)arg1;
- (long long)findLongestPassingSegmentInFrameFlags:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 startOfRun:(long long*)arg4 gatingFailures:(int*)arg5;
- (bool)findNextNonInterpFrameFromIndex:(long long)arg1 backwards:(bool)arg2 inFrameInfoArray:(id)arg3 toValue:(long long*)arg4;
- (bool)findSurroundingNonInterpForIndex:(long long)arg1 inFrameInfoArray:(id)arg2 prevIndex:(long long*)arg3 nextIndex:(long long*)arg4;
- (id)focusScores;
- (bool)frameIndexIsFocusing:(long long)arg1 inFrameData:(id)arg2 failureReason:(int*)arg3;
- (int)gatingPassTrimResult_firstIndex;
- (int)gatingPassTrimResult_lastIndex;
- (int)getFocusDataFromFrameData:(id)arg1 toFocusingFlags:(id)arg2;
- (int)getFrameMetadataArray:(id*)arg1;
- (bool)getParamForKey:(id)arg1 toCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (bool)getParamForKey:(id)arg1 toFloat:(float*)arg2;
- (bool)getParamForKey:(id)arg1 toInt:(long long*)arg2;
- (int)getPerFrameGatingData:(id)arg1 firstIndex:(long long)arg2 lastIndex:(long long)arg3;
- (int)getZoomFlagsFromFrameData:(id)arg1 toArray:(id)arg2;
- (bool)haveInputVideoSize;
- (id)init;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })inputTrimTime;
- (struct CGSize { double x1; double x2; })inputVideoSize;
- (int)isCumulativePanAcceptableForFrames:(id)arg1 firstIndex:(long long)arg2 lastIndex:(long long)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumRequiredTrimLength;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })outputTrimTime;
- (id)paramValueForKey:(id)arg1;
- (id)perFrameTranslationVecs;
- (id)pregateParameters;
- (int)processGainAndExposureData:(id)arg1 intoFlagsArray:(id)arg2 firstIndex:(long long)arg3 lastIndex:(long long)arg4;
- (int)processMotionVectorsFromFrameData:(id)arg1 toVectorArray:(struct MetadataFloatVector { float x1; float x2; }*)arg2;
- (int)processPregateSuccess:(int*)arg1;
- (int)processPresentationTimesFromData:(id)arg1 toBadFrameFlags:(id)arg2 withMaxDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 maxInterpGapTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 maxInterpFrameCount:(long long)arg5 firstIndex:(long long)arg6 lastIndex:(long long)arg7;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requiredFrameTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })requiredTimeRange;
- (void)setBadFrameFlags:(id)arg1;
- (void)setDefaultParameters:(id)arg1;
- (void)setFeatureBuilder:(id)arg1;
- (void)setFocusScores:(id)arg1;
- (void)setGatingPassTrimResult_firstIndex:(int)arg1;
- (void)setGatingPassTrimResult_lastIndex:(int)arg1;
- (void)setHaveInputVideoSize:(bool)arg1;
- (void)setInputTrimTime:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setInputVideoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumRequiredTrimLength:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPerFrameTranslationVecs:(id)arg1;
- (void)setPregateParameters:(id)arg1;
- (void)setRequiredFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRequiredTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setTrimInput_firstIndex:(int)arg1;
- (void)setTrimInput_lastIndex:(int)arg1;
- (bool)subsegmentMeetsTrimCriteriaForFrames:(id)arg1 firstFrame:(long long)arg2 lastFrame:(long long)arg3 firstFrameTimeOut:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4 lastFrameTimeOut:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg5 preciseTrimTimeOut:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg6;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeForFrameFromArray:(id)arg1 frameIndex:(long long)arg2;
- (int)trimInput_firstIndex;
- (int)trimInput_lastIndex;

@end
