
@interface DYGLFunctionPlayer : DYFunctionPlayer {
    DYGLCaptureSessionInfo * _captureSessionInfo;
    struct unordered_map<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unique_ptr<GPUTools::Playback::GL::ContextInfo>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _contextInfoMap;
    EAGLContext * _ctx;
    NSMutableDictionary * _ctx_dict;
    void * _currentContextInfo;
    bool  _didWarnClientStorageApple;
    bool  _didWarnVertexAttribDivisorSnowLeopard;
    bool  _did_warn_texture_storage;
    struct __GLIFunctionDispatchRec { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); int (*x28)(); int (*x29)(); int (*x30)(); int (*x31)(); int (*x32)(); int (*x33)(); int (*x34)(); int (*x35)(); int (*x36)(); int (*x37)(); int (*x38)(); int (*x39)(); int (*x40)(); int (*x41)(); int (*x42)(); int (*x43)(); int (*x44)(); int (*x45)(); int (*x46)(); int (*x47)(); int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); int (*x54)(); int (*x55)(); int (*x56)(); int (*x57)(); int (*x58)(); int (*x59)(); int (*x60)(); int (*x61)(); int (*x62)(); int (*x63)(); int (*x64)(); int (*x65)(); int (*x66)(); int (*x67)(); int (*x68)(); int (*x69)(); int (*x70)(); int (*x71)(); int (*x72)(); int (*x73)(); int (*x74)(); } * _disp;
    struct __GLIContextRec { } * _gli_ctx;
    bool  _lastCommandWasFrameBoundary;
    bool  _recreateContexts;
    DYIntKeyedDictionary * _sharegroupMap;
    NSMutableDictionary * _sharegroup_dict;
}

@property (nonatomic, readonly, retain) DYGLCaptureSessionInfo *captureSessionInfo;
@property (nonatomic, readonly) EAGLContext *context;
@property (nonatomic, readonly, retain) NSMutableDictionary *contextDictionary;
@property (nonatomic, readonly) void*currentContextInfo;
@property (nonatomic, readonly) struct __GLIContextRec { }*gliContext;
@property (nonatomic, readonly) struct __GLIFunctionDispatchRec { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); int (*x28)(); int (*x29)(); int (*x30)(); int (*x31)(); int (*x32)(); int (*x33)(); int (*x34)(); int (*x35)(); int (*x36)(); int (*x37)(); int (*x38)(); int (*x39)(); int (*x40)(); int (*x41)(); int (*x42)(); int (*x43)(); int (*x44)(); int (*x45)(); int (*x46)(); int (*x47)(); int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); int (*x54)(); int (*x55)(); int (*x56)(); int (*x57)(); int (*x58)(); int (*x59)(); int (*x60)(); int (*x61)(); int (*x62)(); int (*x63)(); int (*x64)(); int (*x65)(); int (*x66)(); int (*x67)(); int (*x68)(); int (*x69)(); int (*x70)(); int (*x71)(); int (*x72)(); int (*x73)(); int (*x74)(); }*gliDispatch;
@property (nonatomic) bool recreateContexts;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dispatchGLFunction;
- (id)captureSessionInfo;
- (id)context;
- (id)contextDictionary;
- (id)contextForContextIdentifier:(unsigned long long)arg1;
- (void*)currentContextInfo;
- (void)dealloc;
- (void)deleteCurrentContext;
- (void)executeGraphicsFunction;
- (void)executePlatformFunction;
- (struct __GLIContextRec { }*)gliContext;
- (struct __GLIFunctionDispatchRec { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); int (*x28)(); int (*x29)(); int (*x30)(); int (*x31)(); int (*x32)(); int (*x33)(); int (*x34)(); int (*x35)(); int (*x36)(); int (*x37)(); int (*x38)(); int (*x39)(); int (*x40)(); int (*x41)(); int (*x42)(); int (*x43)(); int (*x44)(); int (*x45)(); int (*x46)(); int (*x47)(); int (*x48)(); int (*x49)(); int (*x50)(); int (*x51)(); int (*x52)(); int (*x53)(); int (*x54)(); int (*x55)(); int (*x56)(); int (*x57)(); int (*x58)(); int (*x59)(); int (*x60)(); int (*x61)(); int (*x62)(); int (*x63)(); int (*x64)(); int (*x65)(); int (*x66)(); int (*x67)(); int (*x68)(); int (*x69)(); int (*x70)(); int (*x71)(); int (*x72)(); int (*x73)(); int (*x74)(); }*)gliDispatch;
- (id)initWithCaptureStore:(id)arg1;
- (void)initializeNewSharegroupInfoDictionary;
- (void*)newContextInfo;
- (void)performPostGraphicsFunctionDispatchActions:(bool)arg1;
- (bool)recreateContexts;
- (void)setCurrentContext:(unsigned long long)arg1;
- (void)setRecreateContexts:(bool)arg1;
- (void)updateCurrentStateWithNewContext:(id)arg1 contextID:(unsigned long long)arg2 sharegroupID:(unsigned long long)arg3;

@end
