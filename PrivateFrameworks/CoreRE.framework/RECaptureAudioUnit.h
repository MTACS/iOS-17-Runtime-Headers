
@interface RECaptureAudioUnit : AUAudioUnit {
    NSString * _captureName;
    AVAudioPCMBuffer * _inputBuffer;
    AUAudioUnitBus * _inputBus;
    AUAudioUnitBusArray * _inputBusArray;
    AUAudioUnitBus * _outputBus;
    AUAudioUnitBusArray * _outputBusArray;
    struct shared_ptr<AudioStreamRecordingManager::StreamWriter> { 
        struct StreamWriter {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _recordingStreamWriter;
}

@property (nonatomic, copy) NSString *captureName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)captureName;
- (id)channelCapabilities;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (void)setCaptureName:(id)arg1;

@end
