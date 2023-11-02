
@interface VCPVideoPetsAnalyzer : VCPVideoAnalyzer {
    NSArray * _petsActiveRegions;
    VCPImagePetsAnalyzer * _petsAnalyer;
    NSMutableArray * _petsDetections;
    NSArray * _petsFaceActiveRegions;
    NSMutableArray * _petsFaceDetections;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _petsFaceStart;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _petsStart;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeLastProcess;
}

- (void).cxx_destruct;
- (void)addDetectionToDict:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 withActiveRegions:(id)arg2 forPetsDetections:(id)arg3 fromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4 frameStats:(id)arg5;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)parseResults:(id)arg1 toDetections:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 fromTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4 addActiveRegions:(id)arg5;
- (id)results;

@end
