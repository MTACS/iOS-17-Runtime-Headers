
@interface RERotatingShapedWhiteNoise : AUAudioUnit {
    AUAudioUnitBusArray * _outputBusArray;
    struct shared_ptr<RERotatingShapedWhiteNoiseState> { 
        struct RERotatingShapedWhiteNoiseState {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _state;
}

@property unsigned int samplePeriod;

+ (void)instantiate:(id /* block */)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (void)deallocateRenderResources;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (unsigned int)samplePeriod;
- (void)setSamplePeriod:(unsigned int)arg1;

@end
