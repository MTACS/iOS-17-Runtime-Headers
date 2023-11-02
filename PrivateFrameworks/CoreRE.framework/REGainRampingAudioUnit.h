
@interface REGainRampingAudioUnit : AUAudioUnit {
    float  _currentGain;
    AUAudioUnitBus * _inputBus;
    AUAudioUnitBusArray * _inputBusArray;
    AUAudioUnitBus * _outputBus;
    AUAudioUnitBusArray * _outputBusArray;
    struct unique_ptr<re::audio::FixedSpscAudioQueue<GainRampCommand>, std::default_delete<re::audio::FixedSpscAudioQueue<GainRampCommand>>> { 
        struct __compressed_pair<re::audio::FixedSpscAudioQueue<GainRampCommand> *, std::default_delete<re::audio::FixedSpscAudioQueue<GainRampCommand>>> { 
            void *__value_; 
        } __ptr_; 
    }  _rampGainQueue;
    unsigned int  _remainingRampFrames;
    float  _targetGain;
}

@property (readonly) float currentGain;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)channelCapabilities;
- (float)currentGain;
- (void)deallocateRenderResources;
- (void)fadeToGain:(float)arg1 duration:(double)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;

@end
