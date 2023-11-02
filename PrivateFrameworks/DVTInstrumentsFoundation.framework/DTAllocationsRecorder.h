
@interface DTAllocationsRecorder : NSObject {
    id /* block */  _bufferHandler;
    unsigned long long  _bytesTotal;
    id /* block */  _eventHandler;
    int  _eventTotal;
    struct { double x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; long long x7; unsigned long long x8[0]; } * _fullEvent;
    _Atomic unsigned long long  _outstandingBytes;
    struct { double x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; long long x7; unsigned long long x8[0]; } * _partialEvent;
    unsigned int  _partialFilled;
    unsigned int  _partialSize;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _readStackLogsUponAttach;
    NSObject<OS_dispatch_queue> * _serialEventQueue;
    unsigned int  _sharedMemorySize;
    struct DTXSharedMemory { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; _Atomic int x8; _Atomic int x9; _Atomic unsigned int x10; _Atomic int x11; _Atomic int x12; _Atomic int x13; _Atomic int x14; unsigned int x15; unsigned int x16; unsigned int x17; BOOL x18[0]; } * _shmem;
    int  _stopCollection;
    unsigned int  _targetTask;
    struct map<unsigned long long, std::map<unsigned int, OAKeyFrame *>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::map<unsigned int, OAKeyFrame *>>>> { 
        struct __tree<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::map<unsigned int, OAKeyFrame *>>, std::less<unsigned long long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _threadToKeyFramesMap;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _trackingSymbolicator;
}

@property (nonatomic, copy) id /* block */ bufferHandler;
@property (readonly) int eventCount;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic) bool readStackLogsUponAttach;
@property (nonatomic) unsigned int sharedMemorySize;

+ (id)_libraryPath;
+ (unsigned int)allEventsMask;
+ (bool)configureLocalLaunchEnvironment:(id)arg1 recordedEventsMask:(unsigned int)arg2;
+ (unsigned int)cppClassNamesMask;
+ (int)currentVersion;
+ (unsigned int)mallocReallocFreeEventsMask;
+ (unsigned int)retainReleaseAutoEventsMask;
+ (id)serviceIdentifier;
+ (unsigned int)vmEventsMask;
+ (unsigned int)zombieEventsMask;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_endAndTossResources:(bool)arg1;
- (void)_processIncomingData;
- (unsigned long long)_setupSharedMemoryInTask:(unsigned int)arg1;
- (bool)_startWithError:(id*)arg1;
- (void)addKeyFrame:(struct { double x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; long long x7; unsigned long long x8[0]; }*)arg1;
- (id /* block */)bufferHandler;
- (void)cancel;
- (void)createFullEventFromDelta:(struct { double x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; long long x7; unsigned long long x8[0]; }*)arg1 withEvent:(struct { double x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; long long x7; unsigned long long x8[0]; }*)arg2;
- (void)dealloc;
- (int)eventCount;
- (id /* block */)eventHandler;
- (id)init;
- (void)processBufferMessage:(id)arg1;
- (bool)readStackLogsUponAttach;
- (void)setBufferHandler:(id /* block */)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setReadStackLogsUponAttach:(bool)arg1;
- (void)setSharedMemorySize:(unsigned int)arg1;
- (unsigned int)sharedMemorySize;
- (void)startAttachingToTask:(unsigned int)arg1 recordedEventsMask:(unsigned int)arg2 errorHandler:(id /* block */)arg3;
- (bool)startForProcessingBuffersWithError:(id*)arg1;
- (void)stop;

@end
