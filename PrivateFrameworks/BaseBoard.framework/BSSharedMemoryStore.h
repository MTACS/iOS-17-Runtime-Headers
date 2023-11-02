
@interface BSSharedMemoryStore : NSObject {
    NSString * _basePath;
    NSObject<OS_dispatch_queue> * _queue;
    <BSSharedMemoryStoreData> * _queue_data;
    bool  _queue_invalidated;
    unsigned char  _queue_lastState;
    unsigned char  _queue_nextWriteFailure;
    struct { 
        BOOL path[32]; 
        BOOL offset; 
    }  _queue_path;
    bool  _queue_writeFailedOnce;
}

@property (nonatomic, readonly) unsigned char _lastState;
@property (nonatomic, copy) <BSSharedMemoryStoreData> *data;

+ (void)_unlinkAllForIdentifier:(id)arg1;
+ (id)deserializeDataOfClass:(Class)arg1 withSerializedFromData:(id)arg2;

- (void).cxx_destruct;
- (unsigned char)_lastState;
- (void)_setFailureModeForNextWrite:(unsigned char)arg1;
- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithIdentifier:(id)arg1 dataClass:(Class)arg2;
- (void)invalidate;
- (void)setData:(id)arg1;

@end
