
@interface ChannelDataCaptureAudioUnit : AUAudioUnit {
    struct array<std::vector<float>, 2UL> { 
        struct vector<float, std::allocator<float>> { 
            float *__begin_; 
            float *__end_; 
            struct __compressed_pair<float *, std::allocator<float>> { 
                float *__value_; 
            } __end_cap_; 
        } __elems_[2]; 
    }  _buffers;
    AVAudioPCMBuffer * _inputBuffer;
    AUAudioUnitBus * _inputBus;
    AUAudioUnitBusArray * _inputBusArray;
    AUAudioUnitBus * _outputBus;
    AUAudioUnitBusArray * _outputBusArray;
    AVAudioPCMBuffer * capturedBuffer;
    struct vector<int, std::allocator<int>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::allocator<int>> { 
            int *__value_; 
        } __end_cap_; 
    }  capturedPositions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)channelCapabilities;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (void)startRecording:(int)arg1;
- (id)stopRecording;

@end
