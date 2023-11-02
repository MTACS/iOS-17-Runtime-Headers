
@interface AUAudioUnitV2Bridge : AUAudioUnit {
    id /* block */  _MIDIOutputEventBlock;
    id /* block */  _MIDIOutputEventListBlock;
    struct OpaqueAudioComponentInstance { } * _audioUnit;
    bool  _audioUnitIsOwned;
    AUParameterTree * _cachedParameterTree;
    struct AUListenerBase { } * _eventListener;
    NSObject<OS_dispatch_queue> * _eventListenerQueue;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _eventsTriggeringParameterTreeInvalidation;
    AUV2BridgeBusArray * _inputBusses;
    AUV2BridgeBusArray * _outputBusses;
    struct AUListenerBase { } * _parameterListener;
    NSObject<OS_dispatch_queue> * _parameterTreeRebuildQueue;
    bool  _removingObserverWithContext;
    struct unique_ptr<AUAudioUnitV2Bridge_Renderer, std::default_delete<AUAudioUnitV2Bridge_Renderer>> { 
        struct __compressed_pair<AUAudioUnitV2Bridge_Renderer *, std::default_delete<AUAudioUnitV2Bridge_Renderer>> { 
            struct AUAudioUnitV2Bridge_Renderer {} *__value_; 
        } __ptr_; 
    }  _renderer;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _willSetFullState;
}

@property (nonatomic, readonly) struct OpaqueAudioComponentInstance { }*audioUnit;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id /* block */)MIDIOutputEventBlock;
- (id /* block */)MIDIOutputEventListBlock;
- (id)_buildNewParameterTree;
- (void)_createEventListenerQueue;
- (id)_createParameterTree;
- (unsigned int)_elementCount:(unsigned int)arg1;
- (bool)_elementCountWritable:(unsigned int)arg1;
- (void)_invalidateParameterTree:(unsigned int)arg1;
- (void)_notifyParameterChange:(unsigned long long)arg1;
- (void)_rebuildBusses:(unsigned int)arg1;
- (bool)_setElementCount:(unsigned int)arg1 count:(unsigned int)arg2 error:(id*)arg3;
- (void)_setValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)_valueForProperty:(id)arg1 error:(id*)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (id)channelCapabilities;
- (void)dealloc;
- (void)deliverV2Parameters:(const union AURenderEvent { struct AURenderEventHeader { union { _Atomic /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_1_2_1; byref void*x_1_2_2; in double x_1_2_3; void*x_1_2_4; const void*x_1_2_5; void x_1_2_6; void*x_1_2_7; in void*x_1_2_8; } *x_1_1_1; long long x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; } x1; struct AUParameterEvent { union { _Atomic void*x_1_2_1; byref void*x_1_2_2; in double x_1_2_3; void*x_1_2_4; const void*x_1_2_5; void x_1_2_6; void*x_1_2_7; in void*x_1_2_8; } *x_2_1_1; long long x_2_1_2; unsigned char x_2_1_3; unsigned char x_2_1_4[3]; unsigned int x_2_1_5; unsigned long long x_2_1_6; float x_2_1_7; } x2; struct AUMIDIEvent { union { _Atomic void*x_1_2_1; byref void*x_1_2_2; in double x_1_2_3; void*x_1_2_4; const void*x_1_2_5; void x_1_2_6; void*x_1_2_7; in void*x_1_2_8; } *x_3_1_1; long long x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned short x_3_1_5; unsigned char x_3_1_6; unsigned char x_3_1_7[3]; } x3; struct AUMIDIEventList { union { _Atomic void*x_1_2_1; byref void*x_1_2_2; in double x_1_2_3; void*x_1_2_4; const void*x_1_2_5; void x_1_2_6; void*x_1_2_7; in void*x_1_2_8; } *x_4_1_1; long long x_4_1_2; unsigned char x_4_1_3; unsigned char x_4_1_4; unsigned char x_4_1_5; struct MIDIEventList { int x_6_2_1; unsigned int x_6_2_2; struct MIDIEventPacket { unsigned long long x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3[64]; } x_6_2_3[1]; } x_4_1_6; } x4; }*)arg1;
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(bool)arg3;
- (void)init2;
- (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance { }*)arg1 description:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (void)internalDeallocateRenderResources;
- (id /* block */)internalRenderBlock;
- (void)invalidateAudioUnit;
- (id)osWorkgroup;
- (id)outputBusses;
- (id)parameterTree;
- (id)parametersForOverviewWithCount:(long long)arg1;
- (bool)providesUserInterface;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (void)setCurrentPreset:(id)arg1;
- (void)setFullState:(id)arg1;
- (void)setFullStateForDocument:(id)arg1;
- (void)setMIDIOutputEventBlock:(id /* block */)arg1;
- (void)setMIDIOutputEventListBlock:(id /* block */)arg1;
- (void)setMusicalContextBlock:(id /* block */)arg1;
- (void)setTransportStateBlock:(id /* block */)arg1;

@end
