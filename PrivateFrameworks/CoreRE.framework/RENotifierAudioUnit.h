
@interface RENotifierAudioUnit : AUAudioUnit {
    id /* block */  _didAllocate;
    id /* block */  _didDeallocate;
    id /* block */  _firstRender;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _hasNotified;
    AUAudioUnitBus * _inputBus;
    AUAudioUnitBusArray * _inputBusArray;
    AUAudioUnitBus * _outputBus;
    AUAudioUnitBusArray * _outputBusArray;
}

@property (nonatomic, copy) id /* block */ didAllocate;
@property (nonatomic, copy) id /* block */ didDeallocate;
@property (nonatomic, copy) id /* block */ firstRender;
@property (readonly) bool hasNotified;

+ (void)registerToAudioUnit;

- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)channelCapabilities;
- (void)deallocateRenderResources;
- (id /* block */)didAllocate;
- (id /* block */)didDeallocate;
- (id /* block */)firstRender;
- (bool)hasNotified;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (id)outputBusses;
- (void)resetNotifications;
- (void)setDidAllocate:(id /* block */)arg1;
- (void)setDidDeallocate:(id /* block */)arg1;
- (void)setFirstRender:(id /* block */)arg1;

@end
