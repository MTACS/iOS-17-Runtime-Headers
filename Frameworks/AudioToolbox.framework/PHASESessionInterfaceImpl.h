
@interface PHASESessionInterfaceImpl : NSObject <PHASESessionInterface> {
    id /* block */  _activateSessionBlock;
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _callbackMutex;
    id /* block */  _fadeSessionOutputBlock;
    id /* block */  _muteSessionInputBlock;
    ATPhasePlatform * _phasePlatform;
    id  _sessionVolumeImpl;
    struct unordered_set<unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<unsigned int>> { 
        struct __hash_table<unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<unsigned int>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned int, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned int, void *> *>, std::allocator<std::__hash_node<unsigned int, void *>>> { 
                struct __hash_node_base<std::__hash_node<unsigned int, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::hash<unsigned int>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::equal_to<unsigned int>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  audioSessionIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PHASESessionVolumeInterface> *sessionVolumeInterface;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)activateSession:(unsigned int)arg1 activate:(bool)arg2;
- (void)dealloc;
- (int)fadeClientsInSession:(unsigned int)arg1 activating:(bool)arg2 fadeLevel:(float)arg3 fadeTime:(float)arg4;
- (id)init;
- (id)initWithPhasePlatform:(id)arg1;
- (id)lazyInitSessionVolumeInterface;
- (int)muteSessionInput:(unsigned int)arg1 mute:(bool)arg2 fadeTime:(float)arg3;
- (void)refreshInputMuteOnAllSessions:(float)arg1;
- (bool)registerActivateAudioSessionBlock:(id /* block */)arg1;
- (bool)registerFadeClientsInAudioSessionBlock:(id /* block */)arg1;
- (bool)registerMuteInputClientsInAudioSessionBlock:(id /* block */)arg1;
- (id)sessionVolumeInterface;
- (bool)setClientStateFromCallbackOnSession:(unsigned int)arg1 clientToken:(void*)arg2 modes:(unsigned int)arg3 state:(unsigned int)arg4 outDuckingInfo:(struct AudioSessionDuckingInfo { bool x1; float x2; float x3; }*)arg5;
- (bool)setClientStateOnSession:(unsigned int)arg1 clientToken:(void*)arg2 modes:(unsigned int)arg3 state:(unsigned int)arg4 outDuckingInfo:(struct AudioSessionDuckingInfo { bool x1; float x2; float x3; }*)arg5;
- (bool)setInputMuteStateFromCallbackOnSession:(unsigned int)arg1 clientToken:(void*)arg2 isMuted:(bool)arg3;
- (bool)setInputMuteStateOnSession:(unsigned int)arg1 clientToken:(void*)arg2 isMuted:(bool)arg3;

@end
