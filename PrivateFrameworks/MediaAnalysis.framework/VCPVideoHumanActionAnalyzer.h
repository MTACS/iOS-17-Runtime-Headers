
@interface VCPVideoHumanActionAnalyzer : VCPVideoAnalyzer {
    NSMutableArray * _actionResults;
    float  _actionScoreAbsolute;
    float  _actionScoreRelative;
    NSMutableArray * _activePoseResults;
    NSMutableArray * _bodyArray;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _crop;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _endTime;
    VCPFrameAnalysisStats * _frameStats;
    float  _humanPoseScore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _humanRect;
    NSMutableArray * _keyPersonResults;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastHumanTimestamp;
    float  _maxScore;
    NSMutableArray * _phFaces;
    VCPImageHumanPoseAnalyzer * _poseAnalyzer;
    NSMutableArray * _poseResults;
    struct Scaler { 
        struct CF<__CVPixelBufferPool *> { 
            struct __CVPixelBufferPool {} *value_; 
        } pool_; 
        int width_; 
        int height_; 
        unsigned int format_; 
        struct CF<OpaqueVTPixelTransferSession *> { 
            struct OpaqueVTPixelTransferSession {} *value_; 
        } transfer_session_; 
    }  _scaler;
    float  _scoreAbsoluteMax;
    float  _scoreRelativeMax;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastProcess;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastProcessFullFrame;
    NSNumber * _timeOfInterest;
    VCPVideoObjectTracker * _tracker;
    bool  _tracking;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addActiveResults:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (id)associatePerson:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withPHFaces:(id)arg2;
- (id)clipResults:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)computeActionScore;
- (void)computeVar:(int)arg1 index2:(int)arg2 interVar:(float*)arg3 intraVar:(float*)arg4;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithFrameStats:(id)arg1 timeOfInterest:(id)arg2 phFaces:(id)arg3;
- (float)intersectionOverUnion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (float)normDistance:(id)arg1 point2:(id)arg2;
- (id)privateResults;
- (int)processPersons:(id)arg1 humanBounds:(id)arg2 dominantPersonIdx:(int)arg3 frame:(struct __CVBuffer { }*)arg4 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6;
- (id)results;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scaleX:(float)arg2 scaleY:(float)arg3;

@end
