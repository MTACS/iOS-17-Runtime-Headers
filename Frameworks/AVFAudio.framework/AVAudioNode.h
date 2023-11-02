
@interface AVAudioNode : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) AUAudioUnit *AUAudioUnit;
@property (nonatomic, readonly) AVAudioEngine *engine;
@property (nonatomic, readonly) void*impl;
@property (nonatomic, readonly) AVAudioTime *lastRenderTime;
@property (nonatomic, readonly) double latency;
@property (nonatomic, readonly) unsigned long long numberOfInputs;
@property (nonatomic, readonly) unsigned long long numberOfOutputs;
@property (nonatomic, readonly) double outputPresentationLatency;

- (id)AUAudioUnit;
- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (id)clock;
- (void)dealloc;
- (id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2;
- (void)didAttachToEngine:(id)arg1;
- (void)didDetachFromEngine:(id)arg1 error:(id*)arg2;
- (id)engine;
- (void*)impl;
- (id)init;
- (id)initWithImpl:(void*)arg1;
- (id)inputFormatForBus:(unsigned long long)arg1;
- (void)installTapOnBus:(unsigned long long)arg1 bufferSize:(unsigned int)arg2 format:(id)arg3 block:(id /* block */)arg4;
- (id)lastRenderTime;
- (double)latency;
- (id)nameForInputBus:(unsigned long long)arg1;
- (id)nameForOutputBus:(unsigned long long)arg1;
- (unsigned long long)numberOfInputs;
- (unsigned long long)numberOfOutputs;
- (float)obstruction;
- (float)occlusion;
- (id)outputFormatForBus:(unsigned long long)arg1;
- (double)outputPresentationLatency;
- (float)pan;
- (long long)pointSourceInHeadMode;
- (struct AVAudio3DPoint { float x1; float x2; float x3; })position;
- (float)rate;
- (void)removeTapOnBus:(unsigned long long)arg1;
- (long long)renderingAlgorithm;
- (void)reset;
- (bool)resetImpl:(void*)arg1;
- (float)reverbBlend;
- (bool)setInputFormat:(id)arg1 forBus:(unsigned long long)arg2;
- (void)setNumberOfInputs:(unsigned int)arg1;
- (void)setNumberOfOutputs:(unsigned int)arg1;
- (void)setObstruction:(float)arg1;
- (void)setOcclusion:(float)arg1;
- (bool)setOutputFormat:(id)arg1 forBus:(unsigned long long)arg2;
- (void)setPan:(float)arg1;
- (void)setPointSourceInHeadMode:(long long)arg1;
- (void)setPosition:(struct AVAudio3DPoint { float x1; float x2; float x3; })arg1;
- (void)setRate:(float)arg1;
- (void)setRenderingAlgorithm:(long long)arg1;
- (void)setReverbBlend:(float)arg1;
- (void)setSourceMode:(long long)arg1;
- (void)setVolume:(float)arg1;
- (long long)sourceMode;
- (float)volume;

@end
