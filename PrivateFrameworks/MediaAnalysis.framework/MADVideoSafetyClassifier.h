
@interface MADVideoSafetyClassifier : VCPVideoAnalyzer {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _end;
    SCMLHandler * _handler;
    float  _processTimeInterval;
    NSMutableArray * _results;
    NSDictionary * _scoresForLabels;
    short  _sensitivity;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _start;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastProcess;
    SCMLVideoAnalyzer * _videoAnalyzer;
}

+ (id)analyzeVideoAssetOnDemandWithURL:(id)arg1 localIdentifier:(id)arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 cancelBlock:(id /* block */)arg4 andProgressHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)addAnalysisResults;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)analyzeFrameWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 andFlags:(unsigned long long*)arg4;
- (int)configureAndStartVideoAnalyzer;
- (void)configureProcessTimeIntervalFrom:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)init;
- (id)results;

@end
