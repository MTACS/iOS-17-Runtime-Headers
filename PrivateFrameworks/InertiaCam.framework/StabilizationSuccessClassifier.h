
@interface StabilizationSuccessClassifier : NSObject {
    int  classifierMode;
    float  lastClassifierScore;
    unsigned long long  subsegmentLength;
    unsigned long long  subsegmentStep;
}

@property int classifierMode;
@property (readonly) float lastClassifierScore;
@property unsigned long long subsegmentLength;
@property unsigned long long subsegmentStep;

- (void)AddStats:(struct StabStatsRecord { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 toDict:(id)arg2 withBaseName:(id)arg3;
- (id)applyClassifierToOverlappedSegments:(void*)arg1 withCoefficientsDict:(id)arg2 movieSize:(struct Int32Size { int x1; int x2; })arg3 firstIndex:(int)arg4 lastIndex:(int)arg5 stride:(int)arg6 length:(int)arg7 result:(float*)arg8 verbose:(bool)arg9 minThreshold:(float)arg10;
- (float)calcLogisticForStats:(id)arg1 paramsForStats:(id)arg2 error:(id*)arg3;
- (id)calcStatsDictForArray:(id)arg1 withKey:(id)arg2 firstIndex:(int)arg3 lastIndex:(int)arg4 usingTempStorage:(void*)arg5 outErr:(id*)arg6;
- (int)classifierMode;
- (id)classifySequentialAnalysisSuccess:(void*)arg1 movieSize:(struct Int32Size { int x1; int x2; })arg2 precalcedFeatures:(id)arg3 result:(float*)arg4;
- (id)getDefaultParamDict;
- (id)getSequentialAnalysisCoeffsDict;
- (id)getSequentialParamDict;
- (id)getTripodCorrectionParamDict;
- (id)init;
- (float)lastClassifierScore;
- (void)setClassifierMode:(int)arg1;
- (void)setSubsegmentLength:(unsigned long long)arg1;
- (void)setSubsegmentStep:(unsigned long long)arg1;
- (id)statsDictFromFrameArray:(id)arg1 firstIndex:(int)arg2 lastIndex:(int)arg3 errorOut:(id*)arg4;
- (unsigned long long)subsegmentLength;
- (unsigned long long)subsegmentStep;
- (bool)testForHomographies:(const void*)arg1 movieSize:(struct Int32Size { int x1; int x2; })arg2 firstIndex:(int)arg3 lastIndex:(int)arg4 scoreThreshold:(float)arg5 errorOut:(id*)arg6 verbose:(bool)arg7;

@end
