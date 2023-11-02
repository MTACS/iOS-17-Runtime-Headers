
@interface REOutputStageAudioUnit : AUAudioUnit {
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _clipCount;
    AVAudioPCMBuffer * _inputBuffer;
    AUAudioUnitBus * _inputBus;
    AUAudioUnitBusArray * _inputBusArray;
    AUAudioUnitBus * _outputBus;
    AUAudioUnitBusArray * _outputBusArray;
}

- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)channelCapabilities;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;

@end
