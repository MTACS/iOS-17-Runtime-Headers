
@interface DTSamplingService : DTXService <DTSamplingServiceAuthorizedAPI> {
    unsigned long long * _backtraceBuffer;
    unsigned long long  _backtraceBufferSize;
    unsigned long long  _backtraceBufferUsedSize;
    struct sampling_context_t { } * _context;
    bool  _doCollectData;
    unsigned long long  _outputRate;
    unsigned long long  _outputRateDelta;
    unsigned long long  _samplingRate;
    unsigned int  _task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerCapabilities:(id)arg1;

- (void)_allocateBuffer;
- (void)_outputData;
- (void)addSampleWithTimeInfo:(struct __CFDictionary { }*)arg1 useZeroDelta:(bool)arg2;
- (void)collectData;
- (void)dealloc;
- (id)initWithChannel:(id)arg1;
- (void)setOutputRate:(id)arg1;
- (void)setSamplingRate:(id)arg1;
- (void)setTargetPid:(id)arg1;
- (void)startSampling;
- (void)stopSampling;

@end
