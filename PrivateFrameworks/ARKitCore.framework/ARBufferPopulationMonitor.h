
@interface ARBufferPopulationMonitor : NSObject {
    ARBufferPopulationRegistry * _bufferPopulationRegistry;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _bufferPopulationRegistryLock;
    <ARBufferPopulationMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct __IOSurfaceNotifier { } * _surfaceNotifier;
    NSObject<OS_dispatch_queue> * _surfaceNotifierCallbackQueue;
    void * _weakReferenceForSurfaceNotifierCallback;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) <ARBufferPopulationMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)countWithLabel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)emitEndSignpost:(int)arg1 surfaceID:(unsigned long long)arg2 count:(unsigned long long)arg3 timestamp:(double)arg4;
- (void)emitStartSignpost:(int)arg1 surfaceID:(unsigned long long)arg2 count:(unsigned long long)arg3 timestamp:(double)arg4;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)trackDataBuffer:(struct __CVBuffer { }*)arg1;
- (void)trackDataBuffer:(struct __CVBuffer { }*)arg1 withLabel:(id)arg2 timestamp:(double)arg3 signpostType:(int)arg4;
- (void)trackPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)trackPixelBuffer:(struct __CVBuffer { }*)arg1 withLabel:(id)arg2 timestamp:(double)arg3 signpostType:(int)arg4;
- (void)trackSurface:(struct __IOSurface { }*)arg1;
- (void)trackSurface:(struct __IOSurface { }*)arg1 withLabel:(id)arg2 timestamp:(double)arg3 signpostType:(int)arg4;
- (void)updateBufferPopulationRegistryWithReleasedSurfaceID:(unsigned int)arg1;

@end
