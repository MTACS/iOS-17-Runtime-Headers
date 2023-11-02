
@interface HDQuantitySampleOverlapProcessor : NSObject {
    double  _anchorTime;
    unsigned long long  _overlapFunction;
    struct { 
        double startTime; 
        double endTime; 
        double sampleValue; 
        bool shouldContributeToCount; 
        long long sourceID; 
    }  _workingSet;
    long long  _workingSetCount;
}

- (long long)addSample:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1 outputSamples:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg2 error:(id*)arg3;
- (struct { double x1; unsigned long long x2; long long x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; bool x_4_1_4; long long x_4_1_5; } x4[128]; })exportCurrentState;
- (bool)fetchFinalOverlapSamplesWithErrorOut:(id*)arg1 handler:(id /* block */)arg2;
- (bool)fetchOverlapProcessSamplesFrom:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1 setAnchorTime:(bool)arg2 errorOut:(id*)arg3 handler:(id /* block */)arg4;
- (long long)finishWithRemainingSamples:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1 error:(id*)arg2;
- (id)initWithOverlapFunction:(unsigned long long)arg1;
- (id)initWithState:(struct { double x1; unsigned long long x2; long long x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; bool x_4_1_4; long long x_4_1_5; } x4[128]; })arg1;
- (void)resetAnchorTime:(double)arg1;

@end
