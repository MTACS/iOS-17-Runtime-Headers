
@interface AUAudioUnit_XPC : AUAudioUnit {
    AUParameterTree * _cachedParameterTree;
    bool  _canProcess;
    bool  _canRender;
    struct OpaqueAudioComponentInstance { } * _componentInstance;
    AUCrashHandler * _crashHandler;
    struct unique_ptr<AUProcAndUserData, std::default_delete<AUProcAndUserData>> { 
        struct __compressed_pair<AUProcAndUserData *, std::default_delete<AUProcAndUserData>> { 
            struct AUProcAndUserData {} *__value_; 
        } __ptr_; 
    }  _elementCountListenerToken;
    AUAudioUnitBusArray_XPC * _inputBusses;
    AUAudioUnitBusArray_XPC * _outputBusses;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _parameterTreeMutex;
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _propListenerMutex;
    struct vector<AUAudioUnit_XPC_PropListener, std::allocator<AUAudioUnit_XPC_PropListener>> { 
        struct AUAudioUnit_XPC_PropListener {} *__begin_; 
        struct AUAudioUnit_XPC_PropListener {} *__end_; 
        struct __compressed_pair<AUAudioUnit_XPC_PropListener *, std::allocator<AUAudioUnit_XPC_PropListener>> { 
            struct AUAudioUnit_XPC_PropListener {} *__value_; 
        } __end_cap_; 
    }  _propListeners;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _remoteMachTimebaseInfo;
    int  _remotePID;
    bool  _removingObserverWithContext;
    struct shared_ptr<caulk::synchronized<auoop::RenderPipePool, std::recursive_mutex>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _renderPipePool;
    struct optional<auoop::RenderPipeUser> { 
        union { 
            BOOL __null_state_; 
            struct RenderPipeUser { 
                struct PipeSubPool {} *mPipeSubPool; 
                struct AUOOPRenderClientUser { 
                    AUAudioUnit_XPC *au; 
                    NSXPCConnection *xpcConnection; 
                    id /* block */ musicalContextBlock; 
                    id /* block */ transportStateBlock; 
                    id /* block */ MIDIOutputEventBlock; 
                    id /* block */ MIDIOutputEventListBlock; 
                    unsigned int serviceProcessAUInstanceToken; 
                    bool isOffline; 
                    bool isMIDIProcessor; 
                } mRenderClientUser; 
                struct atomic<bool> { 
                    struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
                        _Atomic bool __a_value; 
                    } __a_; 
                } mInvalidated; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _renderPipeUser;
    NSArray * _userPresets;
    NSXPCConnection * _xpcConnection;
}

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_doOpen:(id)arg1 completion:(id /* block */)arg2;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id*)arg3;
- (id)_getInvalidationNotificationInfo;
- (id)_getValueForKey:(id)arg1;
- (id)_getValueForProperty:(id)arg1 error:(id*)arg2;
- (void)_invalidatePipePoolAndUser;
- (void)_parameterTreeChanged;
- (void)_refreshBusses:(unsigned int)arg1;
- (bool)_setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 error:(id*)arg3;
- (void)_setComponentInstance:(struct OpaqueAudioComponentInstance { }*)arg1;
- (void)_setState:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)_setValue:(id)arg1 forProperty:(id)arg2 error:(id*)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (void)cancelSpeechRequest;
- (void)dealloc;
- (bool)deleteUserPreset:(id)arg1 error:(id*)arg2;
- (void)didCrash:(id)arg1;
- (void)didInvalidate;
- (bool)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4;
- (bool)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4;
- (float)getV2Parameter:(unsigned long long)arg1 sequenceNumber:(unsigned int)arg2;
- (id)inputBusses;
- (void)internalDeallocateRenderResources;
- (id /* block */)internalRenderBlock;
- (void)invalidateAllParameters;
- (bool)isLoadedInProcess;
- (id)messageChannelFor:(id)arg1;
- (id)outputBusses;
- (id)parameterTree;
- (id)parametersForOverviewWithCount:(long long)arg1;
- (id)presetStateFor:(id)arg1 error:(id*)arg2;
- (id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2;
- (void)propertiesChanged:(id)arg1;
- (bool)providesUserInterface;
- (struct { unsigned int x1[8]; })remoteProcessAuditToken;
- (int)remoteProcessIdentifier;
- (void)remoteReset;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)reset;
- (bool)saveUserPreset:(id)arg1 error:(id*)arg2;
- (void)selectViewConfiguration:(id)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setFullState:(id)arg1;
- (void)setFullStateForDocument:(id)arg1;
- (void)setMusicalContextBlock:(id /* block */)arg1;
- (void)setTransportStateBlock:(id /* block */)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)speechVoices;
- (id)supportedViewConfigurations:(id)arg1;
- (void)synthesizeSpeechRequest:(id)arg1;
- (id)userPresets;
- (id)valueForUndefinedKey:(id)arg1;

@end
