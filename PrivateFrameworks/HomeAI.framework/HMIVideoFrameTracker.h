
@interface HMIVideoFrameTracker : HMIVideoAnalyzerProcessingNode <HMFLogging> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _approximationInterval;
    struct opaqueCMSampleBuffer { } * _background;
    HMIBackgroundEstimator * _backgroundEstimator;
    HMIVideoFrameTrackerFrameCandidate * _candidate;
    <HMIVideoFrameTrackerDelegate> * _delegate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _expirationInterval;
    unsigned long long  _maxCandidates;
    HMIMotionDetector * _motionDetector;
    unsigned long long  _numCandidates;
    HMIHTMLReport * _report;
    NSMutableArray * _reportBuffer;
    struct __CFArray { } * _resizedSampleBuffers;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _trackAnalysisPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _trackInterval;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } approximationInterval;
@property struct opaqueCMSampleBuffer { }*background;
@property (retain) HMIBackgroundEstimator *backgroundEstimator;
@property (retain) HMIVideoFrameTrackerFrameCandidate *candidate;
@property (readonly, copy) NSString *debugDescription;
@property <HMIVideoFrameTrackerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } expirationInterval;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long maxCandidates;
@property (readonly) HMIMotionDetector *motionDetector;
@property unsigned long long numCandidates;
@property (readonly) HMIHTMLReport *report;
@property (readonly) NSMutableArray *reportBuffer;
@property (readonly) struct __CFArray { }*resizedSampleBuffers;
@property (readonly) Class superclass;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } trackAnalysisPTS;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } trackInterval;

+ (id)logCategory;
+ (struct __CVBuffer { }*)resizePixelBuffer:(struct __CVBuffer { }*)arg1;

- (void).cxx_destruct;
- (void)_addCandidateForTarget:(struct opaqueCMSampleBuffer { }*)arg1 motionScore:(float)arg2 motionDetections:(id)arg3 tracks:(id)arg4;
- (void)_appendTarget:(struct opaqueCMSampleBuffer { }*)arg1 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 motionDetections:(id)arg3;
- (struct opaqueCMSampleBuffer { }*)_backgroundAtTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_drainCandidateThatExpiredBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_drainResizedBuffersThatExpiredBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)_motionDetectionsFromTarget:(struct opaqueCMSampleBuffer { }*)arg1 reference:(struct opaqueCMSampleBuffer { }*)arg2 dynamicConfiguration:(id)arg3 motionScore:(float*)arg4;
- (void)_synthesizeMotionDetectionWithTarget:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_tracksFromTarget:(struct opaqueCMSampleBuffer { }*)arg1 reference:(struct opaqueCMSampleBuffer { }*)arg2 background:(struct opaqueCMSampleBuffer { }*)arg3 dynamicConfiguration:(id)arg4 motionDetections:(id)arg5;
- (void)_visualizeFrames:(id)arg1 targetEvents:(id)arg2 backgroundEvents:(id)arg3 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)_visualizeTargetEvents:(id)arg1 backgroundEvents:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 targetTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;
- (void)_visualizeTargetsThatExpiredBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })approximationInterval;
- (struct opaqueCMSampleBuffer { }*)background;
- (id)backgroundEstimator;
- (id)candidate;
- (void)dealloc;
- (id)delegate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })expirationInterval;
- (void)flush;
- (void)handleFrameAnalyzerResult:(id)arg1;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 reference:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)initWithConfiguration:(id)arg1;
- (unsigned long long)maxCandidates;
- (id)motionDetector;
- (unsigned long long)numCandidates;
- (struct opaqueCMSampleBuffer { }*)prepareSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)report;
- (id)reportBuffer;
- (struct __CFArray { }*)resizedSampleBuffers;
- (void)setBackground:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setBackgroundEstimator:(id)arg1;
- (void)setCandidate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNumCandidates:(unsigned long long)arg1;
- (void)setTrackAnalysisPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })trackAnalysisPTS;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })trackInterval;

@end
