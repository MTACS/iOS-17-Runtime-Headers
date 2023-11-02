
@interface OZFxPlugTimingAPI : NSObject <FxTimingAPI, FxTimingAPI_v2, FxTimingAPI_v3, FxTimingInfo_Private, PROAPIObject> {
    struct shared_ptr<OZFxPlugSharedLock> { 
        struct OZFxPlugSharedLock {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fxPlugLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (void)copyFxTime:(union { double x1; struct { /* ? */ } *x2; })arg1 toFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg2;
- (double)durationForEffect:(id)arg1;
- (void)durationFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParm:(unsigned int)arg2;
- (void)durationFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)durationOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)durationOfInputAToTransition:(id)arg1;
- (double)durationOfInputBToTransition:(id)arg1;
- (double)durationOfInputToFilter:(id)arg1;
- (unsigned long long)fieldOrderForImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (unsigned long long)fieldOrderForInputAToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputBToTransition:(id)arg1;
- (unsigned long long)fieldOrderForInputToFilter:(id)arg1;
- (void)frameDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)imageFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 forParmId:(unsigned int)arg2 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (double)imageTimeForParmId:(unsigned int)arg1 forEffect:(id)arg2 fromTimelineTime:(double)arg3;
- (void)inPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)inPointOfTimelineForEffect:(id)arg1;
- (id)initWithPluginLock:(struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)inputAFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputATimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (void)inputBFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputBTimeForTransition:(id)arg1 fromTimelineTime:(double)arg2;
- (void)inputFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)inputTimeForFilter:(id)arg1 fromTimelineTime:(double)arg2;
- (union { double x1; struct { /* ? */ } *x2; })invalidTime;
- (void)outPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)outPointOfTimelineForEffect:(id)arg1;
- (void)sampleDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void*)scene;
- (const void*)sceneSettings;
- (void)startFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParam:(unsigned int)arg2;
- (void)startFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (double)startTimeForEffect:(id)arg1;
- (double)startTimeOfImageParm:(unsigned int)arg1 forEffect:(id)arg2;
- (double)startTimeOfInputAToTransition:(id)arg1;
- (double)startTimeOfInputBToTransition:(id)arg1;
- (double)startTimeOfInputToFilter:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeOffsetForImageParameter:(unsigned int)arg1;
- (double)timelineDurationForEffect:(id)arg1;
- (unsigned long long)timelineFpsDenominatorForEffect:(id)arg1;
- (unsigned long long)timelineFpsNumeratorForEffect:(id)arg1;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromImageTime:(union { double x1; struct { /* ? */ } *x2; })arg2 forParmId:(unsigned int)arg3;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputATime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputBTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (double)timelineTimeFromImageTime:(double)arg1 forParmId:(unsigned int)arg2 forEffect:(id)arg3;
- (double)timelineTimeFromInputATime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputBTime:(double)arg1 forTransition:(id)arg2;
- (double)timelineTimeFromInputTime:(double)arg1 forFilter:(id)arg2;
- (double)transitionTimeFractionAtTime:(double)arg1;
- (union { double x1; struct { /* ? */ } *x2; })zeroTime;

@end
