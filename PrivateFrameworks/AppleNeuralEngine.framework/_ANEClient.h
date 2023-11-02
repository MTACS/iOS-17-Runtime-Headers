
@interface _ANEClient : NSObject {
    bool  _allowRestrictedAccess;
    _ANEDaemonConnection * _conn;
    NSMutableDictionary * _connections;
    NSMutableDictionary * _connectionsUsedForLoadingModels;
    _ANEDaemonConnection * _fastConn;
    bool  _isRootDaemon;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _priorityQ;
    _ANEVirtualClient * _virtualClient;
}

@property (nonatomic, readonly) bool allowRestrictedAccess;
@property (nonatomic, readonly) _ANEDaemonConnection *conn;
@property (nonatomic, readonly) NSMutableDictionary *connections;
@property (nonatomic, readonly) NSMutableDictionary *connectionsUsedForLoadingModels;
@property (nonatomic, readonly) _ANEDaemonConnection *fastConn;
@property (nonatomic, readonly) bool isRootDaemon;
@property (nonatomic, readonly) NSArray *priorityQ;
@property (nonatomic, readonly) _ANEVirtualClient *virtualClient;

+ (void)initialize;
+ (id)new;
+ (id)sharedConnection;
+ (id)sharedPrivateConnection;

- (void).cxx_destruct;
- (bool)allowRestrictedAccess;
- (bool)beginRealTimeTask;
- (bool)buffersReadyWithModel:(id)arg1 inputBuffers:(id)arg2 options:(id)arg3 qos:(unsigned int)arg4 error:(id*)arg5;
- (bool)compileModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id*)arg4;
- (bool)compiledModelExistsFor:(id)arg1;
- (bool)compiledModelExistsMatchingHash:(id)arg1;
- (id)conn;
- (id)connectionForLoadingModel:(id)arg1 options:(id)arg2;
- (id)connectionUsedForLoadingModel:(id)arg1;
- (id)connections;
- (id)connectionsUsedForLoadingModels;
- (void)dealloc;
- (bool)doBuffersReadyWithModel:(id)arg1 inputBuffers:(id)arg2 options:(id)arg3 qos:(unsigned int)arg4 error:(id*)arg5;
- (bool)doEnqueueSetsWithModel:(id)arg1 outputSet:(id)arg2 options:(id)arg3 qos:(unsigned int)arg4 error:(id*)arg5;
- (bool)doEvaluateDirectWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 qos:(unsigned int)arg4 error:(id*)arg5;
- (bool)doLoadModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id*)arg4;
- (bool)doPrepareChainingWithModel:(id)arg1 options:(id)arg2 chainingReq:(id)arg3 qos:(unsigned int)arg4 error:(id*)arg5;
- (bool)doUnloadModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id*)arg4;
- (bool)echo:(id)arg1;
- (bool)endRealTimeTask;
- (bool)enqueueSetsWithModel:(id)arg1 outputSet:(id)arg2 options:(id)arg3 qos:(unsigned int)arg4 error:(id*)arg5;
- (bool)evaluateRealTimeWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 error:(id*)arg4;
- (bool)evaluateWithModel:(id)arg1 options:(id)arg2 request:(id)arg3 qos:(unsigned int)arg4 error:(id*)arg5;
- (id)fastConn;
- (id)fastConnWithoutLock;
- (id)init;
- (id)initWithRestrictedAccessAllowed:(bool)arg1;
- (bool)isRootDaemon;
- (bool)isVirtualClient;
- (bool)loadModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id*)arg4;
- (bool)loadRealTimeModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id*)arg4;
- (bool)mapIOSurfacesWithModel:(id)arg1 request:(id)arg2 cacheInference:(bool)arg3 error:(id*)arg4;
- (bool)prepareChainingWithModel:(id)arg1 options:(id)arg2 chainingReq:(id)arg3 qos:(unsigned int)arg4 error:(id*)arg5;
- (id)priorityQ;
- (void)purgeCompiledModel:(id)arg1;
- (void)purgeCompiledModelMatchingHash:(id)arg1;
- (bool)unloadModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id*)arg4;
- (bool)unloadRealTimeModel:(id)arg1 options:(id)arg2 qos:(unsigned int)arg3 error:(id*)arg4;
- (void)unmapIOSurfacesWithModel:(id)arg1 request:(id)arg2;
- (id)virtualClient;

@end
