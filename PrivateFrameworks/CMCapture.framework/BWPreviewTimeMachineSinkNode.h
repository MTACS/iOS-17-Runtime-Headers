
@interface BWPreviewTimeMachineSinkNode : BWSinkNode <BWPreviewTimeMachineProcessor> {
    BWFigVideoCaptureDevice * _device;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _earliestAllowedPTS;
    bool  _faceMotionDetectionEnabled;
    bool  _frameMirrored;
    int  _frameRotationDegrees;
    bool  _haveFrameRotationAndMirror;
    FigCaptureImageMotionDetector * _motionDetector;
    NSObject<OS_dispatch_queue> * _processingQueue;
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
    }  _requestedSuspendPTSRange;
    bool  _smartCameraMotionDetectionEnabled;
    FigStateMachine * _stateMachine;
    id /* block */  _suspendCompletionHandler;
    int  _timeMachineCapacity;
    NSMutableArray * _timeMachineFrames;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _timeMachineLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } earliestAllowedPTS;
@property (readonly) struct { int x1; int x2; } frameDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didReachEndOfDataForInput:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })earliestAllowedPTS;
- (struct { int x1; int x2; })frameDimensions;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithCaptureDevice:(id)arg1 processingQueuePriority:(unsigned int)arg2 timeMachineCapacity:(int)arg3 smartCameraMotionDetectionEnabled:(bool)arg4 sinkID:(id)arg5;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)resume;
- (void)setEarliestAllowedPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)suspendWithPTSRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 completionHandler:(id /* block */)arg2;

@end
