
@interface FigIrisAutoTrimmer : NSObject {
    double  _bufferHistorySeconds;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _captureMotionDelta;
    double  _captureMotionDeltaPeriod;
    unsigned long long  _estimatedIntermediatesCount;
    bool  _haveCaptureMotionDelta;
    bool  _intermediateLoggingEnabled;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _lastAttitude;
    double  _lastCheckedTimestamp;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  _lastDelta;
    int  _lastStatus;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxHoldDuration;
    long long  _maxHoldFrames;
    bool  _motionAvailable;
    double  _motionSampleRate;
    NSMutableArray * _motionSamples;
    unsigned long long  _nominalHistorySize;
    int  _svmKernelType;
    NSArray * _svmKeys;
    NSData * _svmNormalization;
    int  _svmParamCount;
    float  _svmRBFGamma;
    float  _svmRBFRho;
    int  _svmVectorCount;
    NSData * _svmVectors;
    float  _vitalityDocumentThreshold;
    bool  _vitalityScoringEnabled;
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _vitalityScoringSmartCameraPipelineVersion;
    unsigned int  _vitalityScoringVersion;
}

@property (nonatomic, readonly) bool trimmingActive;
@property (nonatomic, readonly) unsigned int vitalityScoringVersion;

+ (void)initialize;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })beginTrimmingForStillImageHostPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 minimumPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (double)bufferHistorySeconds;
- (float)computeVitalityScoreForStillImageHostPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 movieRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2;
- (void)dealloc;
- (int)emissionStatusForHostPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)exportMotionSamples;
- (id)init;
- (bool)intermediateLoggingEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxHoldDuration;
- (void)processCountOfVisibleVitalityObjects:(int)arg1 forHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)processISPMotionData:(id)arg1 forHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)processInferences:(id)arg1 forHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setBufferHistorySeconds:(double)arg1;
- (void)setIntermediateLoggingEnabled:(bool)arg1;
- (void)setMaxHoldDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoFrameRate:(double)arg1;
- (void)setVitalityScoringEnabled:(bool)arg1;
- (void)setVitalityScoringSmartCameraPipelineVersion:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg1;
- (void)startMotionProcessing;
- (void)stopMotionProcessing;
- (bool)trimmingActive;
- (double)videoFrameRate;
- (bool)vitalityScoringEnabled;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; })vitalityScoringSmartCameraPipelineVersion;
- (unsigned int)vitalityScoringVersion;

@end
