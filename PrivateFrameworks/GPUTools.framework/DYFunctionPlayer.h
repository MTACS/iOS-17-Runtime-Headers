
@interface DYFunctionPlayer : NSObject {
    void * _argumentPointers;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _argumentStorePositions;
    struct vector<std::pair<std::string, bool>, std::allocator<std::pair<std::string, bool>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<std::string, bool> *, std::allocator<std::pair<std::string, bool>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _argumentURLs;
    <DYCaptureStore> * _captureStore;
    unsigned long long  _ctxID;
    unsigned int  _currentExecutionModeFunctionIndex;
    unsigned int  _currentFileFunctionIndex;
    struct unordered_map<void *, unsigned long, std::hash<void *>, std::equal_to<void *>, std::allocator<std::pair<void *const, unsigned long>>> { 
        struct __hash_table<std::__hash_value_type<void *, unsigned long>, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>>, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>>, std::allocator<std::__hash_value_type<void *, unsigned long>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<void *, unsigned long>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<void *, std::__hash_value_type<void *, unsigned long>, std::hash<void *>, std::equal_to<void *>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<void *, std::__hash_value_type<void *, unsigned long>, std::equal_to<void *>, std::hash<void *>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _dataSizeMap;
    DYPlaybackEngine * _engine;
    int (* _executeGraphics;
    SEL  _executeGraphicsSEL;
    int (* _executePlatform;
    SEL  _executePlatformSEL;
    unsigned int  _frameCounter;
    struct CoreFunction { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; union { unsigned long long x_5_1_1; unsigned long long x_5_1_2; } x5; struct Argument { void *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned short x_6_1_5; unsigned short x_6_1_6; } x6; struct Argument { void *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned short x_7_1_5; unsigned short x_7_1_6; } x7[16]; unsigned int x8; unsigned int x9; void *x10; void *x11; } * _function;
    struct SequenceCache { 
        unsigned int _state; 
        unsigned int _streamIdx; 
        unsigned int _streamNum; 
        unsigned int _dataIdx; 
        unsigned int _dataNum; 
        struct vector<unsigned int, std::allocator<unsigned int>> { 
            unsigned int *__begin_; 
            unsigned int *__end_; 
            struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
                unsigned int *__value_; 
            } __end_cap_; 
        } _dataList; 
        struct vector<std::vector<std::pair<unsigned int, unsigned int>>, std::allocator<std::vector<std::pair<unsigned int, unsigned int>>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::vector<std::pair<unsigned int, unsigned int>> *, std::allocator<std::vector<std::pair<unsigned int, unsigned int>>>> { 
                void *__value_; 
            } __end_cap_; 
        } _compressedDataList; 
    }  _functionIndexSequence;
    int (* _isFrameBoundary;
    SEL  _isFrameBoundarySEL;
    bool  _lastCommandWasFrameBoundary;
    bool  _mainExecutionMode;
    struct MemoryManager { 
        unsigned int _state; 
        unsigned int _alignment; 
        unsigned int _bufferSize; 
        unsigned int _bufferCounter; 
        void *_pBuffer; 
        void *_pBufferBegin; 
        void *_pBufferEnd; 
        void *_pBufferPosition; 
        struct MemBlock {} *_pMemBlockHead; 
        unsigned long long _memBlockSizeTotalMax; 
        unsigned int _memBlockCounter; 
    }  _memoryManager;
    void * _pointers;
    unsigned int  _pointers_alloc_bitfield;
    void * _retval_buffer;
    int (* _shouldExecuteGraphics;
    SEL  _shouldExecuteGraphicsSEL;
    bool  _skipOptionalFunctions;
    NSMapTable * _variables;
}

@property (nonatomic, readonly, retain) <DYCaptureStore> *captureStore;
@property (nonatomic, readonly) unsigned long long ctxID;
@property (nonatomic, readonly) unsigned int currentExecutionModeFunctionIndex;
@property (nonatomic, readonly) unsigned int currentFileFunctionIndex;
@property (nonatomic) DYPlaybackEngine *engine;
@property (nonatomic) unsigned int frameCounter;
@property (nonatomic, readonly) struct CoreFunction { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; union { unsigned long long x_5_1_1; unsigned long long x_5_1_2; } x5; struct Argument { void *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned short x_6_1_5; unsigned short x_6_1_6; } x6; struct Argument { void *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned short x_7_1_5; unsigned short x_7_1_6; } x7[16]; unsigned int x8; unsigned int x9; void *x10; void *x11; }*function;
@property (nonatomic, readonly) bool mainExecutionMode;
@property (nonatomic) bool skipOptionalFunctions;

+ (struct CGSize { double x1; double x2; })shrinkSourceSize:(struct CGSize { double x1; double x2; })arg1 toDestSize:(struct CGSize { double x1; double x2; })arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPointerDataSizeMap:(void*)arg1;
- (id)captureStore;
- (void*)copyDataForFilename:(const char *)arg1 dataSize:(unsigned long long*)arg2;
- (unsigned long long)ctxID;
- (unsigned int)currentExecutionModeFunctionIndex;
- (unsigned int)currentFileFunctionIndex;
- (void)dealloc;
- (id)engine;
- (void)executeFunctions:(struct CoreFunction { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; union { unsigned long long x_5_1_1; unsigned long long x_5_1_2; } x5; struct Argument { void *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned short x_6_1_5; unsigned short x_6_1_6; } x6; struct Argument { void *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned short x_7_1_5; unsigned short x_7_1_6; } x7[16]; unsigned int x8; unsigned int x9; void *x10; void *x11; }*)arg1 count:(unsigned long long)arg2;
- (void)executeFunctions:(struct CoreFunction { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; union { unsigned long long x_5_1_1; unsigned long long x_5_1_2; } x5; struct Argument { void *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned short x_6_1_5; unsigned short x_6_1_6; } x6; struct Argument { void *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned short x_7_1_5; unsigned short x_7_1_6; } x7[16]; unsigned int x8; unsigned int x9; void *x10; void *x11; }*)arg1 count:(unsigned long long)arg2 subCommandIndex:(unsigned int)arg3;
- (void)executeGraphicsFunction;
- (void)executePlatformFunction;
- (unsigned int)frameCounter;
- (struct CoreFunction { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; union { unsigned long long x_5_1_1; unsigned long long x_5_1_2; } x5; struct Argument { void *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned short x_6_1_5; unsigned short x_6_1_6; } x6; struct Argument { void *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned short x_7_1_5; unsigned short x_7_1_6; } x7[16]; unsigned int x8; unsigned int x9; void *x10; void *x11; }*)function;
- (id)init;
- (id)initWithCaptureStore:(id)arg1;
- (bool)isFrameBoundary;
- (bool)mainExecutionMode;
- (void)performNewExecutionFileActions;
- (void)performNewFrameActions;
- (void)performPostDispatchFrameBoundaryActions;
- (void)performPreDispatchFrameBoundaryActions;
- (void)prepareForCaptureExecution;
- (void)prepareForNonCaptureExecution;
- (void)processArguments;
- (void)releaseArguments;
- (void)releaseDataForArgument:(int)arg1;
- (void)releaseDataForPosition:(unsigned long long)arg1;
- (void*)requestDataForFilename:(const char *)arg1 dataSize:(unsigned long long*)arg2 position:(unsigned long long*)arg3;
- (void*)requestDataForPosition:(unsigned long long)arg1 dataSize:(unsigned long long*)arg2;
- (void)setCurrentContext:(unsigned long long)arg1;
- (void)setEngine:(id)arg1;
- (void)setFrameCounter:(unsigned int)arg1;
- (void)setSkipOptionalFunctions:(bool)arg1;
- (bool)shouldExecuteGraphicsFunction;
- (bool)skipOptionalFunctions;

@end
