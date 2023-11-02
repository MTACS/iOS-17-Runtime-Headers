
@interface DYPlaybackEngine : NSObject {
    bool  _active;
    void * _cache;
    <DYCaptureStore> * _captureStore;
    DYCaptureFile * _currentFile;
    unsigned int  _currentFunctionIndex;
    struct __wrap_iter<std::unique_ptr<GPUTools::Playback::FunctionStreamEntry> *> { 
        void *__i_; 
    }  _fseIterator;
    unsigned int  _functionBatchOffset;
    unsigned int  _loopCount;
    NSObject<OS_dispatch_queue> * _playbackQueue;
    DYFunctionPlayer * _player;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _playerLock;
    unsigned int  _targetFunctionIndex;
    unsigned int  _targetSubCommandIndex;
    bool  _verbose;
    bool  _waitUntilCompleteAfterEveryFrame;
}

@property (nonatomic, readonly, retain) <DYCaptureStore> *captureStore;
@property (nonatomic, readonly) DYCaptureFile *currentFile;
@property (nonatomic, readonly) unsigned int currentFunctionIndex;
@property (nonatomic) unsigned int loopCount;
@property (nonatomic, readonly, retain) DYFunctionPlayer *player;
@property (nonatomic) unsigned int targetFunctionIndex;
@property (nonatomic) unsigned int targetSubCommandIndex;
@property (nonatomic) bool verbose;
@property (nonatomic) bool waitUntilCompleteAfterEveryFrame;

- (id).cxx_construct;
- (void)_addPointerDataSizeMapToPlayer;
- (void)_allocateAndFillDataCache;
- (bool)_executeDFS:(void*)arg1;
- (void)_executeDeltaFSEs;
- (bool)_executeFSE:(void*)arg1;
- (bool)_executeFunctionStream:(void*)arg1;
- (void)_executeFunctionStreamEntriesPerformingLoopIterationActions:(bool)arg1 iteration:(unsigned int)arg2;
- (bool)_executeFunctions:(struct CoreFunction { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; union { unsigned long long x_5_1_1; unsigned long long x_5_1_2; } x5; struct Argument { void *x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned short x_6_1_5; unsigned short x_6_1_6; } x6; struct Argument { void *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned short x_7_1_5; unsigned short x_7_1_6; } x7[16]; unsigned int x8; unsigned int x9; void *x10; void *x11; }*)arg1 count:(unsigned long long)arg2;
- (void)_performPlaybackRequest:(unsigned int)arg1;
- (id)captureStore;
- (id)currentFile;
- (unsigned int)currentFunctionIndex;
- (void)dealloc;
- (id)init;
- (id)initWithCaptureStore:(id)arg1;
- (unsigned int)loopCount;
- (id)newFunctionPlayer;
- (void)onPlaybackRequestCompleted;
- (void)onPlaybackRequestStart;
- (void)performPlaybackLoopIterationPostCaptureActions:(unsigned int)arg1;
- (void)performPlaybackLoopIterationPreCaptureActions:(unsigned int)arg1;
- (id)playback;
- (id)playbackToFunction:(unsigned int)arg1;
- (void)playbackToFunction:(unsigned int)arg1 subCommandIndex:(int)arg2 withLoops:(unsigned int)arg3;
- (void)playbackToFunction:(unsigned int)arg1 withLoops:(unsigned int)arg2;
- (id)player;
- (void)setLoopCount:(unsigned int)arg1;
- (void)setTargetFunctionIndex:(unsigned int)arg1;
- (void)setTargetSubCommandIndex:(unsigned int)arg1;
- (void)setVerbose:(bool)arg1;
- (void)setWaitUntilCompleteAfterEveryFrame:(bool)arg1;
- (void)setWireframeLineWidth:(float)arg1;
- (bool)shouldPerformPlaybackLoopIteration:(unsigned int)arg1;
- (unsigned int)targetFunctionIndex;
- (unsigned int)targetSubCommandIndex;
- (bool)verbose;
- (bool)waitUntilCompleteAfterEveryFrame;
- (void)waitUntilCompleted;

@end
