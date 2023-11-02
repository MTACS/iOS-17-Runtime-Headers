
@interface DYExperimentResultsGenerator : NSObject {
    DYExperimentOverrideEnable * _experiment;
    unsigned long long  _frameTime;
    unsigned long long  _frameTimeEnd;
    unsigned long long  _frameTimeStart;
    struct unique_ptr<GPUTools::RunningStatistics<unsigned long long>, std::default_delete<GPUTools::RunningStatistics<unsigned long long>>> { 
        struct __compressed_pair<GPUTools::RunningStatistics<unsigned long long> *, std::default_delete<GPUTools::RunningStatistics<unsigned long long>>> { 
            void *__value_; 
        } __ptr_; 
    }  _frameTimeStatistics;
    DYFunctionPlayer * _functionPlayer;
    bool  _isDone;
    unsigned int  _iteration;
    unsigned int  _prevFileFunctionIndex;
    unsigned long long  _startGlobalTime;
}

@property (nonatomic, readonly) DYExperimentOverrideEnable *experiment;
@property (nonatomic) DYFunctionPlayer *functionPlayer;
@property (nonatomic, readonly) bool isDone;
@property (nonatomic, readonly) unsigned int prevFileFunctionIndex;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)begin;
- (void)beginIteration:(unsigned int)arg1;
- (void)dealloc;
- (void)end;
- (void)endIteration;
- (id)experiment;
- (id)functionPlayer;
- (id)init;
- (id)initWithExperiment:(id)arg1;
- (bool)isDone;
- (void)onFrameEnd;
- (void)onFrameStart;
- (void)onGraphicsFunctionEnd;
- (void)onPlatformFunctionEnd;
- (unsigned int)prevFileFunctionIndex;
- (void)setFunctionPlayer:(id)arg1;
- (bool)shouldTerminateExperiment;
- (void)startTiming;
- (void)stopTiming;
- (void)terminateExperiment;

@end
