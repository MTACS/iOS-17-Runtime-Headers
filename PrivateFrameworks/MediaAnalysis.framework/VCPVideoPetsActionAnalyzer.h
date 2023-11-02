
@interface VCPVideoPetsActionAnalyzer : VCPVideoAnalyzer {
    NSMutableArray * _actionResults;
    float  _actionScoreAbsolute;
    float  _actionScoreRelative;
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
    NSMutableArray * _keyPetResults;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastPetTimestamp;
    float  _maxScore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _petRect;
    VCPImagePetsKeypointsAnalyzer * _poseAnalyzer;
    NSMutableArray * _poseResults;
    bool  _sampleFlag;
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
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (void)computeActionScore;
- (void)computeVar:(int)arg1 index2:(int)arg2 interVar:(float*)arg3 intraVar:(float*)arg4;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithFrameStats:(id)arg1 timeOfInterest:(id)arg2;
- (float)intersectionOverUnion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (float)normDistance:(id)arg1 point2:(id)arg2;
- (int)processPets:(id)arg1 petsBounds:(id)arg2 dominantPetIdx:(int)arg3 frame:(struct __CVBuffer { }*)arg4 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6;
- (id)results;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scaleX:(float)arg2 scaleY:(float)arg3;

@end
