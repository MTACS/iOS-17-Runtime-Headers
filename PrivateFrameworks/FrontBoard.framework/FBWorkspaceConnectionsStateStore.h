
@interface FBWorkspaceConnectionsStateStore : NSObject {
    NSString * _path1;
    NSString * _path2;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _queue_lastBuffer;
    long long  _queue_nextWriteFailure;
    FBWorkspaceConnectionsState * _queue_state;
    bool  _queue_writeFailedOnce;
}

@property (nonatomic, readonly) long long _lastUsedBuffer;
@property (nonatomic, copy) FBWorkspaceConnectionsState *state;

+ (id)_loadStateFromPath:(id)arg1 outGeneration:(out bool*)arg2 outExisted:(out bool*)arg3;
+ (bool)_storeState:(id)arg1 toPath:(id)arg2 withGeneration:(bool)arg3 injectedFailure:(inout long long*)arg4;
+ (void)_unlinkAllForIdentifier:(id)arg1;
+ (void)_unlinkShmPath:(id)arg1 graceful:(bool)arg2;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1;
- (long long)_lastUsedBuffer;
- (void)_setFailureModeForNextWrite:(long long)arg1;
- (id)init;
- (void)setState:(id)arg1;
- (id)state;

@end
