
@interface VCPVideoCNNAnalyzer : VCPVideoAnalyzer {
    VCPVideoCNNAutoplay * _autoplay;
    VCPVideoCNNBackbone * _backbone;
    VCPVideoCNNCameraMotion * _cameraMotion;
    bool  _enoughFrames;
    bool  _enoughFramesSettling;
    VCPVideoCNNHighlight * _highlight;
    float * _inputData;
    float * _inputDataSettling;
    int  _inputHeight;
    int  _inputWidth;
    float  _minProcessingInterval;
    VCPVideoPersonDetector * _personDetector;
    float  _photoOffset;
    bool  _postInference;
    NSMutableArray * _postTasks;
    NSMutableArray * _privateTasks;
    VCPVideoCNNQuality * _quality;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionCrop;
    NSString * _resConfig;
    NSMutableArray * _tasks;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeEnd;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastDetection;
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
    }  _timeStart;
    VCPTransforms * _transformImage;
    int  _validFrames;
    int  _validFramesSettling;
    VCPVideoEmbeddings * _videoEmbeddings;
    VCPVideoCaptionEncoder * _videoLanguageBackbone;
}

+ (bool)forcePersonDetection;
+ (bool)isMLHighlightEnabled;
+ (bool)isMLSettlingEffectPregatingEnabled;

- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)configForAspectRatio:(float)arg1;
- (int)copyImage:(struct __CVBuffer { }*)arg1 withChannels:(int)arg2 settling:(bool)arg3;
- (void)dealloc;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithTimeOfInteret:(id)arg1 frameRate:(float)arg2 isLivePhoto:(bool)arg3 phFaces:(id)arg4 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5 withEmbeddings:(id)arg6 requestedAnalyses:(unsigned long long)arg7 photoOffset:(float)arg8;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })isAnalysisResultNeeded:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)loadAnalysisResults:(id)arg1 audioResults:(id)arg2;
- (int)loadAnalysisResultsFrom:(id)arg1 actionAnalyzer:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)privateResults;
- (id)results;
- (int)runTasks:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 persons:(id)arg3 regionCrop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

@end
